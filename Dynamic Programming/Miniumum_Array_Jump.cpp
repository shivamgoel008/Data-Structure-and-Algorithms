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


ll solve(vector<ll>v,ll *dp,ll n,ll i)
{
    if(i==n-1)
    return 0;

    if(i>=n)
    return INT_MAX;

    if(dp[i]!=0)
    return dp[i];

    ll steps=INT_MAX;
    ll max_jump=v[i];

    for(ll jump=1;jump<=max_jump;jump++)
    {
        ll next_cell=i+jump;
        ll sub_prob=solve(v,dp,n,next_cell);

        if(sub_prob!=INT_MAX)
        steps=min(steps,sub_prob+1);
    }

    return dp[i]=steps;
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
        ll dp[n]={0};

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        cout<<solve(v,dp,n,0LL);
    }
    return 0;
}