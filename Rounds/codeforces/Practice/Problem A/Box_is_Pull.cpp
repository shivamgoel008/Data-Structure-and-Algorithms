
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
        ll x1,y1,x2,y2,ans;
        cin>>x1>>y1>>x2>>y2;

        if(x1==x2 or y1==y2)
        ans=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

        else 
        ans=abs(x2-x1)+abs(y2-y1)+2;

        cout<<ans<<endl;
        
    }
    return 0;
}