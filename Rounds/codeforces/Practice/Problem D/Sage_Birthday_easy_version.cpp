
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
    // test()
    {
        ll n,i,cnt=0;
        cin>>n;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        sort(v.begin(),v.end());

        for(i=0;i<n-1;i++)
        {
            swap(v[i],v[i+1]);
            i++;
        }

        for(i=1;i<n-1;i++)
        {
            if(v[i]<v[i+1] and v[i]<v[i-1])
            cnt++;
        }

        cout<<cnt<<endl;

        for(i=0;i<n;i++)
        cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}