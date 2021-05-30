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

vector<vector<int>> solve(vector<int>v,int target)
{
    vector<vector<int>>ans;

    if(v.empty())
    return ans;

    sort(v.begin(),v.end());

     for(int i=0;i<v.size();i++)
     {
        for(int j=i+1;j<v.size();j++)
        {
            int target2=target-v[i]-v[j];
            int first=j+1;
            int last=v.size()-1;

            while(first<last)
            {
                int sum=v[first]+v[last];

                if(sum==target2)
                {
                    vector<int>quard;
                    quard.push_back(v[i]);
                    quard.push_back(v[j]);
                    quard.push_back(v[first]);
                    quard.push_back(v[last]);
                    ans.push_back(quard);

                    while(first<last and v[first]==quard[2])
                    first++;

                    while(first<last and v[last]==quard[3])
                    last--;
                }

                else if(sum<target2)
                first++;

                else 
                last--;
            }

            while(j+1<v.size() and v[j+1]==v[j])
            j++;
        }
        while(i+1<v.size() and v[i+1]==v[i])
        i++;
         
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

        vector<int>v(n);

        fo(i,n)
        cin>>v[i];

        int target;
        cin>>target;

        vector<vector<int>>ans=solve(v,target);

        for(auto i:ans)
        {
            for(auto j:i)
            cout<<j<<" ";
            cout<<endl;
        }
    }
    return 0;
}