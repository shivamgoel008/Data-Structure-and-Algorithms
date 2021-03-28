
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
        ll n,i,j,k;
        cin>>n>>k;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        for(i=0;i<n;i++)
        {
            for(j=i+k;j<n;j=j+k)
            {
                if(v[i]>v[j])
                swap(v[i],v[j]);
            }
        }
        
        if(is_sorted(v.begin(),v.end()))
        cout<<"YES"<<endl;

        else
        cout<<"NO"<<endl;
    }
    return 0;
}