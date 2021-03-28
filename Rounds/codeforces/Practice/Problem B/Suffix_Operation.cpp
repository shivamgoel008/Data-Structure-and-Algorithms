
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

        ll n,mn=INT_MIN,i,first,second;
        cin >> n;

        vector<ll>v(n);

        for (i = 0; i <n; i++)
        cin >> v[i];
    
        ll ans = 0;
        for (i = 1; i <n; i++)
        ans += abs(v[i] - v[i - 1]);

        // cout<<ans<<endl;
    

        for(i=0;i<n;i++)
        {
            if(i==0)
            mn=max(mn,abs(v[i+1]-v[i]));

            else if(i==n-1)
            mn=max(mn,abs(v[i]-v[i-1]));

            else if(i>0 and i<n-1)
            {
                first=abs(v[i]-v[i-1]);
                second=abs(v[i]-v[i+1]);

                mn=max(mn,abs(first+second-abs(v[i+1]-v[i-1])));
            }
        }

        cout<<ans-mn<<endl;
            
    }
    return 0;
}