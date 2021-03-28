
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
        ll a=0,b=0,ans=0,i;
        cin>>s;

        for(i=0;i<s.length();i++)
        {
            if(s[i]=='a')
            a++;

            else if(s[i]=='b')
            b++;
        }

            if(a==0)
            ans=b/3;

            else if(b==0)
            ans=a/3;

            else if(a!=0 and b!=0)
            {
                if(a%3==0 and b%3==0)
                {
                    ans=a/3+b/3;
                }

                else
                {
                    /* code */
                    // cout<<"YES"<<endl;
                    // cout<<ans<<endl;
                    while(a>=2 or b>=2)
                    {
                        // cout<<"YES2"<<endl;
                        if(a>=b)
                        {
                            if(a>=2 and b>=1)
                            {
                                // cout<<"YES"<<endl;
                                a=a-2;
                                b=b-1;
                                ans++;
                            }

                            else 
                            break;
                        }

                        else if(b>a)
                        {
                            if(a>=1 and b>=2)
                            {
                                a=a-1;
                                b=b-2;
                                ans++;
                            }

                            else 
                            break;
                        }
                    }
                } 
            }
        

        cout<<ans<<endl;

    }
    return 0;
}