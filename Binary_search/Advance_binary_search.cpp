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


bool advanceBinarySearch(vector<ll>v,ll target)
{
    ll first=0;
    ll sec=v.size()-1;

    while(first<=sec)
    {
        ll mid=(first+sec)/2;

        if(v[mid]==target)
        return true;

        else if(v[first]<=v[mid])
        {
            if(target>=v[first] and target<=v[mid])
            {
                sec=mid-1;
            }

            else first=mid+1;

        }

        else 
        {
            if(target>=v[mid] and target<=v[sec])
            {
                first=mid+1;
            }

            else sec=mid-1;
        }
    }

    return false;
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
        
    }
    return 0;
}