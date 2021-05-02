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

int sortedPermutationRank(string str)
{
    int n=str.length(),i;
    vector<ll>fact(26);

    vector<ll>arr(256,0);

    fact[0]=1;
    fact[1]=1;

    for(i=2;i<26;i++)
    fact[i]=i*fact[i-1];

    for(i=0;i<n;i++)
    arr[str[i]]++;

    int numberOfLetterSmaller;

    int ans=0;

    for(i=0;i<n;i++)
    {
        numberOfLetterSmaller=0;

        for(int j=0;j<256;j++)
        {
            if(j==str[i])
            break;

            if(arr[j]==1)
            numberOfLetterSmaller++;
        }

        arr[str[i]]=0;
        ans+=numberOfLetterSmaller*fact[n-1-i];
    }

    return ans+1;

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
        cout<<sortedPermutationRank("ibytes");
    }
    return 0;
}