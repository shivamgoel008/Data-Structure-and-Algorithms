
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
        ll n,i,j,counter=0;
        cin>>n;

        vector<ll>v(n),neg,pos;

        for(i=0;i<n;i++)
        cin>>v[i];

        if(v[0]>0)
        {
            for(i=0;i<n;i++)
            {
                // posiive interger 
                if(v[i]>0 and counter%2==0)
                {
                    ll maximum=INT_MIN;
                    for(j=i;j<n;j++)
                    {
                        if(v[j]<0)
                        break;

                        else
                        {
                            maximum=max(maximum,v[j]);
                        }
                    }
                    pos.push_back(maximum);
                    // cout<<j-1<<endl;
                    i=j-1;
                }

                // negative interger 
                else if(v[i]<0 and counter%2!=0)
                {
                    ll maximum=INT_MIN;
                    for(j=i;j<n;j++)
                    {
                        if(v[j]>0)
                        break;

                        else
                        {
                            maximum=max(maximum,v[j]);
                        }
                    }
                    pos.push_back(maximum);
                    i=j-1;
                } 

                counter++;
            }

            // for(auto i:pos)
            // cout<<i<<" ";
            // cout<<endl<<endl;

            ll sum=0;
            for(auto i:pos)
            sum+=i;

            cout<<sum<<endl;
        }


        else if(v[0]<0)
        {
            
            for(i=0;i<n;i++)
            {
                // posiive interger 
                if(v[i]<0 and counter%2==0)
                {
                    ll maximum=INT_MIN;
                    for(j=i;j<n;j++)
                    {
                        if(v[j]>0)
                        break;

                        else
                        {
                            maximum=max(maximum,v[j]);
                        }
                    }
                    neg.push_back(maximum);
                    // cout<<j-1<<endl;
                    i=j-1;
                }

                // negative interger 
                else if(v[i]>0 and counter%2!=0)
                {
                    ll maximum=INT_MIN;
                    for(j=i;j<n;j++)
                    {
                        if(v[j]<0)
                        break;

                        else
                        {
                            maximum=max(maximum,v[j]);
                        }
                    }
                    neg.push_back(maximum);
                    i=j-1;
                } 

                counter++;
            }

            // for(auto i:neg)
            // cout<<i<<" ";
            // cout<<endl<<endl;

            ll sum=0;
            for(auto i:neg)
            sum+=i;

            cout<<sum<<endl;
        }

        

        
    }
    return 0;
}