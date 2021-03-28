
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
        ll n,q,i,j,x,y,cnt;
        cin>>n>>q;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        cnt=0;

        for(i=0;i<n;i++)
        {
            if(v[i]==v[i+1])
            cnt++;
        }

        ll len=n-cnt;

        for(i=0;i<q;i++)
        {
            cin>>x>>y;
            
            if(v[x-1]!=v[x-2])
            len--;

            if(v[x-1]!=v[x])
            len--;

            v[x-1]=y;

            if(v[x-1]!=v[x-2])
            len++;

            if(v[x-1]!=v[x])
            len++;

            cout<<len<<endl;
        }
    }
    return 0;
}