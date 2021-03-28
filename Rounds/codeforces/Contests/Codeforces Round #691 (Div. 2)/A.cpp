
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
        ll n,i,j,cntr=0,cntb=0,equal=0;
        cin>>n;
        string red,blue;
        cin>>red;
        cin>>blue;

        sort(red.begin(),red.end());
        sort(blue.begin(),blue.end());

        for(i=0;i<n;i++)
        {
            if(red[i]>blue[i])
            cntr++;

            else if(red[i]<blue[i])
            cntb++;

            else
            equal++;
        }

        if(cntr>cntb)
        cout<<"RED"<<endl;

        else if(cntr<cntb)
        cout<<"BLUE"<<endl;

        else 
        cout<<"EQUAL"<<endl;
        
    }
    return 0;
}