#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

class stacks
{
private:
    vector<int>v;

public:
    void push(int data)
    {
        v.push_back(data);
    }

    bool empty()
    {
        if(v.size()==0)
        return true;
        else 
        return false;
    }

    void pop()
    {
        if(!empty())
        v.pop_back();
    }

    int top()
    {
        return v[v.size()-1];
    }
}s;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    for(i=1;i<=5;i++)
    {
        s.push(i*i);
    }

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}