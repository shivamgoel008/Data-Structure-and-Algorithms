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

int _sqrt(int n) {
    int first=0;
    int second=1;
    
    int ans;
    
    
    while(first<=second)
    {
        long long int mid=(first+second)/2;
        // cout<<mid<<endl;
        
        if(mid*mid==n)
        {
            // cout<<"YES"<<endl;
            ans=mid;
            break;
        }
        
        else if(mid*mid>n)
        second=mid-1;
        
        else 
        {
            ans=mid;
            first=mid+1;
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
        cin>>n;

        cout<<_sqrt(n);
    }
    return 0;
}