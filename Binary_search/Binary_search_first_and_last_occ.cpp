#include<iostream>

using namespace std;
int main()
{
    int n,mid,i,key;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    cin>>key;
    int first=0,last=n-1,focc=-1,locc=-1;

    while(first<=last)
    {
        mid=(last+first)/2;

        if(a[mid]==key)
        {
            focc=mid;
            last=mid-1;
        }

        else if(a[mid]<key)
        first=mid+1;

        else 
        last=mid-1;
    }

    first=0;
    last=n-1;

     while(first<=last)
    {
        mid=(last+first)/2;

        if(a[mid]==key)
        {
            locc=mid;
            first=mid+1;
        }

        else if(a[mid]<key)
        first=mid+1;

        else 
        last=mid-1;
    }
    cout<<focc<<" "<<locc;
}