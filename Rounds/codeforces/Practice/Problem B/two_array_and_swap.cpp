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
        ll n,k,i;
        cin>>n>>k;
        
        vector<ll>a(n),b(n);

        for(i=0;i<n;i++)
        cin>>a[i];

        for(i=0;i<n;i++)
        cin>>b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),compare);

        ll cnt=0;

        for(i=0;i<n;i++)
        {
            if(cnt==k)
            break;
            if(a[i]<b[i])
            {
                swap(a[i],b[i]);
                cnt++;
            }
        }

        
        cout<<accumulate(a.begin(),a.end(),0)<<endl;
    }
    return 0;
}