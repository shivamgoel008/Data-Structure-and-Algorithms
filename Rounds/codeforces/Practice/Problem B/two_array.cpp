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
        ll n,T,k=0,i;
        cin>>n>>T;

        vector<pair<ll,ll>>v(n);

        for(i=0;i<n;i++)
        {
            ll a;
            cin>>a;

            if(2*a<T)
            v[i]=make_pair(a,0);

            else if(2*a>T)
            v[i]=make_pair(a,1);

            else if(2*a==T)
            {
                if(k==0)
                {
                    v[i]=make_pair(a,0);
                    k=1;
                }

                else if(k==1)
                {
                    v[i]=make_pair(a,1);
                    k=0;
                }
            }
        }

        for(auto i:v)
        {
            cout<<i.second<<" ";

        }

        cout<<endl;
    }
    return 0;
}