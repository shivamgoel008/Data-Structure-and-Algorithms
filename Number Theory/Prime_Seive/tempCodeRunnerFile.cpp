#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

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

int main()
{

    ll n,i;
    cin>>n;
    
    ll p[100001]={0};
    prime(p);

    for(i=0;i<n;i++)
    {
        if(p[i]==1)
        cout<<i<<" ";
    }
   

    return 0;
}
