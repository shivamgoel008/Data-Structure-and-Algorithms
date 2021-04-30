#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i, n) for (i = 0; i < n; i++)
#define set(a) memset(a, 0, sizeof(a))
#define MOD 1000000007
#define test() \
    ll t;      \
    cin >> t;  \
    while (t--)

bool compare(ll a, ll b)
{
    return a < b;
}


int isPower(int n) {
    
    if(n==1)
    return true;
    
    unordered_map<int,int>freq;
    
    while (n % 2 == 0)
        {
            freq[2]++;
            n = n / 2;
        }

        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            while (n % i == 0)
            {
                freq[i]++;
                n = n / i;
            }
        }

        if (n > 2)
            freq[n]++;
            
            auto it=freq.begin();
            
            int check=it->second;
            
            if(check==1 or check==0)
            return false;



            for(auto i:freq)
            cout<<i.first<<" "<<i.second<<endl;
            
            for(auto i:freq){
                if(check!=i.second)
                return false;
            }
            
        
        return true;    
            
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // test()
    {
        int n;
        cin >> n;
        

        cout<<isPower(n);
    }
    return 0;
}