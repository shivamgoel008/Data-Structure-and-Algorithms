/* Given a ladder containing n steps and you can take a jump 
of 1,2 ,3 at each step find number of ways to climb the ladder */


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


ll solve(ll n)
{
    if(n<0)
    return 0;
    if(n==0)
    return 1;

    return solve(n-1)+solve(n-2)+solve(n-3);
}

bool isSorted(ll *a,ll n)
{
    if(n==sizeof(a)/sizeof(ll)-1)
    {
        return true;
    }
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
        ll n;
        cin>>n;

        cout<<solve(n)<<endl;
    }
    return 0;
}