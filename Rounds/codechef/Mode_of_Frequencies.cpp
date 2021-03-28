
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
        ll n,i,maxi=INT_MIN,ans;
        cin>>n;

        vector<ll>v(n);
        map<ll,ll>m;

        for(i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }

        vector<ll>freq;

        for(auto i:m)
        freq.push_back(i.second);

        map<ll,ll>fr;

        for(auto i:freq)
        fr[i]++;

        maxi=INT_MIN;
        for(auto i:fr)
        {
            if(maxi<i.second)
            {
                ans=i.first;
                maxi=i.second;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}