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
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test()
    {
        ll n,d,risk_taken=0,second=0,answer=0,i;
        cin>>n>>d;
        for(i=0;i<n;i++){
            ll a;cin>>a;
            if(a>=80 or a<=9)
            risk_taken++;
            else
            second++;
        }
        if(risk_taken%d==0)
        answer+=risk_taken/d;
        else
        answer+=risk_taken/d+1;
        if(second%d==0)
        answer+=second/d;
        else 
        answer+=second/d+1;

        cout<<answer<<endl;
    }
    return 0;
}