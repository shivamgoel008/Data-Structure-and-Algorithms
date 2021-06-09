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
    test()

    {
        ll i,j,n;
        string s;
        cin>>s;

        n=s.length();

        s+=s;

        string first,second;

        for(i=0;i<s.length();i++)
        {
            if(i%2==0)
            first.push_back('0');

            else 
            first.push_back('1');
        }

        for(i=0;i<s.length();i++)
        {
            if(i%2==0)
            second.push_back('1');

            else 
            second.push_back('0');
        }
        // cout<<s<<endl;
        // cout<<first<<endl;
        // cout<<second<<endl;

        ll cnt=0,ans=INT_MAX;

        for(i=0;i<s.length();i++)
        {
            if(i<n)
            {
                if(s[i]!=first[i])
                cnt++;
            }

            else 
            {
                // cout<<cnt<<endl;
                // cout<<"YES"<<endl;
        
                if(first[i]!=s[i])
                cnt++;

                if(first[i-n]!=s[i-n])
                cnt--;
            }
 
            if(i>=n-1)
            ans=min(ans,cnt);
        }

        // cout<<ans<<endl;

        ll cnt1=0,ans1=INT_MAX;

        for(i=0;i<s.length();i++)
        {
            if(i<s.length()/2)
            {
                if(s[i]!=second[i])
                cnt1++;
            }

            else 
            {
                ans1=min(ans1,cnt1);
                if(second[i]!=s[i])
                cnt1++;

                if(second[i-n]!=s[i-n])
                cnt1--;
            }

            if(i>=n-1)
            ans1=min(ans1,cnt1);
        }

        // cout<<ans1<<endl;

        cout<<min(ans,ans1)<<endl;
    }
    return 0;
}