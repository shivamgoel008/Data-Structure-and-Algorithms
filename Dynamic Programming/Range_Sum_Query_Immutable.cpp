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
        ll i,j,n;
        cin>>n;

        vector<ll>v(n),odd,even;
        unordered_map<ll,ll>m;

        for(i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2!=0)
            {
                odd.push_back(v[i]);
                m[v[i]]++;
            }
            else 
            even.push_back(v[i]);

        }

        // sort(v.begin(),v.end(),greater<ll>());
        ll cnt=0;

        ll e=even.size();

        ll even_pair=e*(e-1)/2;

        cnt+=even_pair;

        // cout<<cnt<<endl;

        cnt+=even.size()*odd.size();

        // cout<<cnt<<endl;

        for(i=0;i<odd.size();i++)
        {
            for(j=i+1;j<odd.size();j++)
            {
                if(__gcd(odd[i],2*odd[j])>1)
                cnt++;
            }
        }
        
        // for(auto i:m)
        // {
        //     if(i.second>1 and i.first!=1)
        //     {
        //         // cout<<i.first<<endl;
        //         // cout<<i.second<<endl;
        //         ll k=i.second;
        //         cnt+=k*(k-1)/2;
        //     }
        // }

        cout<<cnt<<endl;
    }
    return 0;
}