#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int>s;

    int n,i,day;
    cin>>n;
    int a[n],ans[n];

    for(i=0;i<n;i++)
    cin>>a[i];

    for(day=0;day<n;day++)
    {
        int currprice=a[day];

        while (s.empty()==false and a[s.top()]<currprice)
        s.pop();

        int betterday=s.empty() ? 0:s.top();
        int span=day-betterday;
        ans[day]=span;
        s.push(day);
    }

    fo(i,n)
    cout<<ans[i]<<" ";
    
    return 0;
} 