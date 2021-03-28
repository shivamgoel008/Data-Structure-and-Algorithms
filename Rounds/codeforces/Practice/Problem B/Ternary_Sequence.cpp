
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
        ll x0,x1,x2,y0,y1,y2,sum=0,m;
        cin>>x0>>x1>>x2>>y0>>y1>>y2;

        m = min(x0, y2);
        x0 -= m;
        y2 -= m;

        m = min(x1, y0);
        x1 -= m;
        y0 -= m;

        m = min(x2, y1);
        x2 -= m;
        y1 -= m;
        sum += 2 * m;

        sum -= 2 * min(x1, y2);

        cout << sum << endl;
        
    }
    return 0;
}