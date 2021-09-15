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

ll solve(vector<ll>v,ll n,ll amount)
{
    ll i,j;
    ll dp[amount+1];

    for(i=0;i<amount+1;i++)
    {
        if(i==0)
        {
            dp[i]=1;
            continue;
        }

        dp[i]=0;
    }

    for(i=1;i<amount+1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i-v[j]>=0)
            {
                // cout<<i-v[j]<<" ";
                dp[i]+=dp[i-v[j]];
            }
        }
    }

    // for(i=0;i<amount+1;i++)
    // cout<<dp[i]<<" ";


    return dp[amount];

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
        ll i,j,amount,n;
        cin>>n;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        cin>>amount;

        cout<<solve(v,n,amount);        
    }
    return 0;
}