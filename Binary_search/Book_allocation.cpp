#include<iostream>
using namespace std;

bool student(int a[],int n,int s,int mid)
{
    long long int k=0,i,sum=0,student=1;
    for(i=0;i<n;i++)
    {
       if(sum+a[i]>mid)
       {
           student++;

           sum=a[i];
           if(student>s)
           return false;
       }

       else 
       sum+=a[i];

    }
   return true;
}

int main ()
{
    int n,s,last,first,sum=0,i,mid,ans,;
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
        mid=(first+last)/2;

        if(student(a,n,s,mid))
        {
            ans=min(mid,ans);
            last=mid-1;
        }

        else 
        first=mid+1;

    }
    cout<<ans;
    return 0;
}