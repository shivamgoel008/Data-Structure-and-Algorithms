#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

ll ladder_top_down(ll n,ll k,ll *dp)
{
    //base case
    if(n==0)
    return 1;

    // look up
    if(dp[n]!=0)
    return dp[n];

    // recuring case
    ll ways=0;
    for(ll i=1;i<=k;i++)
    {
        if(n-i>=0)
        ways+=ladder_top_down(n-i,k,dp);
    }
    return dp[n]=ways;
}

ll ladder_bottom_up(ll n,ll k)
{
    ll dp[100]={0};

    dp[0]=1;   //start case

    for(ll i=1;i<=n;i++)
    {
        dp[i]=0;

        for(ll j=1;j<=k;j++)
        {
            if(i-j>=0)
            dp[i]+=dp[i-j];
        }
    }

    return dp[n];
}

// this approach reduce the complexity from O(NK) to O(N)

ll ladder_bottom_up_optimised(ll n,ll k)
{
    ll dp[n]={0},i;
    dp[0]=1;
    dp[1]=1;

    for(i=2;i<=k;i++)
    dp[i]=2*dp[i-1];

    for(i=k+1;i<=n;i++)
    dp[i]=2*dp[i-1]-dp[i-k-1];

    return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k;
    cin>>n>>k;

    ll dp[100]={0};

    cout<<ladder_bottom_up_optimised(n,k)<<endl;
    return 0;
}