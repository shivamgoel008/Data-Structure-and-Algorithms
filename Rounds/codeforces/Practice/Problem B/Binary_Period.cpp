
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
        string t;
        cin>>t;

        ll i,cnt0=0,cnt1=0;

        for(i=0;i<t.size();i++)
        {
            if(t[i]=='0')
            cnt0++;

            else if(t[i]=='1')
            cnt1++;
        }

        char ans[2*(t.size())];

        if(cnt1!=0 and cnt0!=0)
        {
            for(i=0;i<2*t.size();i++)
            {
                if(i%2==0)
                ans[i]='1';
                else
                ans[i]='0';
            }
        }

        else if(cnt1==0)
        {
            for(i=0;i<2*t.size();i++)
            ans[i]='0';
        }
        else if(cnt0==0)
        {
            for(i=0;i<2*t.size();i++)
            ans[i]='1';
        }

        ans[2*t.size()]='\0';
        cout<<ans<<endl;
    }
    return 0;
}