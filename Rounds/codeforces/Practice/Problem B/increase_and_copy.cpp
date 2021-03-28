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
        ll n,ans,prev,rem,div=1;
        cin>>n;

        ans=n;

        while(1)
        {

            if(n%div==0)
            rem=n/div;
            else if(n%div!=0)
            rem=n/div+1;

            prev=div-1+rem-1;

            if(ans>prev)
            ans=prev;
            

            else if(prev>ans)
            break;

            div++;
        

        }
    
        cout<<ans<<endl;
    }
    return 0;
}