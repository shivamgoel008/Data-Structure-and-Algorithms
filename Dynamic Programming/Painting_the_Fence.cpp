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

ll solve(ll n,ll k)
{
    ll dp[2][n+1];
    ll i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<=n;j++)
        dp[i][j]=0;
    }

    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            dp[0][i]=0;
            dp[1][i]=k;
        }
        else 
        {
            dp[0][i]=dp[1][i-1]%MOD;
            dp[1][i]=((dp[0][i-1]%MOD+dp[1][i-1]%MOD)%MOD*(k-1))%MOD;
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<=n;j++)
        cout<<dp[i][j]<<" ";
        cout<<endl;
    }

    return (dp[0][n]+dp[1][n])%MOD;
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
        ll i,j,n,k;
        cin>>n>>k;

        cout<<solve(n,k);
    }
    return 0;
}