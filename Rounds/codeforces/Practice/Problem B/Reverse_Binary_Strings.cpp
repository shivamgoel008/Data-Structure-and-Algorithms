
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
        ll n,cnt1=0,i,cnt0=0;
        cin>>n;

        string s;
        cin>>s;

        ll flag=1;

        for(i=0;i<n;i++)
        {
            if(s[i]==s[i+1] and s[i]=='1')
            {
                while(s[i]==s[i+1])
                {
                    cnt1++;
                    i++;
                }
            }

            else if(s[i]==s[i+1] and s[i]=='0')
            {
                while(s[i]==s[i+1])
                {
                    cnt0++;
                    i++;
                }
            }
        }

        // cout<<cnt1<<" "<<cnt0<<endl;
        cout<<max(cnt1,cnt0)<<endl;

    }
    return 0;
}