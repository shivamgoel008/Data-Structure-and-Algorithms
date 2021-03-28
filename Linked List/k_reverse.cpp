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
    forward_list<ll>l;
    ll n,no,i,k;
    cin>>n>>k;
    auto k=l.before_begin();

    for(i=0;i<n;i++)
    {
        cin>>no;

        if(i==0)
        l.push_front(no);

        else 
        {
            k++;
            l.insert_after(k,no);
        }
    }

    for(auto it=l.begin();it!=l.end();it=it+k)
    cout<<*it<<"->";
    return 0;
}