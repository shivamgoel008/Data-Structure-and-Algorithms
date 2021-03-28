#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define set(a) memset(a,0,sizeof(a))
#define sort(a) sort(a,a+n)
#define fo(i,n) for(i=0;i<n;i++)
#define PI 3.1415926535897932384626

ll exp(ll a,ll b,ll m)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
        res=(res*a)%m;

        a=(a*a)%m;
        b=b>>1;
    }
    return res;
}

void prime(ll *p)
{
    ll i,j;
    for(i=3;i<=100000;i=i+2)
    p[i]=1;

    for(i=3;i*i<=100000;i=i+2)
    {
        if(p[i]==1)
        {
            for(j=i*i;j<=100000;j=j+i)
            {
                p[j]=0;
            }
        }
    }
    p[0]=p[1]=0;
    p[2]=1;
}

// 0 1 1 2 3 5 8 13 21 34 55
ll fibonacci(ll n)
{
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    else 
    return fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        cout<<fibonacci(n)<<endl;
 
    }
    return 0;
}
