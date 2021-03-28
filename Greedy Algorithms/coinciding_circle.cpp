#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

/*
There are n circles arranged on x-y plane. All of them have their centers on x-axis. You have to remove some of them, 
such that no two circles are overlapping after that. Find the minimum number of circles that need to be removed.
*/

bool compare(pair<ll,ll>p1,pair<ll,ll>p2)
{
    return p2.second>p1.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(t)
    {
        ll n,c,r,i,cnt=1;
        cin>>n;

        vector<pair<ll,ll>>v(n);

        for(i=0;i<n;i++)
        {
            cin>>c>>r;
            v[i]=mp(c-r,c+r);
        }

        sort(v.begin(),v.end(),compare);
        ll job=v[0].second;

        for(i=1;i<n;i++)
        {
            if(v[i].first>=job)
            {
                cnt++;
                job=v[i].second;
            }
        }

        cout<<n-cnt;
    }
    return 0;
}