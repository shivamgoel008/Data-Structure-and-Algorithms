
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
        ll n,k,i;
        cin>>n>>k;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        ll sum=accumulate(v.begin(),v.end(),0);

        if(sum%k==0)
        cout<<0<<endl;

        else 
        cout<<1<<endl;
    }
    return 0;
}