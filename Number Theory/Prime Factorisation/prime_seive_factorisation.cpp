#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

vector<int> prime_seive(int p[],int n)
{
    int i,k=0,j;
    vector<int>v(100001);

    for(i=3;i<=n;i+=2)
    p[i]=1;

    for(i=3;i*i<=n;i+=2)
    {
        if(p[i]==1)
        {
            for(j=i*i;j<=n;j+=i)
            p[j]=0;
        }
    }

    for(i=2;i<=n;i++)
    {
        if(p[i]==1)
        {
            v[k]=i;
            k++;
        }
    }

    return v;
}

vector<pair<int,int>> factor(int n,vector<int>prime)
{
    vector<pair<int,int>>prime_factor(100001);
    int i=0,count,k=0,p;
    p=prime[0];

    while(p*p<=n)
    {
        if(n%p==0)
        {
            count=0;
            while(n%p==0)
            {
                n=n/p;
                count++;
            }
            
            prime_factor[k]=make_pair(p,count);
            k++;
        }

        i++;
        p=prime[i];
    }

    if(n!=1)
    {
        prime_factor[k]=make_pair(n,1);
    }

    return prime_factor;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int p[n];

    vector<int>prime(100001);

    prime=prime_seive(p,n);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> prime_factor(100001);
        prime_factor=factor(n,prime);

        for(auto i=prime_factor.begin();i!=prime_factor.end();i++)
        {
            cout<<i->first<<" "<<i->second<<" ";
        }

    }

    return 0;
}
