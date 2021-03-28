
#include <bits/stdc++.h>
using namespace std;
#define pb                   push_back
#define mp                   make_pair
#define ll                   long long
#define setbits(x)           __builtin_popcountll(x)
#define zerobits(x)          __builtin_ctzll(x)
#define fo(i,n)              for(i=0;i<n;i++)
#define set(a)               memset(a,0,sizeof(a))
#define MOD                  1000000007
#define test()               ll t; cin>>t; while(t--)

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
        string s;
        cin>>s;

        map<char,ll>mp;
        set<char>st;
        ll left=0,n=s.size(),ans=INT_MAX;

        for(ll i=0;i<n;i++)
        st.insert(s[i]);

        if(st.size()<3)
        cout<<0<<endl;

        else 
        {
            for(ll right =0; right <n;right++)
            {
                mp[s[right]]++;

                while(mp[s[left]]>1)
                {
                    mp[s[left]]--;
                    left++;
                }

                if(mp['1'] and mp['2'] and mp['3'])
                ans=min(ans,right-left+1);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}