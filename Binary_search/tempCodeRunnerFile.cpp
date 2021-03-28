#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

bool studentpage(int n,int a[],int s,int mid)
{
    int i,pagereading=0,student=1;
    for(i=0;i<n;i++)
    {
        if(pagereading+a[i]>mid)
        {
            student++;
            if(student>s)
            return false;
        }

        else
        pagereading=pagereading+a[i];
    }

    return true;
}

int main()
{
    int n,s,i,first,last,mid,sum=0,ans;
    cin>>n>>s;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    first=0;
    last=sum;
    while(first<=last)
    {
        mid=(last+first)/2;
        if(studentpage(n,a,s,mid))
        {
            ans=mid;
            last=mid-1;
        }

        else
        first=mid+1;
    }

    cout<<ans;
}