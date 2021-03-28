#include <iostream>
#include<math.h>
#include<algorithm>

using namespace std;

bool cook(long long int p,long long int n,long long int r[],long long int mid)
{
    int c,sum=0,i;
    for(i=0;i<n;i++)
    {
        int c=sqrt((2*mid)/r[i]);
        sum=sum+c;
    }

    return sum>=p;
}

int main() 
{
	long long int p,n,first,last,mid,i,ans;
	cin>>p>>n;
	long long int r[n];
	
	for(i=0;i<n;i++)
	cin>>r[i];
	
	first=0;
	last=100;
	
	while(first<=last)
	{
        mid=(first+last)/2;
		if(cook(p,n,r,mid))
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