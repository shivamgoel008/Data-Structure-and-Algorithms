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

    ll dp[n+1]={0};
    dp[n]=1;

    for(ll i=n-1;i>=0;i--)
    {
        for(ll j=0;j<=v[i];j++)
        {
            if(i+j<=n)
            {
                dp[i]+=dp[i+j];
            }
        }
    }


    // for(ll i=0;i<=n;i++)
    // cout<<dp[i]<<" ";
    // cout<<endl;

    return dp[0];

}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    // test()ñ
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