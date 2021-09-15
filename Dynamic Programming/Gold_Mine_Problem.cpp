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


ll solve(ll n,ll m, vector<vector<ll>>v)
{
    ll dp[n][m],i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        dp[i][j]=0;
    }


    for(i=0;i<n;i++)
    {
        dp[i][0]=v[i][0];
    }


    for(j=1;j<m;j++)
    {

        for(i=0;i<n;i++)
        {
            ll x=0,y=0,z=0;
            if(i-1>=0 and j-1>=0)
            x=dp[i-1][j-1];

            if(j-1>=0)
            y=dp[i][j-1];

            if(i+1<n and j-1>=0)
            z=dp[i+1][j-1];

            dp[i][j]=max({x,y,z})+v[i][j];
        }
    }

    ll ans=INT_MIN;

    for(i=0;i<n;i++)
    {
        ans=max(ans,dp[i][m-1]);
    }

    return ans;
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

        cout<<solve(n,m,v);
    }
    return 0;
}