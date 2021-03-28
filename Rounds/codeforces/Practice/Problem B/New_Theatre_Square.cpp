#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
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
        ll n,m,x,y,i,j;
        cin>>n>>m>>x>>y;
        
        char a[n][m];
 
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cin>>a[i][j];
        }
 
        if(2*x<=y)
        {
            ll cnt=0;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(a[i][j]=='.')
                    cnt++;
                }
            }
            cout<<cnt*x<<endl;
        }
 
        else if(2*x>y)
        {
            ll cntdot=0,cnthash=0;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(a[i][j]=='.' and a[i][j+1]=='.' and j+1<m)
                    {
                        cnthash++;
                        j++;
                    }
 
                    else 
                    {
                        cntdot++;
                    }
 
                }
            }
            ll ans=cntdot*x+cnthash*y;
            cout<<ans<<endl;
        }
    }
    return 0;
}