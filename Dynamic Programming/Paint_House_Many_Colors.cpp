// #include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;
// #define ll            long long int
// #define endl          "\n"
// #define MOD           1e9 + 7
// #define test()        ll t; cin>>t; while(t--)
// #define ordered_set   tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>


// /* Think More, Code Less */
// /* Soch bo*dk Soch */

// bool compare(ll a,ll b)
// {
//     return a<b;
// }

// int main ()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     // test()
//     {
//         ll i,j,n,k;
//         cin>>n>>k;

//         ll a[n][k];

//         for(i=0;i<n;i++)
//         {
//             for(j=0;j<k;j++)
//             cin>>a[i][j];
//         }

//         ll dp[n][k];

//         for(i=0;i<n;i++)
//         {
//             for(j=0;j<k;j++)
//             dp[i][j]=0;
//         }

//         for(j=0;j<k;j++)
//         {
//             dp[0][j]=a[0][j];
//         }

//         for(i=1;i<n;i++)
//         {
//             for(j=0;j<k;j++)
//             {
//                 ll mini=INT_MAX;
//                 for(ll l=0;l<k;l++)
//                 {
//                     if(l==j)
//                     {}
//                     else 
//                     {
//                         mini=min(mini,dp[i-1][l]);
//                     }
//                 }

//                 dp[i][j]+=mini+a[i][j];
//             }
//         }

//         // for(i=0;i<n;i++)
//         // {
//         //     for(j=0;j<k;j++)
//         //     cout<<dp[i][j]<<" ";
//         //     cout<<endl;
//         // }

//         ll ans=INT_MAX;

//         for(i=0;i<k;i++)
//         {
//             ans=min(ans,dp[n-1][i]);
//         }

//         cout<<ans<<endl;

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
        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        ll _xor=v[0];

        for(i=1;i<n;i++)
        {
            _xor=_xor^v[i];
        }
        cout<<_xor<<endl;
    }
    return 0;
}