
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

bool check_prime(ll n)
{
    if(n==2 or n==1)
    return true;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }

    return true;
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
        ll n,i;
        cin>>n;

        if(check_prime(n)==true)
        {
            // cout<<"YES"<<endl;
            cout<<1<<endl;
            cout<<n<<endl;
        }

        else if(check_prime(n)==false)
        {
            // cout<<"NO"<<endl;
            vector<pair<ll,ll>>v;
            ll cnt=0;
            ll temp=n;
            while(n%2==0)
            {
                cnt++;
                n=n/2;
            }
            v.push_back(make_pair(cnt,2));

            for(i=3;i<=sqrt(n);i+=2)
            {
                cnt=0;
                while(n%i==0)
                {
                    cnt++;
                    n=n/i;
                }

                v.push_back(make_pair(cnt,i));
            }

            if(n>2)
            v.push_back(make_pair(1,n));

            sort(v.begin(),v.end());
            
            cnt=0;
            ll check=v[v.size()-1].first-1;

            if(check>0)
            {
                cout<<v[v.size()-1].first<<endl;
            while(1)
            {
                temp=temp/v[v.size()-1].second;
                cnt++;
                cout<<v[v.size()-1].second<<" ";

                if(cnt==check)
                break;
            }

            cout<<temp<<endl;
            }

            else if(check==0)
            {
                cout<<1<<endl;
                cout<<temp<<endl;
            }

        }
        
    }
    return 0;
}