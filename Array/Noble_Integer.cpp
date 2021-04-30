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

int solve(vector<int> &A) {
    
    sort(A.begin(),A.end());
    int n=A.size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(A[j]!=A[j+1])
            break;
            else i++;
        }

        cout<<A[i]<<" "<<n-i-1<<endl;
        
        if(A[i]==n-i-1)
        return 1;
    }
    
    return -1;
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
        cin>>n;

        vector<int>v(n);

        for(int i=0;i<n;i++)
        cin>>v[i];

        cout<<solve(v);
    }
    return 0;
}