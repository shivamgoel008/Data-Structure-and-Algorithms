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

bool compare(ll a,ll b)
{
    return a<b;
}

int solve(vector<long long int>v,int n)
{
    // long long int sum=n*n;
    vector<long long int >bit_sum(32,0);

    // for(auto i:v)
    // cout<<i<<" ";
    // cout<<endl; 

    for(long long int i=0;i<v.size();i++)
    {
        long long int k=v[i];
        int cnt=31;
        while(k>0)
        {
            if((k&1))
            bit_sum[cnt]++;

            cnt--;
            k=(k>>1);
        }
    }

    // for(auto i:bit_sum)
    // cout<<i<<" ";
    // cout<<endl;

    long long int sum=0;

    for(int i=0;i<32;i++)
    {
        sum+=(bit_sum[i]*(n-bit_sum[i]))%MOD;
    }

    return (sum*2)%MOD;
}

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
        ll i,j;
        int n;
        cin>>n;

        vector<long long int>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        cout<<solve(v,n)<<endl;
    }
    return 0;
}