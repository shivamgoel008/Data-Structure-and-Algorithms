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
        ll first,second,even_first,even_second,odd_first,odd_second,answer=0;
        cin>>first>>second;

        if(first%2==0){
            even_first=first/2;
            odd_first=first/2;
        }

        else{
            even_first=first/2;
            odd_first=first-even_first;
        }

        if(second%2==0){
            even_second=second/2;
            odd_second=second/2;
        }

        else{
            even_second=second/2;
            odd_second=second-even_second;
        }
        answer=even_first*even_second+odd_second*odd_first;
        cout<<answer<<endl;
    }
    return 0;
}