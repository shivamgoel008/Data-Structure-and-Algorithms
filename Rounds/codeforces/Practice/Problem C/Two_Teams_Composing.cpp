
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
        ll n,i,maxsize=INT_MIN,ans;
        cin>>n;

        vector<ll>v(n);
        unordered_map<ll,ll>mp;
        set<ll>s;

        for(i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
            s.insert(v[i]);
        }

        for(auto i:mp)
        {
            maxsize=max(maxsize,i.second);
        }
        

        if(maxsize==s.size())
        ans=maxsize-1;

        else 
        {
            ll si=s.size();
            ans=min(maxsize,si);
        }
        cout<<ans<<endl;
    }
    return 0;
}