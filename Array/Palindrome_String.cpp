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
        string s;
        bool flag=true;
        cin>>s;

        ll i;

        string str;

        transform(s.begin(),s.end(),s.begin(),::tolower);

        // cout<<s<<endl;
        
        for(i=0;i<s.length();i++)
        {
            if((s[i]>=97 and s[i]<=122) or (s[i]>=65 and s[i]<=90))
            {
                str.push_back(s[i]);
            }
        }
        
        for(i=0;i<str.length()/2;i++)
        {
            if(str[i]!=str[str.length()-1-i])
            {
                flag=false;
                break;
            }
        }

        cout<<flag<<endl;
        cout<<str<<endl;
    }
    return 0;
}