
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

int main ()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test()
	{
		int n,i;
		cin>>n;

		int a[n];

		for(i=0;i<n;i++)
		cin>>a[i];
		
		vector<int> left_dp(n);

		for(i=0;i<n;i++)
		left_dp[i]=a[i];


		vector<int> right_dp=left_dp;

		for(i=1;i<n;i++)
		{
			left_dp[i]=min(left_dp[i],left_dp[i-1]+1);
		}

		for( int i=n-2;i>=0;i--)
		right_dp[i]=min(right_dp[i],right_dp[i+1]+1);

		for(i=0;i<n;i++)
		cout<<min(left_dp[i],right_dp[i])<<" ";
		
		cout<<endl;	
	}
	return 0;
}