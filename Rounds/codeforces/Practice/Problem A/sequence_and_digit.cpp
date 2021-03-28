#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll minmax(ll a)
{
    ll minimum=INT_MAX,rem;
    ll maximum=INT_MIN;
    while(a>0)
    {
        rem=a%10;
        if(rem%10==0)
        return 0;
        minimum=min(minimum,rem);
        maximum=max(maximum,rem);
        a=a/10;
    }

    return minimum*maximum;
}

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
        ll a,k,cnt,ans;
        cin>>a>>k;

        cnt=1;
        while(cnt<=k)
        {
            if(cnt==1)
            ans=a;

            else 
            {
                if(minmax(ans)==0)
                break;

                else 
                ans=ans+minmax(ans);
            }
            cnt++;
        }
        cout<<ans<<endl;
    }
    return 0;
}