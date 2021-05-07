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


// function to calculate the common prefix between two string 
string commonPrefix(string a,string b)
{
    string res;

    int i,j,n=a.length(),m=b.length();

    for(i=0,j=0;i<n,j<m;i++,j++)
    {
        if(a[i]!=b[j])
        break;

        res.push_back(a[i]);
    }
    return res;
}



// function to calculate the longest common prefix 
string longestCommonPrefix(string arr[],int n)
{
    sort(arr,arr+n);

    string ans=arr[0];

    for(int i=0;i<n;i++)
    {
        ans=commonPrefix(ans,arr[i]);
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
        ll i,j;
    }
    return 0;
}