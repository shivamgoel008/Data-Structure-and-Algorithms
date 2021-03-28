#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

ll profit(ll *wines,ll i,ll j,ll y,ll dp[100][100])
{
    // base case
    if(i>j)
    return 0;

    // return if dp[i][j] is already computed
    if(dp[i][j]!=0)
    return dp[i][j];

    // recursive case
    ll op1=wines[i]*y+profit(wines,i+1,j,y+1,dp);
    ll op2=wines[j]*y+profit(wines,i,j-1,y+1,dp);

    return dp[i][j]=max(op1,op2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll wines[]={2,3,5,1,4};
    ll dp[100][100]={0};

    ll n=sizeof(wines)/sizeof(ll);

    int y=1;
    cout<<profit(wines,0,n-1,y,dp);

    return 0;
}