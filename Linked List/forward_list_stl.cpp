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

    int a,n,i,k=0;
    cin>>n;
    forward_list<int>l;
    
    for(i=0;i<5;i++)
    {
        cin>>a;
        if(i==0)
        {
            l.push_front(a);
        }

        else 
        {
            auto it=l.begin();
            it++;
            l.insert_after(it,a);
        }

    }
    
    for(auto&it:l)
    cout<<it<<"->";

    return 0;
}