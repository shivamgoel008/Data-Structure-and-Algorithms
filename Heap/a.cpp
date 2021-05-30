#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;

	while(t--)
	{
		long long int n,money,i;
		cin>>n;

		vector<long long int>v(n);

		for(i=0;i<n;i++)
		cin>>v[i];

		cin>>money;

		long long int minimum=INT_MAX,temp1,temp2;

		for(long long int i=0;i<n-1;i++)
		{
			for(long long int j=i+1;j<n;j++)
			{
				if(v[i]+v[j]==money)
				{
					if(abs(v[j]-v[i])<=minimum)
					{
						temp1=v[i];
						temp2=v[j];
						minimum=abs(v[i]-v[j]);
					}
				}
			}
		}

		if(temp1<=temp2)
		cout<<"Deepak should buy roses whose prices are "<<temp1<<" ans "<<temp2<<"."<<endl;

		else 
		cout<<"Deepak should buy roses whose prices are "<<temp1<<" ans "<<temp2<<".";
	}
	return 0;
}