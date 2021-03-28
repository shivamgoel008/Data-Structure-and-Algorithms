
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
        ll n,m,i,j,cnt=0;
        cin>>n>>m;

        ll a[n][n];

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            a[i][j]=0;
        }

        for(i=0;i<m;i++)
        {
            ll r,c;
            cin>>r>>c;

            a[r-1][c-1]=1;
        }

        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]==1)
                cnt++;
            }
        }

        // cout<<cnt<<endl;

        if(cnt==m)
        {
            cout<<m<<" ";
            for(i=0;i<m-1;i++)
            cout<<i+1<<" ";
        }

        cout<<endl;
    }
    return 0;
}