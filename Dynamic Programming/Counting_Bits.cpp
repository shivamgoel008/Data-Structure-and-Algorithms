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

vector<int> countBits(int n) {
        vector<int>ans(n+1);
        ans[0]=0;
        for(int i=0;i<=n/2;i++){
            
            // if(i*2<=n)
            ans[i*2]=ans[i];
            if(i*2+1<=n)
            ans[i*2+1]=ans[i]+1;
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
        vector<int>ans=countBits(n);

        for(auto i:ans)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}