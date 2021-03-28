
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
        ll n,m,i,j,x,y,change;
        bool flag=true;

        cin>>n>>m;

        ll a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cin>>a[i][j];
        }

        ll q;
        cin>>q;

        for(ll k=0;k<q;k++)
        {
            cin>>x>>y>>change;
            a[x-1][y-1]=change;
            i=x-1;
            j=y-1;

            if(i==n-1 or j==m-1)
            cout<<"Yes"<<endl;
            else
            {
                
            
            // cout<<"YES"<<endl;
            while(i<n-1 or j<m-1)
            {
                // cout<<i<<" "<<j<<endl;
                if(a[i][j]!=a[i+1][j+1])
                {
                    // cout<<i<<" "<<j<<endl;
                    flag=false;
                    break;
                }

                else
                {
                    
                    i++;
                    j++;
                }

                if(i==n or j==m)
                break;
            }

            if(flag==false)
            cout<<"No"<<endl;

            else if(flag==true)
            cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}