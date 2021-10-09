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

ll solve(ll n)
{
    ll dp[n+1]={0},i,j;
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;

    for(i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    // for(i=0;i<=n;i++)
    // cout<<dp[i]<<" ";
    // cout<<endl;

    return dp[n];
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
        ll i,j,n;
        cin>>n;

        cout<<solve(n);
    }
    return 0;
}
