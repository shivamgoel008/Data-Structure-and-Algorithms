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

int solve(vector<int>v)
{
    int ans=0;
    for(int i=0;i<32;i++)
    {
        int sum=0;
        for(int j=0;j<v.size();j++)
        {
            if((v[j]>>i)&1==1)
            sum++;
        }

        sum=sum%3;

        if(sum!=0)
        ans|=sum<<i;
    }

    return ans;

}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // test()
    {
        int n;
        cin>>n;

        vector<int>v(n);

        for(int i=0;i<n;i++)
        cin>>v[i];

        int ans=solve(v);

        cout<<ans<<endl;

    }
    return 0;
}