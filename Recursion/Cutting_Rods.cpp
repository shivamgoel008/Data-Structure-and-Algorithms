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

int solve(vector<ll>price,ll n)
{

    
    if(n<=0)
    return 0;

    ll ans=INT_MIN;

    // cout<<ans<<endl;
    for(ll i=0;i<n;i++)
    {
        ll cut=i+1;
        ll curr_ans=price[i]+solve(price,n-cut);
        ans=max(ans,curr_ans);
    }

    return ans;
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

        vector<ll>price(n);

        for(i=0;i<n;i++)
        cin>>price[i];

        cout<<solve(price,n);
    }
    return 0;
}