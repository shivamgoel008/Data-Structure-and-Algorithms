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

        stack<int>s;

        // 1 2 3 4 5

        s.push(6);
        // 1 2 3 4 5 6

        s.pop();
        // 1 2 3 4 5

        s.empty();


        // 6 5 4 3 2 1
        // 5 4 3 2 1 6
        // 4 3 2 1 5 6 


    }
    return 0;
}