
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
    return a>b;
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
        ll n,k,i;
        cin>>n>>k;

        if(k==3)
        {
            cout<<"1  7"<<endl;
            cout<<"2  5"<<endl;
            cout<<"3  1"<<endl;
        }
        else if(k==4)
        {
            cout<<"1  7"<<endl;
            cout<<"2  5"<<endl;
            cout<<"3  1"<<endl;
            cout<<"4  2"<<endl;
        }

        else if(k==5)
        {
            cout<<"1  7"<<endl;
            cout<<"2  5"<<endl;
            cout<<"3  1"<<endl;
            cout<<"4  2"<<endl;
            cout<<"5  15"<<endl;
        }

        else if(k==6)
        {
            cout<<"1  7"<<endl;
            cout<<"2  5"<<endl;
            cout<<"3  1"<<endl;
            cout<<"4  2"<<endl;
            cout<<"5  15"<<endl;
            cout<<"6  3"<<endl;
        }

        else if(k==7)
        {
            cout<<"1  7"<<endl;
            cout<<"2  5"<<endl;
            cout<<"3  1"<<endl;
            cout<<"4  2"<<endl;
            cout<<"5  15"<<endl;
            cout<<"6  3"<<endl;
            cout<<"7  0"<<endl;
        }

        else if(k==8)
        {
            cout<<"1  7"<<endl;
            cout<<"2  5"<<endl;
            cout<<"3  1"<<endl;
            cout<<"4  2"<<endl;
            cout<<"5  15"<<endl;
            cout<<"6  3"<<endl;
            cout<<"7  0"<<endl;
            cout<<"8  10"<<endl;
        }
    }
    return 0;
}