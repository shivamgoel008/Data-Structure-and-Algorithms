#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll msb(ll n)
{
    char s[65];
    itoa(n,s,2);

    return strlen(s);
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
        ll n,i,w,sum=0;
        cin>>n;

        vector<ll>v(n);

        unordered_map<ll,ll>m;

        for(i=0;i<n;i++)
        {
            cin>>v[i];
            m[msb(v[i])]++;
        }

        for(auto i:m)
        {
            if(i.second>1)
            sum+=i.second*(i.second-1)/2;
        }
        cout<<sum<<endl;
    }
    return 0;
}