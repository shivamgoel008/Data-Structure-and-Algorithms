#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long int 
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);


class phone
{
private:
    ll std, exchange_code,number;

public:
    void getter()
    {
        cin>>std>>exchange_code>>number;
    }

    void setter()
    {
        ll copy=std,cnt=0;
        while(copy>0)
        {
           copy=copy/10;
           cnt++;
        }
        std=91*pow(10,cnt)+std;
        cout<<std<<"-"<<exchange_code<<"-"<<number;

    }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    OJ;
    test(t)
    {
    phone p;
    p.getter();
    p.setter();
    cout<<endl;
    }
    return 0;
}