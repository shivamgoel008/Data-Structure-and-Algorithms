#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define set(a) memset(a,0,sizeof(a))
#define sort(a) sort(a,a+n)
#define fo(i,n) for(i=0;i<n;i++)
#define PI 3.1415926535897932384626

int tilling(int n,int m)
{
    if(n<=3 or m<=3)
    return 1;

    int ans=0;

    ans=ans+tilling(n-1,m)+tilling(n-m,m);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int ans=tilling(n,m);

        cout<<ans<<endl;
 
    }
    return 0;
}
