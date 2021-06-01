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

int solve(vector<int>v,int k)
{
    priority_queue<int>q;
    for(int i=0;i<v.size();i++)
    q.push(v[i]);

    priority_queue<int>maxheap=q;

    // while(!maxheap.empty())
    // {
    //     cout<<maxheap.top()<<" ";
    //     maxheap.pop();
    // }
    // cout<<endl;

    vector<int>ans;

    int cnt=0;
    while(cnt<k)
    {
        ans.push_back(q.top());
        q.pop();
        cnt++;
    }

    for(auto i:ans)
    cout<<i<<" ";
    cout<<endl;
    return q.top();
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

        vector<int>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        int k;
        cin>>k;


        cout<<solve(v,k);

    }
    return 0;
}