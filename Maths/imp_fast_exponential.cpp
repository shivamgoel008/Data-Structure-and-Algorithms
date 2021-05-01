
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll fast_exponential(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
        res=(res*a);

        a=(a*a);
        b=b>>1;
    }
    return res;
}


pow(ll  n, ll p) {
	if(p==0) {
		return 1;
	}

	if(p%2==0) {
		return pow(n, p/2) * pow(n. p/2);
	}
	return pow(n, p/2) * pow(n, p/2) * n;
}


int main ()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test()
    {
        cout<<fast_exponential(2,7);
    }
    return 0;
}