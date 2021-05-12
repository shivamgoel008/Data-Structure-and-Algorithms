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


unsigned int solve(unsigned int A)
{
    unsigned int ans =0;
    string b;
    
    while(A>0)
    {
        if((A&1))
        b.push_back('1');
        
        else 
        b.push_back('0');

        A=(A>>1);
    }

    // cout<<b<<endl;
    int cnt=0,i;

    int red=b.length();
    // cout<<red<<endl;

    for(i=0;i<32-red;i++)
    {
        b.push_back('0');
    }

    // cout<<b<<endl;

    // cout<<b.length()<<endl;
    
    for(i=b.length()-1;i>=0;i--)
    {
        if(b[i]=='1')
        ans+=pow(2,cnt);
        cnt++;
    }
    
    return ans;
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
        unsigned int i,j;
        cin>>i;

        cout<<solve(i);
    }
    return 0;
}