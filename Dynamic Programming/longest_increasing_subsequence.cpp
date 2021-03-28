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
    test(t)
    {
        ll n;
        cin>>n;

        ll a[n],i,j,dp[n];

        for(i=0;i<n;i++)
        cin>>a[i];

        for(i=0;i<n;i++)
        {
            dp[i]=1; // every element can end at length 1
            for(j=0;j<i;j++)
            {
            if(a[j]<a[i])
            dp[i]=max(dp[i],dp[j]+1); 
            }
        }

        ll lis=INT_MIN;

        for(i=0;i<n;i++)
        lis=max(lis,dp[i]);

        cout<<lis<<endl;
    }
    return 0;
}