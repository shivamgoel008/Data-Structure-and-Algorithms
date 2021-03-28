#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

ll maximum_profit(ll *a,ll n,ll *dp)
{
    if(n==0)
    return 0;

    if(dp[n]!=0)
    return dp[n];

    ll best=0;

    for(ll i=0;i<n;i++)
    {
        ll profit=a[i]+maximum_profit(a,n-i-1,dp);
        best=max(best,profit);
    }
    return dp[n]=best;
}


ll maximum_profit_bottom_up(ll *a,ll n)
{
    ll dp[n+1]={0};

    for(ll i=1;i<=n;i++)
    {
        dp[i]=0;
        for(ll j=1;j<=i;j++)
        {
            if(i-j>=0)
            {
                dp[i]=max(dp[i],dp[i-j]);
            }
        }
    }

    return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll a[n];

    for(ll i=0;i<n;i++)
    cin>>a[i];

    ll dp[n+1]={0};

    cout<<maximum_profit(a,n,dp);

    return 0;
}