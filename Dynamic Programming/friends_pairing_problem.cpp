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

ll solve(ll n,ll *dp)
{
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;

    for(ll i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+(i-1)*dp[i-2];
    }
    return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    OJ;
    test(t)
    {
        ll n;
        cin>>n;

        ll dp[n];

        cout<<solve(n,dp)<<endl;
    }
    return 0;
}