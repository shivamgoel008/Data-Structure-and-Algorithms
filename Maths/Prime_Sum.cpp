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


// always use vectors because vector have large maximum size as compare to array becuse thry usedynamic allocation 

vector<int> primesum(int A) {
    vector<int>ans;
    vector<bool> p(A+1,0);
    int i,j;

    p[1]=p[0]=0;
    p[2]=1;

    for(i=3;i<=A;i=i+2)
    p[i]=1;

    for(i=3;i*i<=A;i=i+2)
    {
        if(p[i]==1)
        {
            for(j=i*i;j<=A;j=j+i)
            p[j]=0;
        }
    }
    
    for(i=2;i<A;i++)
    {
        if(p[i]==1 and p[A-i]==1)
        {
            ans.push_back(i);
            ans.push_back(A-i);
            return ans;
        }
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
    test()
    {
         
    }
    return 0;
}