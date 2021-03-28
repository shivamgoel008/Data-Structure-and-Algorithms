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

ll ladder(ll n)
{
    if(n==0 or n==1)
    return 1;
    ll ans=0;
    ans=ans+ladder(n-1)+ladder(n-3)+ladder(n-5);
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
       ll n;
       cin>>n;

       ll ans;
       ans=ladder(n);
       cout<<ans<<endl;
    }
    return 0;
}
