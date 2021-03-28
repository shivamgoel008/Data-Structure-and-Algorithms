
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)




ll solve(ll n, ll x, ll y, ll z) 
{ 
    ll dp[n + 1]={0}; 
  
    for (ll i=2;i<=n;i++) 
    { 

        if (i % 2 == 1) 
        { 
            dp[i] = min(dp[(i+1)/2]+x+z,dp[i-1]+y); 
        } 
    
        else 
        { 
            dp[i] = min(dp[i/2]+x,dp[i-1]+y); 
        } 
    } 
    return dp[n]; 
} 
  

int main ()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,x,y,z;
    cin>>n>>x>>y>>z;

    cout<<solve(n, x, y, z)<<endl;
    return 0;
}