#include<iostream>
using namespace std;

int main ()
{
    int n,m,x,y,first,last,mid,ans;
    cin>>n>>m>>x>>y;
    first=1;
    last=n;

    while(first<=last)
    {
        mid=(first+last)/2;
        if(mid*x<=m+(n-mid)*y)
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