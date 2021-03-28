
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
        ll n,m,i,j,ans=0;
        cin>>n>>m;

        ll a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cin>>a[i][j];
        }

        vector<ll>v(3);

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                v[0]=a[i][j];
                v[1]=a[i][m-1-j];
                v[2]=a[n-1-i][j];

                sort(v.begin(),v.end());

                ans+=abs(a[i][j]-v[1])+abs(a[i][m-1-j]-v[1])+abs(a[n-1-i][j]-v[1]);

                a[i][j]=v[1];
                a[i][m-1-j]=v[1];
                a[n-1-i][j]=v[1];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}