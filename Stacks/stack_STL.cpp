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
    int i,n;
    cin>>n;

    stack<int>s;

    for(i=1;i<=n;i++)
    s.push(i*i);

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}