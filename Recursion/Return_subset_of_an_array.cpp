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


void solve(vector<ll>v,vector<ll>output,ll x)
{
    if(x==v.size())
    {
        for(auto i:output)
        cout<<i<<" ";
        cout<<endl;

        return ;
    }

    output.push_back(v[x]);
    solve(v,output,x+1);
    output.pop_back();
    solve(v,output,x+1);
    
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
        vector<ll>v(n),subset;

        for(i=0;i<n;i++)
        cin>>v[i];

        solve(v,subset,0);

        // for(auto i:subset)
        // cout<<i<<" ";
        // cout<<endl;
    }
    return 0;
}