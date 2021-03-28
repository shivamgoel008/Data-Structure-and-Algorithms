#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long int 
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

ll solve(ll n,ll x,ll y,ll z,ll *dp)
{
    dp[0]=0;
    dp[1]=0;

    for(ll i=2;i<=n;i++)
    {
        if(i%2==0)
        dp[i]=min(dp[i/2]+x,dp[i-1]+y);

        else
        dp[i]=min(dp[i-1]+y,dp[(i+1)/2]+x+z);
    }
    return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    OJ;
    
    ll n,x,y,z;
    cin>>n>>x>>y>>z;

    ll dp[n+1];

    cout<<solve(n,x,y,z,dp);
    return 0;
}