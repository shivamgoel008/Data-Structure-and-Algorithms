
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
        ll n,m,i,j;
        cin>>n>>m;

        ll row[n][m],col[m][n];
        map<ll,vector<ll>>m;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cin>>row[i][j];
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            cin>>col[i][j];
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(row[i][0]==col[j][k])
                    {
                        m[k]=
                    }
                }
            }
        }

    }
    return 0;
}