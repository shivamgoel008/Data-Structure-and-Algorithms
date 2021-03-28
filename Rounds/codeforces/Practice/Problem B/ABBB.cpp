
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
        string s,ans;
        ll i;
        cin>>s;

        for(i=0;i<s.length();i++)
        {
            ans.push_back(s[i]);
            if(i>0)
            {
                if(ans.length()>=2)
                {
                    if((ans[ans.length()-1]=='B' and ans[ans.length()-2]=='B') or (ans[ans.length()-1]=='B' and ans[ans.length()-2]=='A'))
                    {
                        ans.pop_back();
                        ans.pop_back();
                    }
                }
                
            }
        }    

        cout<<ans.length()<<endl;    
    }
    return 0;
}