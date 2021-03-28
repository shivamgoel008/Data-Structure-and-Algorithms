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

int biker(int n)
{
    if(n==1 or n==0)
    return 1;

    int ans=0;
    
    ans=ans+biker(n-1)+(n-1)*biker(n-2);

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
        int n;
        cin>>n;
        int ans=biker(n);
        cout<<ans;
 
    }
    return 0;
}
