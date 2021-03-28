
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
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
        ll n,i;
        string final;
        bool flag1=true,flag2=true;
        vector<ll>first,second;
        cin>>n;
        cin>>final;
        ll cnt=0;

        // itoa(final,str,16);
        // cout<<str<<endl;

        for(i=0;i<n;i++)
        {
            char rem=final[i];
            if(rem=='0')
            {
                first.pb(0);
                second.pb(0);
            }

            else if(rem=='1')
            {
                if(flag1==true)
                {
                    first.pb(1);
                    second.pb(0);
                    flag1=false;
                }

                else if(flag1==false)
                {
                    first.pb(0);
                    second.pb(1);
                }
                
            }

            else if(rem=='2')
            {
                // cout<<"YES"<<endl;
                if(flag1==true)
                {
                    first.pb(1);
                    second.pb(1);
                    // flag2=false;
                }

                else 
                {
                    first.pb(0);
                    second.pb(2);
                }
            }
        }

    

        for(auto i:first)
        cout<<i;
        cout<<endl;

        for(auto i:second)
        cout<<i;
        cout<<endl;
        
    }
    return 0;
}