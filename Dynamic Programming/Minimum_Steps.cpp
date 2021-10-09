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


ll topDownSolve(ll n,ll dp[])
{
    cout<<"SA"<<endl;
    if(n<=0)
    return 0;

    if(n==1)
    return 0;

    if(dp[n]!=0)
    return dp[n];

    ll op1=INT_MAX;
    ll op2=INT_MAX;
    ll op3=INT_MAX;

    if(n%3==0)
    op1=topDownSolve(n/3,dp);

    if(n/2==0)
    op2=topDownSolve(n/2,dp);

    op3=topDownSolve(n-1,dp);
    

    dp[n]=min({op1,op2,op3})+1;

    

    return dp[n];
}


ll bottomUpSolve(ll n)
{
    ll dp[n+1]={0};

    dp[0]=0;
    dp[1]=0;

    for(ll i=2;i<=n;i++)
    {
        ll op1,op2,op3;
        op1=op2=op3=INT_MAX;
        if(i%2==0)
        op1=dp[i/2];

        if(i%3==0)
        op2=dp[i/3];

        op3=dp[i-1];

        dp[i]=min({op1,op2,op3})+1;
    }

    for(ll i=0;i<=n;i++)
    {
        cout<<dp[i]<<" ";
        
    }

    cout<<endl;

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

        ll dp[n+1]={0};

        cout<<topDownSolve(n,dp);

        cout<<endl;

        cout<<bottomUpSolve(n);
    }
    return 0;
}