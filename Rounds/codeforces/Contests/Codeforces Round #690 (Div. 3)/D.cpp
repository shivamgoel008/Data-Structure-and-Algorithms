
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
        ll n,i;
        cin>>n;

        ll total=n;
        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        ll sum=accumulate(v.begin(),v.end(),0),cnt=0;
        // cout<<sum<<endl;

        while(1)
        {
            bool flag=true;
            if(sum%n==0)
            {
                ll accu=0;
                set<ll>s;
                for(i=0;i<total;i++)
                {
                    accu+=v[i];
                    if(accu==sum/n)
                    {
                        s.insert(accu);
                        accu=0;
                        cnt++;
                    }

                    else if(accu>sum/n)
                    {
                        flag=false;
                        break;
                    }
                }

                if(flag==true)
                {
                    if(accu>0)
                    s.insert(accu);

                    if(s.size()==1)
                    {
                        cout<<total-n<<endl;
                        break;
                    }

                    else {
                        flag=false;
                    }
                }

                if(flag==false)
                {
                    n--;
                    cnt=0;
                    continue;
                }
            }

            else if(sum%n!=0)
            n--;

            // if(n<=0)
            // break;
        }
    }
    return 0;
}