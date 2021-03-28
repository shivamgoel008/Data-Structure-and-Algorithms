#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

ll recurrssion_fibbonaci(ll n)
{
    if(n==1 or n==0)
    return n;

    ll ans=recurrssion_fibbonaci(n-1)+recurrssion_fibbonaci(n-2);

    return ans;
}

ll DP_fibonacci(ll n,ll *DP)
{
    if(n==1 or n==0)
    return n;

    if(DP[n]!=0)
    return DP[n];

    ll ans=DP_fibonacci(n-1,DP)+DP_fibonacci(n-2,DP);

    return DP[n]=ans; 
}

ll DP_fibonacci_BU(ll n,ll *DP)
{
    DP[1]=1;
    ll i;

    for(i=2;i<=n;i++)
    {
        DP[i]=DP[i-1]+DP[i-2];
    }

    return DP[n];
}

ll optimised_fibo_BU(ll n)
{
    if(n==1 or n==0)
    return n;

    ll a=0,b=1,c,i;

    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(t)
    {
        ll n;
        cin>>n;

        ll DP[1000];
        set(DP);

        cout<<optimised_fibo_BU(n)<<endl;
    }
    return 0;
}