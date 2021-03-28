
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(ll a,ll b)
{
    return a>b;
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
        ll n,i,k,cnt;
        cin>>n>>k;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        sort(v.begin(),v.end(),compare);

        cnt=0;

        for(i=1;i<n;i++)
        {
            v[0]+=v[i];

            cnt++;

            if(cnt==k)
            break;
        }

        cout<<v[0]<<endl;
    }
    return 0;
}