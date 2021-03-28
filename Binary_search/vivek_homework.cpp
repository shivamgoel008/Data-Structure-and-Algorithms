#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main ()
{
    long long int n,ans,first,last,i,mid;
    long double pro=0,temp;
    cin>>n;
    long long int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        pro=pro+log(a[i]);
    }

    
    first=1;
    last=n-1;

    while(first<=last)
    {
        mid=(first+last)/2;
        temp=n*log(mid);

        if(pro<=temp)
        {
            ans=mid;
            last=mid-1;
        }

        else 
        first=mid+1;
    }

    cout<<ans;

    return 0;

}