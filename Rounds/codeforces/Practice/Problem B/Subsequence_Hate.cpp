
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
        string s;
        ll cnt1=0,cnt0=0,anscnt1=0,i,anscnt2=0;
        cin>>s;

        for(i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            cnt0++;
            else if(s[i]=='1')
            cnt1++;
        }

        string ans1;

        while(cnt1>0)
        {
            ans1.push_back('1');
            cnt1--;
        }

        while(cnt0>0)
        {
            ans1.push_back('0');
            cnt0--;
        }

        for(i=0;i<s.length();i++)
        {
            if(ans1[i]!=s[i])
            anscnt1++;
        }
        
        reverse(ans1.begin(),ans1.end());

        for(i=0;i<s.length();i++)
        {
            if(ans1[i]!=s[i])
            anscnt2++;
        }

        cout<<min(anscnt2,anscnt1)<<endl;
    }
    return 0;
}