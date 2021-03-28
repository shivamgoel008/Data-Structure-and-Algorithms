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
        ll n,ans,i,j,cnt;
        cin>>n;

        vector<ll>v(n+1);

        v[0]=-1;

        for(i=1;i<=n;i++)
        cin>>v[i];

        sort(v.begin(),v.end());
        
        cnt=1;
        ans=0;

        for(i=1;i<=n;i++)
        {
            if(cnt==v[i])
            {
                ans++;
                cnt=1;
            }

            else
            cnt++;
        }

        cout<<ans<<endl;

    }
    return 0;
}