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
        ll n,k,i,minimum=INT_MAX,cnt=0;
        cin>>n>>k;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        if(v[0]==k)
        cout<<0<<endl;

        else
        {
            for(i=1;i<n;i++)
            {
                while(1)
                {
                    v[i]=v[i]+v[0];
                    if(v[i]>k)
                    break;
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}