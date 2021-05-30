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


class heap
{
    vector<int>v;
    bool minHeap;

    bool compare(int a,int b)
    {
        if(minHeap)
        return a<b;

        return a>b;
    }

    void heapify(int idx)
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
            heapify(min_idx);
        }
    }

    public:

    heap(int default_size=10,bool type=true)
    {
        v.reserve(default_size);
        v.push_back(-1);
        minHeap=type;
    }


    void push(int d)
    {
        v.push_back(d);
        int index=v.size()-1;
        int parent=index/2;

        // keep pushing to the top till you reach a root node or stop midway because current element is already greater then parent 
        while(index>1 and compare(v[index], v[parent]))
        {
            swap (v[index],v[parent]);
            index=parent;
            parent=parent/2;
        }
    }

    int top()
    {
        return v[1];
    }

    void pop()
    {
        swap(v[1],v[v.size()-1]);
        v.pop_back();
        heapify(1);
    }

    bool empty()
    {
        return v.size()==1;
    }

};


int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    // test()
    // {
    //     ll i,j,n;
    // }

    heap h(10 , false);
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        h.push(no);
    }

    while(!h.empty())
    {
        cout<<h.top()<<" ";
        h.pop();
    }
    return 0;
}