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
        ll i,j,n1,n2;
        string s1,s2;
        cin>>s1>>s2;

        n1=s1.length();
        n2=s2.length();

        vector<vector<ll>>dp(n1+1,vector<ll>(n2+1,0));

        for(i=1;i<=n1;i++)
        {
            for(j=1;j<=n2;j++)
            {
                if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;

                else 
                {
                    ll op1=dp[i-1][j];
                    ll op2=dp[i][j-1];

                    dp[i][j]=max(op1,op2);
                }
            }
        }

        cout<<dp[n1][n2]<<endl;

    }
    return 0;
}