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
    int n,i;
    cin>>n;

    list<int>l;
    for(i=0;i<n;i++)
    {
        int no;
        cin>>no;
        l.push_back(no);
    }
    int k;
    cin>>k;
    int o=0;
    int a[n];

    for(i=0;i<n-k;i++)
    {
        a[o]=l.front();
        l.pop_front();
        o++;
    }
    for(i=0;i<o;i++)
    {
        l.push_back(a[i]);
    }

    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}