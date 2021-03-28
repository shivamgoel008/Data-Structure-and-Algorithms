
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
        ll n,i;
        cin>>n;

        vector<ll>v(n),ans(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        ll start=0;
        ll final=n-1;
        ll cnt=0;

        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                ans[i]=v[start];
                start++;
            }

            else 
            {
                ans[i]=v[final];
                final--;
            }
        }

        for(auto i:ans)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}