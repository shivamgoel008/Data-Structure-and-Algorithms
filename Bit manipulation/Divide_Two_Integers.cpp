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
    return a<b;
}


int solve(int dividend,int divisor)
{
   /* first method */

//    keep substracting the divisor from the dividend until the divident becomes less then divisor and return total count 

// cout<<dividend<<divisor<<endl;
    bool flag=false;

    if((dividend<0 and divisor>0) or (dividend>0 or dividend<0))
    flag=true;

    divisor=abs(divisor);
    dividend=abs(dividend);


    long long int q=0,i;
    long long int t=0;

    for(i=31;i>=0;i--)
    {
        unsigned long int num=t+(divisor<<i);
        
        // cout<<num<<endl;
        if(num<=dividend)
        {
            t+=(divisor<<i);
            cout<<t<<endl;
            q+=(1<<i);
            // cout<<q<<endl;
        }
        // cout<<(divisor<<i)<<" "<<t<<" "<<i<<endl;
    }

    cout<<q<<endl;

    return 0;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // test()
    {
        int dividend,divisor;
        cin>>dividend>>divisor;

        cout<<solve(dividend,divisor);
    }
    return 0;
}