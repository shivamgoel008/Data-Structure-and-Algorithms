// // #include<bits/stdc++.h>
// // using namespace std;
 
// // typedef vector <int> vi;
// // typedef pair< int ,int > pii;
// // #define endl "\n"
// // #define sd(val) scanf("%d",&val)
// // #define ss(val) scanf("%s",&val)
// // #define sl(val) scanf("%lld",&val)
// // #define debug(val) printf("check%d\n",val)
// // #define all(v) v.begin(),v.end()
// // #define PB push_back
// // #define MP make_pair
// // #define FF first
// // #define SS second
// // #define ll long long
// // #define MOD 1000000007
// // #define clr(val) memset(val,0,sizeof(val))
// // #define what_is(x) cerr << #x << " is " << x << endl; 
// // #define OJ \
// //     freopen("input.txt", "r", stdin); \
// //     freopen("output.txt", "w", stdout);
// // #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// // // fuction for top to bottom approach

// // ll min_coin_change_top_down(ll n,ll *coins,ll t,ll *DP)
// // {
// //     //base case
// //     if(n==0)
// //     return 0;

// //     // memorisation
// //     if(DP[n]!=0)
// //     return DP[n];

// //     // recurrring case
// //     ll ans=INT_MAX;
// //     for(ll i=0;i<t;i++)
// //     {
// //         if(n-coins[i]>=0)
// //         {
// //             ll subproblem=min_coin_change_top_down(n-coins[i],coins,t,DP);
// //             ans=min(ans,subproblem+1);
// //         }
// //     }

// //     DP[n]=ans;
// //     return DP[n];
// // }

// // // fucntion for bottom to top approach 

// // ll min_coin_change_bottom_top(ll n,ll *coins,ll t,ll *DP)
// // {
// //     DP[0]=0;

// //     for(ll i=1;i<=n;i++)
// //     {
// //         ll ans=INT_MAX;
// //         for(ll j=0;j<t;j++)
// //         {
// //             if(i-coins[j]>=0)
// //             {
// //                 ans=min(DP[i-coins[j]],ans);
// //             }
// //         }
// //         DP[i]=ans+1;
// //     }

// //     return DP[n];
// // }

// // int main()
// // {
// //     OJ;
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
        
        
// //         ll n;
// //         cin>>n;
        
// //         ll coins[]={1,7,10};
// //         ll DP[100]={0};
// //         ll t=sizeof(coins)/sizeof(ll);

// //         cout<<min_coin_change_bottom_top(n,coins,t,DP)<<endl;
        
// //     return 0;
// // }



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


// ll topDownSolve(ll coin , vector<ll>v, ll dp[])
// {
//     if(coin<=0)
//     return 0;

//     ll ans=INT_MAX;
//     // ll sub_prob=INT_MAX;

//     if(dp[coin]!=0)
//             return dp[coin];

//     for(ll i=0;i<v.size();i++)
//     {
//         if(coin-v[i]>=0)
//         {
//             ll sub_prob=min(sub_prob,topDownSolve(coin-v[i],v,dp));
//             ans=min(ans,sub_prob+1);
//         }
        
//     }

//     dp[coin]=ans;
    

//     return dp[coin];
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
//         ll i,j,n;
//         ll coin;
//         cin>>coin;
//         cin>>n;

//         vector<ll>v(n);
        

//         for(i=0;i<n;i++)
//         cin>>v[i];

        

//         ll dp[coin+1]={0};

//         cout<<topDownSolve(coin,v,dp);
//         cout<<endl;
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

ll solve(vector<ll>v,ll n)
{
    ll dp[n+1]={0},i,j;
    dp[0]=0;

    for(i=1;i<=n;i++)
    {
        ll ans=INT_MAX;
        for(j=0;j<v.size();j++)
        {
            if(i-v[j]>=0)
            {
                ans=min(ans,dp[i-v[j]]);
            }
        }

        dp[i]=ans+1;
    }

    for(i=0;i<=n;i++)
    cout<<dp[i]<<" ";
    cout<<endl;

    return 0;
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

        ll m;
        cin>>m;

        vector<ll>v(m);

        for(i=0;i<m;i++)
        cin>>v[i];

        cout<<solve(v,n);
    }
    return 0;
}