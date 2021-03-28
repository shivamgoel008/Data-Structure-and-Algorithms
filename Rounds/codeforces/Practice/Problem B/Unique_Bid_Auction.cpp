
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
        bool flag=false;
        cin>>n;

        vector<ll>v(n);
        map<ll,ll>m;

        unordered_map<ll,ll>in;

        for(i=0;i<n;i++)
        {
            cin>>v[i];

            m[v[i]]++;
            in[v[i]]=i+1;
        }

        for(auto i:m)
        {
            if(i.second==1)
            {
                cout<<in[i.first]<<endl;
                flag=true;
                break;
            }
        }

        if(flag==false)
        cout<<-1<<endl;
    }
    return 0;
}