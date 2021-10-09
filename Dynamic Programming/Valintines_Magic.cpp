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

bool compare(ll a,ll b)
{
    return a<b;
}


ll n,m;
ll dp[5005][5005];

ll solve(ll *boy, ll *girl, ll i, ll j )
{
    // if we have paied all the boys
    if(i==n)
    return 0;

    if(j==m)
    return INT_MAX;

    if(dp[i][j]!=-1)
    return dp[i][j];

    ll op1=abs(boy[i]-girl[j])+solve(boy,girl,i+1,j+1);
    ll op2=solve(boy,girl,i,j+1);

    return dp[i][j]=min(op1,op2);
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
        ll i,j;
        cin>>n>>m;

        ll boy[n], girl[m];
        memset(dp,-1,sizeof(dp));

        for(i=0;i<n;i++)
        cin>>boy[i];

        for(i=0;i<m;i++)
        cin>>girl[i];

        sort(boy,boy+n);
        sort(girl,girl+m);

        cout<<solve(boy,girl,0,0);
    }
    return 0;
}