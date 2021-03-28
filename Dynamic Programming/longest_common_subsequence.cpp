#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long int 
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define test(t) ll t; cin>>t; while(t--)

ll longest_common_subsequence(char *x,char *y)
{
    ll m=strlen(x),i,j;
    ll n=strlen(y),dp[100][100];

    for(i=0;i<=m;i++)
    dp[i][0]=0;

    for(j=0;j<=n;j++)
    dp[0][j]=0;

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            ll q=0;
            if(x[i-1]==y[j-1])
            q=1+dp[i-1][j-1];

            else
            q=max(dp[i-1][j],dp[i][j-1]);

            dp[i][j]=q;
        }
    }

    return dp[m][n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    OJ;
    
        char str1[100],str2[100];
        cin>>str1>>str2;

        cout<<longest_common_subsequence(str1,str2);
    
    return 0;
}