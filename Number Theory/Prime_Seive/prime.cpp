#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

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

int main()
{

    ll n,i;
    cin>>n;
    
    
    prime(p);

    for(i=0;i<n;i++)
    {
        if(p[i]==1)
        cout<<i<<" ";
    }
    return 0;
}
