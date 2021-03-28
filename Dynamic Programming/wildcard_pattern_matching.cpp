#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)


bool wildcard(char source[], char pattern[], 
              int n, int m) 
{ 
    if (m==0) 
    return (n==0); 

    bool dp[n+1][m+1]; 
  
    memset(dp, false, sizeof(dp)); 
  
    dp[0][0] = true; 
  
    for (int j = 1; j <= m; j++) 
        if (pattern[j - 1] == '*') 
            dp[0][j] = dp[0][j - 1]; 

    for (int i = 1; i <= n; i++) 
    { 
        for (int j = 1; j <= m; j++) 
        { 
            
            if (pattern[j - 1] == '*') 
                dp[i][j] = dp[i][j - 1] || dp[i - 1][j]; 
  
            else if (pattern[j - 1] == '?' || 
                    source[i - 1] == pattern[j - 1]) 
                dp[i][j] = dp[i - 1][j - 1]; 
  

            else dp[i][j] = false; 
        } 
    } 
  
    return dp[n][m]; 
} 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char source[10000],pattern[10000];
    cin>>source>>pattern;

    cout<<wildcard(source,pattern,strlen(source),strlen(pattern));

    return 0;
}