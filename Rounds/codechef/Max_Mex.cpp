
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
        ll n,m,i,num,cnt,j;
        bool flag=true;
        cin>>n>>m;

        vector<ll>v(n);

        set<ll>s;

        // for(i=0;i<n;i++)
        // cin>>v[i];

        for(i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<m)
            s.insert(v[i]);
        }   

        if(s.size()!=(m-1))
        cout<<-1<<endl;

        else
        {
            ll cnt=0;
            for(i=0;i<n;i++)
            {
                if(v[i]==m)
                cnt++;
            }
            cout<<n-cnt<<endl;
        }
    }
    return 0;
}