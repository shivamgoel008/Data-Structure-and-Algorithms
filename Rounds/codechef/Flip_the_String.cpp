
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
        ll i,j,cnt=0;
        string a,b;
        cin>>a>>b;

        while(1)
        {
            for(i=0;i<a.length();i++)
            {
                if(a[i]!=b[i])
                {
                    cnt++;
                    for(j=i;j<a.length();j+=2)
                    {
                        if(a[j]!=b[j])
                        a[j]=b[j];

                        else if(a[j]==b[j])
                        {
                            // cout<<a<<endl;
                            break;
                        }
                    }
                }

            }
            if(a==b)
            {
                // cout<<a<<" "<<b<<endl;
                break;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}