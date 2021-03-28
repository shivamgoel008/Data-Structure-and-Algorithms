
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

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
        ll n,i;
        cin>>n;

        string s,sub="2020";
        cin>>s;

        n=s.size();

        

        if(s[0]=='2' and s[n-3]=='0' and s[n-2]=='2' and s[n-1]=='0')
        cout<<"YES"<<endl;

        else if(s[0]=='2' and s[1]=='0' and s[n-2]=='2' and s[n-1]=='0')
        cout<<"YES"<<endl;

        else if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[n-1]=='0')
        cout<<"YES"<<endl;

        else if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[n-1]=='0')
        cout<<"YES"<<endl;

        else if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[3]=='0')
        cout<<"YES"<<endl;

        else if(s[n-4]=='2' and s[n-3]=='0' and s[n-2]=='2' and s[n-1]=='0')
        cout<<"YES"<<endl;

        else 
        cout<<"NO"<<endl;
        
    }
    return 0;
}