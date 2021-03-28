#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,mid,last,first,ans;
		cin>>n>>k;

		first=0;
		last=n;
		while(first<=last)
		{
			mid=(first+last)/2;
			
			if(pow(mid,k)<=n)
			{
				ans=mid;
				first=mid+1;
			}

			else 
			last=mid-1;
		}
		cout<<ans<<endl;
	}
	return 0;
}