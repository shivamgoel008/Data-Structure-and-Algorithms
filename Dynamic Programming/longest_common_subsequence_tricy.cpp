/*
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    OJ;
    
    ll n,i,j,cnt=0;
    cin>>n;

    ll a[n];

    fo(i,n)
    cin>>a[i];

    ll dp[n+1];

    for(i=0;i<=n;i++)
    {
        if(i==0)
        dp[i]=INT_MIN;

        else
        dp[i]=INT_MAX;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(dp[j]<a[i] and dp[j+1]>a[i])
            {
                dp[j+1]=a[i];
                break;
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }

    return 0;
}
*/

// optimised approach

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    OJ;
    
    ll n,i,cnt=0;
    cin>>n;

    ll a[n];

    for(i=0;i<n;i++)
    cin>>a[i];

    ll dp[n+1];

    for(i=0;i<=n;i++)
    {
        if(i==0)
        dp[i]=INT_MIN;

        else
        dp[i]=INT_MAX;
    }

    for(i=0;i<n;i++)
    {
        ll len=upper_bound(dp,dp+n+1,a[i])-dp;
        if(dp[len-1]<a[i] and a[i]<dp[len])
        dp[len]=a[i];
    }

    for(i=1;i<=n;i++)
    {
        if(dp[i]==INT_MAX)
        break;

        else
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}