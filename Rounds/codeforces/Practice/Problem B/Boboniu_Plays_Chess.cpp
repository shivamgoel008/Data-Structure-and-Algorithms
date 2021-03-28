
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
    // test()
    {

        ll n,m,x,y,i,j;
        cin>>n>>m>>x>>y;

        ll a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            a[i][j]=0;
        }

        // for(i=0;i<n;i++)
        // {
        //     for(j=0;j<m;j++)
        //     cout<<a[i][j]<<" ";
        //     cout<<endl;
        // }

        i=1;
        j=1;

        vector<pair<ll,ll>>v;

        while(j<=y)
        {
            v.push_back(make_pair(i,j));
            a[i-1][j-1]=1;
            j++;
        }

        i++;
        j--;

        while(i<=x)
        {
            v.push_back(make_pair(i,j));
            a[i-1][j-1]=1;
            i++;
        }

        // cout<<i<<j<<endl;

        reverse(v.begin(),v.end());

        for(auto i:v)
        cout<<i.first<<" "<<i.second<<endl;

        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<m;j++)
                {
                    if(a[i][j]==0)
                    cout<<i+1<<" "<<j+1<<endl;
                }
            }

            else 
            {
                for(j=m-1;j>=0;j--)
                {
                    if(a[i][j]==0)
                    cout<<i+1<<" "<<j+1<<endl;
                }
            }
        }

    }
    return 0;
}