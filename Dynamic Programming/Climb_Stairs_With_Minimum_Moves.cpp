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

        vector<ll>dp(n+1,INT_MAX);

        dp[n]=0;

        for(i=n-1;i>=0;i--)
        {
            

            if(v[i]==0)
            {}

            else 
            {
                ll x=INT_MAX;
                for(j=1;j<=v[i];j++)
                {
                    if(i+j<=n and dp[i+j]!=INT_MAX)
                    {
                        x=min(x,dp[i+j]);
                    }
                }

                if(x!=INT_MAX)
                dp[i]=x+1;
    
            }
        }

        // for(i=0;i<n+1;i++)
        // cout<<dp[i]<<" ";
        // cout<<endl;

        cout<<dp[0];

    }
    return 0;
}