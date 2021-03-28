
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll dp[10000001]={0};

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // ll sum=0,i;

    // ll cnt=1;

    // for(i=1;i<=10000001;i+=2)
    // {
    //     sum+=i;
    //     dp[cnt]=i;
    //     cnt++;
    // }

    // cout<<dp[78]<<endl;

    test()
    {
        ll n,k;
        cin>>n>>k;

        if((n%2==0 and k%2==0) or (n%2!=0 and k%2!=0))
        {
            if(k*k<=n)
            cout<<"YES"<<endl;

            else 
            cout<<"NO"<<endl;
        }

        else
        cout<<"NO"<<endl;
    }
    return 0;
}