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
        ll n,x,k,y,i;
        cin>>n>>k>>x>>y;

        vector<pair<ll,bool>>v(n);

        for(i=0;i<n;i++)
        v[i]=make_pair(i,false);

        i=x;

        while(1)
        {
            if(v[i].second==false)
            v[i].second=true;

            else if(v[i].second==true)
            break;

            i=(i+k)%n;
        }

        // for(auto i:v)
        // cout<<"("<<i.first<<" "<<i.second<<") ";
        // cout<<endl;

        if(v[y].second==true)
        cout<<"YES"<<endl;

        else if(v[y].second==false)
        cout<<"NO"<<endl;
    }
    return 0;
}