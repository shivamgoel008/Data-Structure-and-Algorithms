
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
        ll a,b,ans;
        cin>>a>>b;

        if(a==b)
        ans=0;

        else if(a<b and abs(a-b)%2!=0)
        ans=1;

        else if(a<b and abs(a-b)%2==0)
        {
            if((abs(a-b)/2)%2==0)
            ans=3;
            else 
            ans=2;
        }

        else if(a>b and abs(a-b)%2!=0)
        ans=2;

        else if(a>b and abs(a-b)%2==0)
        ans=1;

        cout<<ans<<endl;
    }
    return 0;
}