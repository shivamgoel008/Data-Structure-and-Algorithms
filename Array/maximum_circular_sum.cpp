#include<iostream>
#include<algorithm>

using namespace std;

int main ()
{
    int n,i,sum=0,cs=0,ms=0;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        a[i]=-a[i];
    }

    for(i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
        cs=0;

        ms=max(ms,cs);
    }

    cout<<sum+ms;
}