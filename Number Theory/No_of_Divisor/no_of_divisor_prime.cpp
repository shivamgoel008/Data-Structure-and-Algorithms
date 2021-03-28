#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,i,j,ans=1,count;
    cin>>n;

    int prime[100001]={0};

    prime[2]=1;

    for(i=3;i<=n;i+=2)
    prime[i]=1;

    for(i=3;i*i<=n;i+=2)
    {
        if(prime[i]==1)
        {
            for(j=i;j*j<=n;j+=i)
            prime[j]=0;
        }
    }

    for(i=2;i<=n;i++)
    {
        if(prime[i]==1&&n%i==0)
        {
            count=0;
            while (n%i==0)
            {
                n=n/i;
                count++;
            }
            ans=(count+1)*ans;
            
        }
    }

   
    return 0;
}
