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

/*int exponential(int a,int b)
{
    if(b==0)
    return 1;

    int ans=1;
    ans=a*exponential(a,b-1);
    return ans;
}
*/

int fast_exp(int a,int b)
{
    if(b==0)
    return 1;

    int smaller_ans=fast_exp(a,b/2);
    smaller_ans=smaller_ans*smaller_ans;
    
    if(b&1)
    return smaller_ans*a;

    return smaller_ans;

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

        int ans=fast_exp(a,b);
        cout<<ans<<endl;
    }
    return 0;
}
