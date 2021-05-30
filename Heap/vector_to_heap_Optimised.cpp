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

bool minHeap=false;
bool compare(int a,int b)
{
    if(minHeap)
    return a<b;

    return a>b;
}

void heapify(vector<int>&v,int idx)
{
    int left=2*idx;
    int right=2*idx+1;

    int min_idx=idx;
    int last=v.size()-1;

    if(left<=last and compare(v[left],v[idx]))
    min_idx=left;

    if(right<=last and compare(v[right], v[min_idx]))
    min_idx=right;


    if(min_idx!=idx)
    {
        swap(v[idx],v[min_idx]);
        heapify(v,min_idx);
    }
}

void buildHeapOptimised(vector<int>&v)
{
    for(int i=(v.size()-1)/2;i>=1;i--)
    {
        heapify(v,i);
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
    
    vector<int>v{-1,10,20,5,6,1,8,9,4};
    buildHeapOptimised(v);

    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}