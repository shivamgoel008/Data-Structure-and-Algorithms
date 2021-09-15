#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll            long long int
#define endl          "\n"
#define MOD           1000000007
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
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    // test()
    {
        ll i,j,n;
        cin>>n;

        if(n==1)
        cout<<1<<endl;

        else if(n==2)
        {
            cout<<2<<endl;
        }

        else 
        {
        ll dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
        dp[4]=8;
        dp[5]=16;
        dp[6]=32;

        for(i=7;i<=n;i++)
        {
            dp[i]=(dp[i-1]%MOD+ dp[i-2]%MOD + dp[i-3]%MOD + dp[i-4]%MOD + dp[i-5]%MOD +dp[i-6]%MOD)%MOD;
        }

        cout<<dp[n]<<endl;
        }
    }
    return 0;
}