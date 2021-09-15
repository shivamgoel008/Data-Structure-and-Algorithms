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


bool solve(ll n,vector<ll>v,ll target)
{
    bool dp[n+1][target+1];
    ll i,j;

    // cout<<target<<endl;

    for(i=0;i<n+1;i++)
    {
        for(j=0;j<target+1;j++)
        {
            if(j==0)
            dp[i][j]=true;

            else 
            dp[i][j]=false;
        }
    }

    for(i=1;i<n+1;i++)
    {
        for(j=1;j<target+1;j++)
        {
            ll first=false;
            ll second=false;

            if(i-1>=0)
            {
                if(dp[i-1][j]==true)
                first=true;
            }

            // cout<<target-j<<" "<<i-1<<endl;
            int val=v[i-1];
            if(j-val>=0)
            {
                if(dp[i-1][j-val]==true)
                second=true;
            }

            


            if(first==true or second==true)
            dp[i][j]=true;

            else 
            dp[i][j]=false;
            
        }
    }



    for(i=0;i<n+1;i++)
    {
        for(j=0;j<target+1;j++)
        {
            cout<<dp[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    // cout<<dp[n+1][target+1]<<" "<<n+1<<" "<<target+1<<endl;
     if(dp[n][target]==1)
    return true;
    
    return false;
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

        ll target ;
        cin>>target;

        cout<<solve(n,v,target);

        // if(solve(n,v,target))
        // cout<<"true";

        // else 
        // cout<<"false";
    }
    return 0;
}