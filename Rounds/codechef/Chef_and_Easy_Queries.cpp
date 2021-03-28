
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
        ll n,q,i,j,cnt;
        cin>>n>>q;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        cnt=1;

        for(i=1;i<n;i++)
        {
            if(v[i]!=v[i-1])
            cnt++;
        }

        // cout<<cnt<<endl;

        for(i=0;i<q;i++)
        {
            ll x,y;
            cin>>x>>y;

            ll pc=0;
            ll ac=0;

            if(x!=1 and v[x-1]!=v[x])
            pc++;

            if(x!=n and v[x+1]!=v[x])
            pc++;

            v[x]=y;

            if(x!=1 and v[x-1]!=v[x])
            ac++;

            if(x!=n and v[x+1]!=v[x])
            ac++;

            cnt=cnt-pc+ac;
            cout<<cnt<<endl;
        }
    }
    return 0;
}