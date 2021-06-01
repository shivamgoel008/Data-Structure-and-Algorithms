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

vector<vector<int>> solve(vector<string>v)
{
    unordered_map<string,vector<int>>m;

    for(int i=0;i<v.size();i++)
    {
        string s=v[i];
        sort(s.begin(),s.end());
        m[s].push_back(i+1);
    }

    vector<vector<int>>ans;
    for(auto i:m)
    {
        ans.push_back(i.second);
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
        ll i,j,n;
        cin>>n;

        vector<string>v;

        for(i=0;i<n;i++)
        {
            string str;
            cin>>str;

            v.push_back(str);
        }

        vector<vector<int>>ans=solve(v);

        for(auto i:ans)
        {
            for(auto j:i)
            cout<<j<<" ";
            cout<<endl;
        }
    }
    return 0;
}