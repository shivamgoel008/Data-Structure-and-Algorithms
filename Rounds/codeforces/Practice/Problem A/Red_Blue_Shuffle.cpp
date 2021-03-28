
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
        ll n,cnt_red=0,cnt_blue=0,i;
        cin>>n;
        string red,blue;
        cin>>red>>blue;

        for(i=0;i<n;i++)
        {
            if(red[i]>blue[i])
            cnt_red++;

            else if(red[i]<blue[i])
            cnt_blue++;
        }

        if(cnt_blue>cnt_red)
        cout<<"BLUE"<<endl;

        else if(cnt_red>cnt_blue)
        cout<<"RED"<<endl;

        else if(cnt_blue==cnt_red)
        cout<<"EQUAL"<<endl;

    }
    return 0;
}