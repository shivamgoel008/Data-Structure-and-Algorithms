
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
        ll a,b,i,cnt;
        cin>>a>>b;

        string s;
        cin>>s;

        ll first=-1, last=-1;

        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                first=i;
                break;
            }
        }

        for(i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                last=i;
                break;
            }
        }

        if(first==last and first==-1)
        cout<<0<<endl;

        else 
        {     
            vector<ll>gap;

            // cout<<first<<" "<<last<<endl;

            for(i=first;i<=last;i++)
            {
                cnt=0;
                while(s[i]=='0')
                {
                    cnt++;
                    i++;
                }
                if(cnt>0)
                gap.push_back(cnt);
            }

            // for(auto i:gap)
            // cout<<i<<" ";
            // cout<<endl;

            if(gap.size()==0)
            cout<<a<<endl;

            else 
            {
                // cout<<"YES"<<endl;
                ll ans=a;

                for(auto i:gap)
                {
                    ans+=min(a,b*i);
                }

                cout<<ans<<endl;
            }

        }
    }
    return 0;
}