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

ll knapsack(ll *w,ll *p,ll n,ll cap)
{
    ll dp[1000][1000],i,j;
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=cap;j++)
        {
            if(i==0 or j==0)
            dp[i][j]=0;

            else if(w[i-1]<=j)
            {
                dp[i][j]=min(dp[i-1][j],dp[i-1][j-w[i-1]]+p[i-1]);
            }

            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][cap];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    ll n,cap,i,pos=-1,sum=0;
    cin>>n>>cap;

    ll w[n],p[n];

    for(i=0;i<n;i++)
    w[i]=i+1;

    for(i=0;i<n;i++)
    cin>>p[i];

    cout<<knapsack(w,p,n,cap);
    
    return 0;

}