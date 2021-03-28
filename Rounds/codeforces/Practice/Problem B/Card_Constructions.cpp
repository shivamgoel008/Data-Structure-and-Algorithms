#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll dp[100000]={INT_MAX};
int sz=0;

void dp_arr(ll *dp)
{
    dp[0]=0;
    dp[1]=2;
    dp[2]=7;
    dp[3]=15;
    sz=4;

    for(ll i=4;i<100000;i++)
    {
        if((dp[i-1]+(i-1)*3+2)<INT_MAX){
        dp[i]=dp[i-1]+(i-1)*3+2;
        sz++;
        }
        else 
        break;
    }
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    dp_arr(dp);

    // for(ll i=0;i<6;i++)
    // cout<<dp[i]<<" ";
    // cout<<endl;

    // cout<<(upper_bound(dp,dp+100000,1)-dp))-1<<endl;

    test()
    {
        ll n,cnt=0;
        cin>>n;

      

        while(n>0)
        {
            
            ll it=upper_bound(dp,dp+sz,n)-dp;
            if(it-1>0)
            cnt++;
            else   // added 
            break;
            if(n-dp[it-1]<2)
            break;

            else 
            n=n-dp[it-1];
        }

        // ll it=upper_bound(dp,dp+n,n)-dp;
        // cout<<it-1<<endl;
        cout<<cnt<<endl;
    }
    return 0;
}