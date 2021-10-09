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
    ll dp[2][n];
    ll i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
        dp[i][j]=0;
    }

    dp[0][0]=v[0];
    dp[1][0]=0;

    for(i=1;i<n;i++)
    {
        dp[0][i]+=dp[1][i-1]+v[i];
        dp[1][i]=max(dp[0][i-1],dp[1][i-1]);
    }


    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<n;j++)
    //     cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }

    return max(dp[0][n-1],dp[1][n-1]);
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

        cout<<solve(v,n);
    }
    return 0;
}

int sum(int n){
    if(n<10){
        return 0;
    }
    if(n%10==0){
        return sum(n/10)+1;
    }
    else{
        return sum(n/10);
    }
}