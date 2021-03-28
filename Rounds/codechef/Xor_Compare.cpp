
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
        ll x,y,n,i;
        cin>>x>>y>>n;

        ll cnt=0;

        for(i=0;i<=n;i++)
        {
            if((x^i)<(y^i))
            {
                cout<<i<<endl;
                cnt++;
            }
        }

        cout<<cnt<<endl;

        cout<<endl;
        
    }
    return 0;
}