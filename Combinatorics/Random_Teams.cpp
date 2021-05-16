#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(ll a,ll b)
{
    return a<b;
}

void solve(ll player,ll team)
{
    if(team==1)
    {
        cout<<player*(player-1)/2<<" "<<player*(player-1)/2;
        return ;
    }

    if(player-team==0)
    {
        cout<<"0 0";
        return ;
    }

    if(player-team==1)
    {
        cout<<"1 1";
        return ;
    }

    ll max=(player-team+1)*(player-team)/2;
    ll min;
    
    if(player%team==0)
    {
        ll mem=player/team;
        min=mem*(mem-1)/2;
        min*=team;
    }

    else if(player%team!=0)
    {
        ll mem=player/team;
        ll rem=player%team;

        min=(team-rem)*mem*(mem-1)/2;
        min+=(rem)*(mem+1)*mem/2;
    }

    cout<<min<<" "<<max;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // test()
    {
        ll player,team;
        cin>>player>>team;

        solve(player,team);
        cout<<endl;
    }
    return 0;
}