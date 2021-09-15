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

ll kanpsack(vector<ll>price,vector<ll>weight,ll bag)
{
    ll i,j;
    ll n=price.size();
    ll dp[n+1][bag+1];
    for(i=0;i<price.size()+1;i++)
    {
        for(j=0;j<bag+1;j++)
        dp[i][j]=0;
    }
    

    for(i=1;i<n+1;i++)
    {
        for(j=1;j<bag+1;j++)
        {
            if(j>=weight[i-1])
            {

                dp[i][j]=max(dp[i-1][j],price[i-1]+dp[i-1][j-weight[i-1]]);

            }

            else 
            dp[i][j]=dp[i-1][j];
        }
    }


    // for(i=0;i<n+1;i++)
    // {
    //     for(j=0;j<bag+1;j++)
    //     cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }


    return dp[n][bag];
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
        vector<ll>price(n),weight(n);

        for(i=0;i<n;i++)
        cin>>price[i];
        

        for(i=0;i<n;i++)
        cin>>weight[i];

        ll bag;
        cin>>bag;

        cout<<kanpsack(price,weight,bag);

    }
    return 0;
}