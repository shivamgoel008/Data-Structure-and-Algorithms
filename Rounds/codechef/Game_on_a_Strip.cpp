
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
        ll n;
        cin>>n;

        vector<ll>v(n),z;

        for(i=0;i<n;i++)
        cin>>v[i];

        for(i=0;i<n;i++)
        {
            cnt=0;
            while(v[i]==0)
            cnt++;

            if(cnt>0)
            z.push_back(cnt);
        }
        
    }
    return 0;
}