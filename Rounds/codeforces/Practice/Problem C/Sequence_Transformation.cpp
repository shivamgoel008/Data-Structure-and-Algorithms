
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
        ll n,a,i,ans,minimum=INT_MAX;
        cin>>n;

        vector<ll>v;

        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                cin>>a;
                v.push_back(a);
            }

            else 
            {
                cin>>a;
                if(a!=v[v.size()-1])
                v.push_back(a);
            }
        }

        unordered_map<ll,ll>m;

        for(auto i:v)
        m[i]++;

        for(auto i:m)
        {
            if(i.second>0)
            {
                if(i.first==v.front())
                i.second--;

                if(i.first==v.back())
                i.second--;
            }

            minimum=min(minimum,i.second+1);
        }

        cout<<minimum<<endl;
    }
    return 0;
}