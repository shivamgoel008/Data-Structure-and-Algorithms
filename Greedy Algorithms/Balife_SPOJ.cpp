#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        ll n,i,sum=0;
        cin>>n;
 
        int a[n];
 
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            a[i]=sum;
        }
        ll ans=INT_MIN;
 
        if(sum%n!=0)
        cout<<"-1"<<endl;
 
        else 
        {
            for(i=0;i<n;i++)
            {
                ll current=abs(a[i]-((sum/n)*(i+1)));
                ans=max(ans,current);
            }
 
            cout<<ans<<endl;
        }
    return 0;
} 