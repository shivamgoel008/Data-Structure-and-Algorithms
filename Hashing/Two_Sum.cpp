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


vector<int> solve(vector<int>v,int target)
{
       unordered_map<int,int>mp;
        vector<int>ans;
        
        for(int i=0;i<v.size();i++){
            
            if(mp.find(target-v[i])!=mp.end()){
                
                if(mp[target-v[i]]==i)
                    continue;
                ans.push_back(mp[target-v[i]]);
                ans.push_back(i);
                break;
            }
            
            else
                mp[v[i]]=i;
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

        int target;
        cin>>target;

        vector<int>ans=solve(v,target);

        for(auto i:ans)
        cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}