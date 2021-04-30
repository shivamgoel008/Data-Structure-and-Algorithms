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


int titleToNumber(string s) {
    map<char,int>m;
        int k=1;
        for(int i=65;i<=90;i++){
            char ch=i;
            m[ch]=k;
            k++;
        }
        
        // for(auto i:m)
        //     cout<<i.first<<" "<<i.second<<endl;
        
        int ans=0;
        k=0;
        for(int i=s.length()-1;i>=0;i--){
            ans+=pow(26,k)*m[s[i]];
            k++;
        }
        return ans;
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
        
    }
    return 0;
}