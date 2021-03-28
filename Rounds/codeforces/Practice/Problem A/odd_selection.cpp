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
        ll n,even=0,odd=0,i,x;
        cin>>n>>x;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        {
            cin>>v[i];

            if(v[i]%2==0)
            even++;

            else if(v[i]%2!=0)
            odd++;
        }
        
        if(odd==0)
        cout<<"NO"<<endl;

        else if(even==0)
        {
            if(x%2==0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }

        else
        {
            bool flag=false;
    
            
                    x--;
                    odd--;

                    if(x==0)
                    {
                        flag=true;
                    }

                    else 
                    {
                        while(even>0)
                        {
                            even--;
                            x--;

                            if(x==0)
                            {
                                flag=true;
                                break;
                            }
                        }

                        if(x>0)
                        {
                            while(odd>1)
                            {
                                x--;
                                odd=odd-2;
                                if(x==0)
                                {
                                    flag=true;
                                    break;
                                }
                            }
                        }
                    }

                    if(flag==true)
                    cout<<"YES"<<endl;

                    else 
                    cout<<"NO"<<endl;
        }
    }
    return 0;
}