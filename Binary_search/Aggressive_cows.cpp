#include<iostream>
using namespace std;

bool cowsrakhpaye(int a[],int n,int c,int dist)
{
    int cow=a[0],count=1,i;
    for(i=1;i<n;i++)
    {
        if(a[i]-cow>=dist)
        {
            cow=a[i];
            count++;
        }
        if(count==c)
        return true;
        
    }

    return false;
}

int main()
{
    int n,c,first,last,i,mid,ans;

    cin>>n>>c;

    int a[n];

    for(i=0;i<n;i++)
    cin>>a[i];

    first=0;
    last=a[n-1]-a[0];

    while(first<=last)
    {
        mid=(last+first)/2;

        if(cowsrakhpaye(a,n,c,mid))
        {
            ans=mid;
            first=mid+1;
        }

        else 
        last=mid-1;
    }
    cout<<ans;
    return 0;
}