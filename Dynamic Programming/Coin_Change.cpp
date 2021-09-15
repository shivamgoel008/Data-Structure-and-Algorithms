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

ll solve(vector<ll>v,ll m,ll n)
{
    sort(v.begin(),v.end());

    ll dp[n+1];


    for(ll i=0;i<n+1;i++)
    dp[i]=0;

    dp[0]=1;

    for(ll i=0;i<m;i++)
    {
        for(ll j=1;j<n+1;j++)
        {
            if(j>=v[i])
            {
                if(j==5)
                {
                    cout<<j-v[i]<<" "<<dp[j-v[i]]<<" ";
                }
                dp[j]+=dp[j-v[i]];
            }
        }

        // for(ll i=0;i<n+1;i++)
        // cout<<dp[i]<<" ";
        // cout<<endl;
    }


    for(ll i=0;i<n+1;i++)
    cout<<"("<<i<<" "<<dp[i]<<" )";
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

        ll m;
        cin>>m;

        vector<ll>coin(m);


        for(i=0;i<m;i++)
        cin>>coin[i];

        cout<<solve(coin,m,n);
    }
    return 0;
}