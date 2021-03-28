
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
        ll i,cnts=0,ans=0,cntc=0;
        string s;
        cin>>s;

        for(i=0;i<s.length();i++)
        {
            if(s[i]=='[')
            cnts++;

            else if(s[i]=='(')
            cntc++;

            else if(s[i]==']' and cnts>0)
            {
                cnts--;
                ans++;
            }

            else if(s[i]==')' and cntc>0)
            {
                cntc--;
                ans++;
            }

        }

        cout<<ans<<endl;
    }
    return 0;
}