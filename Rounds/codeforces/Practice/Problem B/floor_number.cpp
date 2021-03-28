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
        ll n,x,ans;
        cin>>n>>x;

        if(n==1 or n==2)
        ans=1;

        else if(n>2)
        {
            n=n-2;
            if(n%x==0)
            ans=n/x+1;

            else if(n%x!=0)
            {
                ans=n/x;
                ans=ans+2;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}