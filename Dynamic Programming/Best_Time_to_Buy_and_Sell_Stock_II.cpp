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

ll solve(vector<ll>v)
{
    ll n=v.size();
    ll buy,sell;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(i==0)
        {
            buy=v[0];
            sell=v[0];
        }
        else 
        {
            if(v[i]>=v[i-1])
            sell=v[i];

            else if(v[i]<v[i-1])
            {
                // cout<<v[i]<<" "<<v[i-1]<<endl;
                ans+=abs(buy-sell);
                buy=v[i];
                sell=v[i];
            }
        }
    }

    ans+=abs(sell-buy);

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
    test()
    {
        ll i,j,n;
        cin>>n;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        cout<<solve(v);
    }
    return 0;
}