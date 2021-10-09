// #include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;
// #define ll            long long int
// #define endl          "\n"
// #define MOD           1000000007
// #define test()        ll t; cin>>t; while(t--)
// #define ordered_set   tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>


// /* Think More, Code Less */
// /* Soch bo*dk Soch */

// bool compare(ll a,ll b)
// {
//     return a<b;
// }

// ll solve(ll n,ll m)
// {
//     ll dp[n+1]={0},i;

//     dp[0]=0;
//     dp[1]=1;

//     for(i=2;i<=n;i++)
//     {
//         if(i-m<0)
//         {
//             dp[i]+=dp[i-1]%MOD;
            
//         }

//         else if(i==m)
//         dp[i]=2;

//         else 
//         dp[i]+=(dp[i-1]%MOD+dp[i-m]%MOD)%MOD;
        
//     }

//     // for(i=0;i<=n;i++)
//     // cout<<dp[i]<<" ";
//     // cout<<endl;

//     return dp[n];
// }

// int main ()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     test()
//     {
//         ll i,j,n,m;
//         cin>>n>>m;

//         cout<<solve(n,m)<<endl;
//     }
//     return 0;
// }


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
    ll dp[2][n+1],i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<=n;j++)
        dp[i][j]=0;
    }

    dp[0][0]=0;
    dp[1][0]=0;

    dp[0][1]=dp[1][1]=1;

    for(i=0;i<2;i++)
    {
        for(i=2;i<=n;i++)
        {
            dp[0][i]+=dp[1][i-1]+dp[0][i-1];
            dp[1][i]+=dp[0][i-1];
        }
    }

    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<=n;j++)
    //     cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }

    return dp[0][n]+dp[1][n];
}

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
        ll i,j,n;
        // ll n;
        cin>>n;

        cout<<solve(n);
        cout<<endl;
    }
    return 0;
}