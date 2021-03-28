
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll dp[1000000];

void cal(ll *dp)
{
    ll power=1;
    dp[0]=1;

    for(ll i=1;i<100000;i++)
    {
        power=power*2;
        dp[i]=2*dp[i-1]+power*power;
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

    cal(dp);
    test()
    {
        ll x,cnt=0,p=1,i;
        cin>>x;

        ll var=0;

        while(x>0)
        {
            if(x<dp[var])
            break;

            else if(x>=dp[var])
            {
                x=x-dp[var];
                var++;
                cnt++;
            }
        }

        cout<<cnt<<endl;
        // for(i=0;i<10;i++)
        // cout<<dp[i]<<" ";
        // cout<<endl;

    
    }
    return 0;
}