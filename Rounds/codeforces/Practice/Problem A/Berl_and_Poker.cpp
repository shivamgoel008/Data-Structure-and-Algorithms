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
        ll n,m,k,remaining,ans;
        cin>>n>>m>>k;

        ll card_per_player=n/k;

        if(m==0)
        cout<<0<<endl;

        else if(card_per_player>=m)
        cout<<m<<endl;

        else if(card_per_player<m)
        {
            remaining=m-card_per_player;
            if(remaining%(k-1)==0)
            ans=card_per_player-(remaining/(k-1));
            else if(remaining%(k-1)!=0)
            ans=card_per_player-(remaining/(k-1)+1);

            cout<<ans<<endl;
        }

    
    }
    return 0;
}