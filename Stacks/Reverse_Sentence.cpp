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

void solve(string s)
{

    stack<string>st;
    for(ll i=0;i<s.length();i++)
    {
        string split="";
        while(s[i]!=' ' and i<s.length())
        {
            split+=s[i];
            i++;
        }
        st.push(split);
    }


    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    string s="OM SHANTI FUCK OFF";

    solve(s);

    return 0;
}