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
        ll x,y,a,b,ans;
        cin>>x>>y;
        cin>>a>>b;

        if(2*a>=b)
        {
            if(x==y)
            {
                if(x==0)
                ans=0;

                else 
                ans=x*b;
            }

            else 
            ans=abs(x-y)*a+min(x,y)*b;

            
        }

        else if(2*a<b)
        {
            ans=x*a+y*a;
        }

        cout<<ans<<endl;
    
    }
    return 0;
}