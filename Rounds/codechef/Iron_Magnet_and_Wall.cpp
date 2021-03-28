
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
        ll n,k,i,j;
        cin>>n>>k;

        string s,f;
        cin>>s;


        // if a sheet occurs then i add 2'_' char to neutralise the  S in the formula (P=K+1−|j−i|−S)

        for(i=0;i<n;i++)
        {
            if(s[i]==':')
            {
                f.push_back('_');
                f.push_back('_');
            }

            else
            f.push_back(s[i]);
        }
        cout<<f<<endl;

        ll magnet=0, iron=0;

        // counting number of magnets and irons 
        for(i=0;i<f.length();i++)
        {
            if(f[i]=='M')
            magnet++;

            else if(f[i]=='I')
            iron++;
        }

        // if count of iron or magnet is zero then we output 0

        if(magnet==0 or iron==0)
        cout<<0<<endl;

        else 
        {
            ll cnt=0;
            for(i=0;i<f.length();i++)
            {
                //searching for Magnet 
                if(f[i]=='M')
                {
                    // if blockage encounter then we break
                    for(j=i;j<f.length();j++)
                    {
                        if(f[j]=='X')
                        {
                            // i=j;
                            break;
                        }

                        // iron occur then we increment the counter and make magnet and iron "_"
                        else if(f[j]=='I' and (k+1-abs(i-j))>0)
                        {
                            f[j]='_';
                            f[i]='_';
                            cnt++;
                            // i=j;
                            break;
                        }
                    }
                }

                //searching for iron 

                else if(f[i]=='I')
                {
                    for(j=i;j<f.length();j++)
                    {
                          // if blockage encounter then we break
                        if(f[j]=='X')
                        {
                            // i=j;
                            break;
                        }
                        // magnet  occur then we increment the counter and make magnet and iron "_"
                        else if(f[j]=='M' and (k+1-abs(i-j))>0)
                        {
                            f[j]='_';
                            f[i]='_';
                            cnt++;
                            // i=j;
                            break;
                        }
                    }
                }
            }

            cout<<f<<endl;
            cout<<cnt<<endl;
        }
    }
    return 0;
}