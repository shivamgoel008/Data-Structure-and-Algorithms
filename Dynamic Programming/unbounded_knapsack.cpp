#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

ll maxprofit(ll *weight,ll *price,ll n,ll cap)
{
    ll dp[cap+1]={0};
    for(ll i=0;i<=cap;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i-weight[j]>=0)
            dp[i]=max(dp[i],price[j]+dp[i-weight[j]]);
        }
    }
    return dp[cap];
}

int main()
{
        ll n,cap,i;
        cin>>n>>cap;

        ll weight[n],price[n];

        for(i=0;i<n;i++)
        cin>>weight[i];

        for(i=0;i<n;i++)
        cin>>price[i];

        cout<<maxprofit(weight,price,n,cap);

    return 0;
}