
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll dp[1000000]={0};

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test()
    {
        ll n,i,cnt;
        cin>>n;
        cnt=1;

        for(i=3;i<n+1;i+=2)
        {
            dp[i]=dp[i-2]+(4*i-4)*cnt;
            cnt++;
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}