#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

int n=4;
int dp[16][4];
int disp[10][10]={{0,20,42,25},{20,0,30,34},{42,30,0,10},{25,34,10,0}};

int visted_all=(1<<n)-1;

int travelling_salesman_prob(int mask,int pos)
{
    if(mask==visted_all)
    return disp[pos][0];
     int ans=INT_MAX;

    // lookup
    if(dp[mask][pos]!=-1)
    return dp[mask][pos];

    // try to goto an unvisited city
   

    for(int city=0;city<n;city++)
    {
        if((mask&(1<<city))==0) //correctoion 3 use brackets in bitwise operations always
        {
            int newans=disp[pos][city]+travelling_salesman_prob(mask|(1<<city),city);
            ans=min(ans,newans);
        }
    }
    return dp[mask][pos]=ans;
}

int main ()
{
#ifndef ONLINE_JUDGE                      //correction 1 comment this here 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0;i<(1<<n);i++) //correction 2 i<(1<<n)
    {
        for(int j=0;j<n;j++)
        dp[i][j]=-1;
    }

    cout<<travelling_salesman_prob(1,0)<<endl;
    
    return 0;
}