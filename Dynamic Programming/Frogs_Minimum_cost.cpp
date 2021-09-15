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

        if(v.size()==1)
        cout<<0<<endl;


        else if(v.size()==2)
        cout<<abs(v[1]-v[0]);

        else 
        {
            ll dp[n];

            dp[0]=0;
            dp[1]=abs(v[0]-v[1]);

            for(i=2;i<n;i++)
            {
                ll op1=dp[i-1]+abs(v[i]-v[i-1]);
                ll op2=dp[i-2]+abs(v[i]-v[i-2]);

                dp[i]=min(op1,op2);
            }

            cout<<dp[n-1]<<endl;
        }
    }
    return 0;
}