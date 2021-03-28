
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
// #define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test()
    {
        bool dp[300]={false},flag=false;
        ll n,a,i,j;
        vector<ll>mp;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>a;
            mp.push_back(a);
            dp[a]=true;
        }

        for(auto i:mp)
        {
            if(i==1)
            {
                flag=true;
                break;
            }
        }

        for(auto i:mp)
        {
            if(i==2*n)
            {
                flag=false;
                break;
            }
        }

        if(flag==false)
        cout<<-1<<endl;
        

        else 
        {
            vector<ll>ans;
            bool corner;
            
            // cout<<"YES"<<endl;
            for(auto i:mp)
            {
                corner=false;
                ans.push_back(i);
                for(j=i+1;j<=2*n;j++)
                {
                    if(dp[j]==false)
                    {
                        ans.push_back(j);
                        dp[j]=true;
                        corner=true;
                        break;
                    }
                }

                if(corner==false)
                break;
                
            }

            if(corner==true)
            {
                for(auto i:ans)
                cout<<i<<" ";
                cout<<endl;
            }


            else 
            cout<<-1<<endl;
            


            
        }


    }
    return 0;
}