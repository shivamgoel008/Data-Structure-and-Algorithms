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


int solve(int x,int y)
{
   /* first method */

//    keep substracting the divisor from the dividend until the divident becomes less then divisor and return total count 

// cout<<dividend<<divisor<<endl;
     bool flag=false;
        
    if((x>=0 and y>=0) or (x<=0 and y<=0))
        flag=false;
        
    else 
        flag=true;

    long long int divisor=abs(y);
    long long int dividend=abs(x);


    long long int quotient=0;
    long long int temp=0;

    for(int i=31;i>=0;--i)
    {
        if(temp+(divisor << i)<=dividend)
        {
            temp+=divisor<<i;
            // cout<<t<<" "<<i<<endl;
            quotient|=1LL<<i;
            
        }
        // cout<<(divisor<<i)<<" "<<t<<" "<<i<<endl;
    }
        
     if(flag==true){
        cout<<"YES"<<endl;
        return -1*quotient;
    }

    if(quotient>=INT_MAX)
        quotient=INT_MAX;
        
    if(quotient<INT_MIN)
        quotient=INT_MIN;

    

    return quotient;
        

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