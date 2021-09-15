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

ll unbound_knapsack(ll n, ll bag, vector<ll>price, vector<ll>weight)
{
    ll i,j,dp[bag+1];


    for(i=0;i<bag+1;i++)
    dp[i]=0;

    for(i=1;i<bag+1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=weight[j])
            {
                dp[i]=max(dp[i],dp[i-weight[j]]+price[j]);
            }
        }
    }


    // for(i=0;i<bag+1;i++)
    // cout<<dp[i]<<" ";
    // cout<<endl;

    return dp[bag];
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
        ll i,j,n,bag;
        cin>>n>>bag;

        vector<ll>price(n),weight(n);


        for(i=0;i<n;i++)
        cin>>price[i];

        for(i=0;i<n;i++) 
        cin>>weight[i];

        cout<<unbound_knapsack(n,bag,price,weight);
    }
    return 0;
}