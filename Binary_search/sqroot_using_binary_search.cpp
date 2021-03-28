#include<iostream>
using namespace std;

int main()
{
    int n,first,last,mid,ans;
    cin>>n;
    first=1;
    last=n-1;

    while(first<=last)
    {
        mid=(last+first)/2;

        if(mid*mid==n)
        {
            ans=mid;
            break;
        }

        else if(mid*mid>n)
        last=mid-1;

        else if(mid*mid<n)
        {
            ans=mid;
            first=mid+1;
        }
    }

    cout<<ans;

}