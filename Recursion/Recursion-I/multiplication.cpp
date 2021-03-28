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
ll p[1000000];

int multiplication(int a,int b)
{
    int ans=0;
    if(b==0)
    return 0;

    ans=a+multiplication(a,b-1);
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
        int a,b;
        cin>>a>>b;
        int ans=multiplication(a,b);
        cout<<ans<<endl;
    }
    return 0;
}
