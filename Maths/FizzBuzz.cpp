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

vector<string>fizzBuzz(int A) {
    
    vector<string>ans;
    int i,j;
    
    for(i=1;i<=A;i++)
    {
        if(i%3==0 and i%5==0)
        ans.push_back("FizzBuzz");
        
        else {
            if(i%3==0)
            ans.push_back("Fizz");
            
            else if(i%5==0)
            ans.push_back("Buzz");
            
            
            else 
            {
                string s=to_string(i);
                ans.push_back(s);
            }
        }
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
        vector<string>v;

        string s=to_string(1);
        v.push_back(s);
        for(auto i:v)
        cout<<i<<endl;
        
    }
    return 0;
}