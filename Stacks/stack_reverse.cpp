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

    //reversing stack using 2 stacks
    /*
    int i;

    stack<int>s1;
    stack<int>s2;
    stack<int>s3;

    for(i=1;i<5;i++)
    s1.push(i);

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s2.push(s1.top());
        s1.pop();
    }

    while(!s2.empty())
    {
        s3.push(s2.top());
        s2.pop();
    }

    for(i=1;i<5;i++)
    {
        s1.push(s3.top());
        s3.pop();
    }
    cout<<endl;

    while (!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    */

//    reversing the stack using 1 stack

    stack<int>s1,s2;
    int n,i,j;  

    while(1)
    {
        cin>>n;
        if(n==-1)
        break;
        s1.push(n);
    }

    int vacate;
    
    for(i=0;i<s1.size();i++)
    {
        vacate=s1.top();
        s1.pop();
        for(j=0;j<s1.size()-i-1;j++)
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(vacate); 

        for(j=0;j<s1.size()-i-1;j++)
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    while(!s1.empty())
    {
        cout<<s1.top();
        s1.pop();
    }
    
    return 0;
}