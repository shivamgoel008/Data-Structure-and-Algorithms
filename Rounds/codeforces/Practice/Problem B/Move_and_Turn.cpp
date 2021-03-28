
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
        ll n;
        cin>>n;

        if(n==1)
        cout<<4<<endl;

        else
        {
            ll ans;

            if(n%2==0)
            ans=(n/2+1)*(n/2+1);

            else 
            ans=2*(n/2+1)*(n/2+2);

            cout<<ans<<endl;
        }
                

    }
    return 0;
}