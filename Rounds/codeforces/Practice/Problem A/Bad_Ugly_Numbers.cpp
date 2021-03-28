
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll p[1000001]={0};

void prime(ll *p)
{
    ll i,j;
    for(i=3;i<=1000000;i=i+2)
    p[i]=1;

    for(i=3;i*i<=1000000;i=i+2)
    {
        if(p[i]==1)
        {
            for(j=i*i;j<=1000000;j=j+i)
            {
                p[j]=0;
            }
        }
    }

    p[0]=p[1]=0;
    p[2]=1;
}


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
        ll n,i;
        cin>>n;

        if(n==1)
        cout<<-1<<endl;

        else 
        {
            cout<<2;
            for(i=0;i<n-1;i++)
            cout<<3;
            cout<<endl;
        }

    }
    return 0;
}