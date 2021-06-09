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
bool subSetSum(vector<int>v,int sum)
{
    // for(int i=0;i<v.size();i++)
    // cout<<v[i]<<" ";
    // cout<<endl;
    bool dp[v.size()+1][sum+1]={false};

    

    for(int i=0;i<v.size()+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            // cout<<"YES"<<endl;
            if(i==0 and j==0)
            dp[i][j]=true;

            else if(j==0)
            dp[i][j]=true;

            else if(i==0)
            dp[i][j]=false;

            else
            {
                if(dp[i-1][j]==true)
                dp[i][j]=true;

                else 
                {
                    int val =v[i-1];
                    if(j-val>=0)
                    {
                        if(dp[i-1][j-val]==true)
                        dp[i][j]=true;

                        else 
                        dp[i][j]=false;
                    }

                    else 
                    dp[i][j]=false;
                }

            }

            cout<<dp[i][j]<<" ";
        }

        cout<<endl;
        
    }


    // for(int i=0;i<v.size()+1;i++)
    // {
    //     for(int j=0;j<sum+1;j++)
    //     cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }

    // int ans=INT_MAX;

    // for(int i=0;i<=(sum+1)/2;i++)
    // {
    //     if(dp[v.size()][i]==true)
    //     ans=min(ans,abs(sum-2*i));
    // }

    return dp[v.size()][sum];
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


        int target;
        cin>>target;

        // for(i=0;i<n;i++)
        // cout<<v[i]<<" ";
        // cout<<endl;

        if(subSetSum(v,accumulate(v.begin(),v.end(),0)))
        cout<<"true";
        
        else 
        cout<<"false";

    }
    return 0;
}