#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll            long long int
#define endl          "\n"
#define MOD           1000000007
#define test()        ll t; cin>>t; while(t--)
#define ordered_set   tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>


/* Think More, Code Less */
/* Soch bo*dk Soch */

bool compare(ll a,ll b)
{
    return a<b;
}

ll countString(ll n)
{
    ll dp[2][n+1];
    dp[0][0]=0;
    dp[1][0]=0;

    for(ll i=0;i<n+1;i++)
    {
        dp[0][i]=0;
        dp[1][i]=0;
    }

    dp[0][1]=1;
    dp[1][1]=1;

    for(ll i=1;i<n+1;i++)
    {
        dp[0][i]+=(dp[1][i-1]%MOD+dp[0][i-1]%MOD)%MOD;
        dp[1][i]+=dp[0][i-1]%MOD;
    }

    // for(ll i=0;i<2;i++)
    // {
    //     for(ll j=0;j<n+1;j++)
    //     cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }

    return (dp[0][n]%MOD+dp[1][n]%MOD)%MOD;
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

        cout<<countString(n);
    }
    return 0;
}