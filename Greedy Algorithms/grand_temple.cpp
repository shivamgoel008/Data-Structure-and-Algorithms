#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(t)
    {
        ll n,x,y,i;
        cin>>n;

        vector<ll>vx,vy;

        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            vx.push_back(x);
            vy.push_back(y);
        }

        sort(vx.begin(),vx.end());
        sort(vy.begin(),vy.end());

        ll dx=vx[0]-0;
        ll dy=vy[0]-0;

        for(i=1;i<n;i++)
        {
            dx=max(dx,vx[i]-vx[i-1]);
            dy=max(dy,vy[i]-vy[i-1]);
        }

        cout<<dx*dy<<endl;
    }
    return 0;
}