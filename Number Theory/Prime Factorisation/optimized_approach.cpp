#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void primefactor(int n)
{
    int i,j=0,count;
    vector<pair<int,int>>factor(10000);

    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count=0;
            while(n%i==0)
            {
                n=n/i;
                count++;
            }

            factor[j]=make_pair(i,count);
            j++;
        }
    }

    if(n!=1)
    {
        factor[j]=make_pair(n,1);
        j++;
    }

    for(i=0;i<j;i++)
    {
        cout<<factor[i].first<<"^"<<factor[i].second<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i,j=0,count;
    cin>>n;

    vector<pair<int,int>>factor2(10000);

    primefactor(n);

    return 0;
}
