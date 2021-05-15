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

// naeive approach 

// vector<int> solve(int n)
// {
//     vector<int>ans;
//     for(int i=0;i<=n;i++)
//     {
//         int cnt=0;
//         int k=i;
//         while(k>0)
//         {
//             if((k&1))
//             cnt++;
//             k=(k>>1);
//         }
//         ans.push_back(cnt);
//     }

//     return ans;
// }


// optimised approach

vector<int> solve(int n)
{
    vector<int>ans(n+1,-1);

    ans[0]=0;

    for(int i=0;i<=n;i++)
    {
        if(i*2<=n)
        ans[i*2]=ans[i];

        if(i*2+1<=n)
        ans[i*2+1]=1+ans[i];
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
        int n;
        cin>>n;

        vector<int>ans=solve(n);

        for(auto i:ans)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}