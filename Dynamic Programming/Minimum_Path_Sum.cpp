#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll            long long int
#define endl          "\n"
#define MOD           1e9 + 7
#define test()        ll t; cin>>t; while(t--)
#define ordered_set   tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>


/* Think More, Code Less */
/* Soch bo*dk Soch */

bool compare(ll a,ll b)
{
    return a<b;
}

ll solve(vector<vector<ll>>v)
{
    ll i,j;
    ll n=v.size();
    ll m=v[0].size();

    ll dp[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        dp[i][j]=0;
    }


    dp[0][0]=v[0][0];

    for(i=1;i<n;i++)
    dp[i][0]=dp[i-1][0]+v[i][0];

    for(i=1;i<m;i++)
    dp[0][i]=dp[0][i-1]+v[0][i];


    for(i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            dp[i][j]=min(dp[i-1][j],dp[i][j-1])+v[i][j];
        }
    }

    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<m;j++)
    //     cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }

    return dp[n-1][m-1];
}

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
        ll i,j,n,m;
        cin>>n>>m;

        vector<vector<ll>>v;

        for(i=0;i<n;i++)
        {
            vector<ll>x;
            for(j=0;j<m;j++)
            {
                ll y;
                cin>>y;
                x.push_back(y);
            }

            v.push_back(x);
        }

        cout<<solve(v);
    }
    return 0;
}