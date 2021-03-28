#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(t)
    {
        ll n,i,j;
        cin>>n;

        ll a[n];
        fo(i,n)
        cin>>a[i];

        ll dp[n];
        dp[0]=0;

        for(i=1;i<n;i++)
        {
            dp[i]=INT_MAX;
            for(j=0;j<i;j++)
            {
                if(i<=j+a[j])
                dp[i]=min(dp[i],dp[j]+1);
            }
        }

        cout<<dp[n-1]<<endl;
    }
    return 0;
}