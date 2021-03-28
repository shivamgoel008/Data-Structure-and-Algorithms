
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.second==b.second)
    return a.first<b.second;
    return a.second<b.second;
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
        ll n,sum=0,i,dis=0,f,c,cost=0;
        cin>>n;

        vector<pair<ll,ll>>v(n);

        for(i=0;i<n;i++)
        cin>>v[i].first;

        for(i=0;i<n;i++)
        cin>>v[i].second;

        // for(i=0;i<n;i++)
        // cout<<v[i].first<<" "<<v[i].second<<endl;

        sort(v.begin(),v.end(),compare);
        // cout<<endl;

        // for(i=0;i<n;i++)
        // cout<<v[i].first<<" "<<v[i].second<<endl;

        for(i=0;i<n;i++)
        {
            if(dis>=n)
            break;

            cost+=v[i].second*min(v[i].first,(n-dis));
            dis+=v[i].first;
        }

        cout<<cost<<endl;
    }
    return 0;
}