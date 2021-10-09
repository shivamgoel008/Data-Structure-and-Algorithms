#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)


ll coin_exchange(ll n,ll *dp)
{
    dp[0]=0;
    dp[1]=1;
    for(ll i=2;i<=n;i++)
    {
        ll ans=INT_MAX;

        if(i%2==0)
        {
            if(i-i/2>=0)
            dp[i]=min(dp[i],dp[i-i/2])+1;
        }

        if(i%3==0)
        {
            if(i-i/3>=0)
            dp[i]=min(dp[i],dp[i-i/3])+1;
        }

        if(i%4==0)
        {
            if(i-i/4>=0)
            dp[i]=min(dp[i],dp[i-i/4])+1;
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

    ll dp[n+1];

    cout<<coin_exchange(n,dp);

    return 0;
}
