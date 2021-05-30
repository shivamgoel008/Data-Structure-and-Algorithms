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

// coverting vector in heap inplace(without taking extra sapce)
void buildHeap(vector<int> &v)
{
    for(int i=2;i<v.size();i++)
    {
        int index=i;
        int parent=i/2;
        while(index>1 and v[index]>v[parent])
        {
            swap(v[index],v[parent]);
            index=parent;
            parent=parent/2;
        }
    }
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    vector<int>v={-1,10,20,5,6,1,8,9,4};
    buildHeap(v);
    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;


    return 0;
}