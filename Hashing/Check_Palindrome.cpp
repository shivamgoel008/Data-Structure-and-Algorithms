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

bool solve(string s)
{
    unordered_map<char,int>m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }

    int cnt=0;
    for(auto i:m)
    {
        if(i.second%2!=0)
        cnt++;
    }

    if(cnt>1)
    return false;

    return true;
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
        ll i,j,n;
        string s;
        cin>>s;

        if(solve(s))
        cout<<"TRUE"<<endl;

        else 
        cout<<"FALSE"<<endl;
    }
    return 0;
}