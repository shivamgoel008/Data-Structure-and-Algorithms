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

int solve(string A) {
    
    int len  = A.length();
    int sum =0;
    for(int i=0;i<len;i++){
        if(A[i]=='a' || A[i]== 'e' ||A[i]== 'i'||A[i]== 'o'||A[i]== 'u'||A[i]== 'A'||A[i]== 'E'||A[i]== 'I'||A[i]== 'O'||A[i]== 'U')
                    sum+=len-i;
    
    }
    return sum%10003;
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

        string s;
        cin>>s;

        cout<<solve(s);
        
    }
    return 0;
}