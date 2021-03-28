
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
        ll n,i;
        cin>>n;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        ll distance=0,sum=1;
        if(v[0]==0)
        cout<<0<<endl;
        else 
        {
            ll ans=v[0];
            for(i=1;i<n;i++)
            {
                if(ans==0)
                break;

                ans+=v[i];
                if(ans>0)
                {
                    distance++;
                    ans--;
                }   
            }
             cout<<distance+ans<<endl;
        }

           

    }
    return 0;
}