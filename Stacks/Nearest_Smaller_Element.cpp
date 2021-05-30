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

vector<int> solve(vector<int>v)
{
    stack<int>s;
    vector<int>ans;

    while(!s.empty())
    s.pop();

    for(int i=0;i<v.size();i++)
    {
        if(s.empty())
        {
            ans.push_back(-1);
            s.push(v[i]);
        }

        else 
        {
            // cout<<"YES"<<endl;
            while(v[i]<=s.top())
            {
                s.pop();

                if(s.empty())
                break;
            }
            if(s.empty())
            ans.push_back(-1);

            else
            ans.push_back(s.top());


            s.push(v[i]);
        }

        // for(auto i:ans)
        // cout<<i<<" ";
        // cout<<endl;

        // stack<int>dum=s;

        // while(!dum.empty())
        // {
        //     cout<<dum.top()<<" ";
        //     dum.pop();
        // }

        // cout<<endl;
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
    test()
    {
        ll i,j,n;
        cin>>n;

        vector<int>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        vector<int>ans=solve(v);

        for(auto i:ans)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}