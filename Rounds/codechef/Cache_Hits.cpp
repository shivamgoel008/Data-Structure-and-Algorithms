
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
    test()
    {
        ll n,b,m,i,ans=0,cnt=0,j,a,prevs;
        cin>>n>>b>>m;

        ll loop=n/b;
        set<ll>s;

        for(i=0;i<m;i++)
        {
            cin>>a;
            if(i==0)
            {
                prevs=a/b;
                cnt++;
            }

            else 
            {
                if(a/b!=prevs)
                {
                    cnt++;
                    prevs=a/b;
                }
            }
        }

        cout<<cnt<<endl;
        
    }
    return 0;
}