
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
        ll n,i,j;
        cin>>n;

        vector<ll>v(n);
        vector<pair<ll,ll>>vp;
        set<ll>s;

        for(i=0;i<n;i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }
        if(s.size()==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(v[i]!=v[j])
                {
                    vp.push_back(make_pair(i+1,j+1));
                    break;
                }
            }
        }

        cout<<"YES"<<endl;

        for(auto i:vp)
        cout<<i.first<<" "<<i.second<<endl;
        
    }
    return 0;
}