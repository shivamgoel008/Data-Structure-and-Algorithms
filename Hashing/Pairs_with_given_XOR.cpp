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

unordered_map<int,int>m;

bool compare(ll a,ll b)
{
    return a<b;
}

int solve(vector<int>v,int x)
{
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        if(m.find((x^v[i]))!=m.end())
        {
            if(m[x^v[i]]>0)
            cnt++,m[x^v[i]]--;
        }
        m[v[i]]++;
    }
    return cnt;
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
        int i,j,n;
        cin>>n;

        vector<int>v(n);

        for(i=0;i<n;i++)
        {
            cin>>v[i];
            // m[v[i]]=true;
        }

        int x;
        cin>>x;

        cout<<solve(v,x);

    }
    return 0;
}