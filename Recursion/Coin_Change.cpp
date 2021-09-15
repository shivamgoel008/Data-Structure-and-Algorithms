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

ll coin[100]={0};


bool compare(ll a,ll b)
{
    return a<b;
}


ll solve(ll money)
{
    // cout<<money<<endl;
    if(money==0)
    return 0;

    if(money<0)
    return INT_MAX;

    if(coin[money]==1)
    return 1;

    return min({solve(money-1),solve(money-3),solve(money-7),solve(money-10)})+1;
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

        coin[1]=1;
        coin[3]=1;
        coin[7]=1;
        coin[10]=1;
        
        ll money;
        cin>>money;

        cout<<solve(money);
    }
    return 0;
}