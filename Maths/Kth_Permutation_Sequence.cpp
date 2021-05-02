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


string getPermutation(int n,int k)
{
    int fact=1,i;
    vector<int>num;

    for(i=1;i<n;i++)
    {
        fact=fact*i;
        num.push_back(i);
    }
    num.push_back(n);

    string ans="";
    k=k-1;

    while (1)
    {
        ans=ans+to_string(num[k/fact]);
        num.erase(num.begin()+k/fact);

        if(num.size()==0)
        break;

        k=k%fact;
        fact=fact/num.size();
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
        int n,k;
        cin>>n>>k;

        cout<<getPermutation(n,k);
    }
    return 0;
}