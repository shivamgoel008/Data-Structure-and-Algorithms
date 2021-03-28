#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

int knapsack_problem(int n,int c,int *wt,int *price)
{
    // base case
    if(n==0 or c==0)
    return 0;
    int inc,exc;
    inc=exc=0;
    // reccurring case
    if(wt[n-1]<=c)
    {
        inc=price[n-1]+knapsack_problem(n-1,c-wt[n-1],wt,price);
    }

    exc=knapsack_problem(n-1,c,wt,price);

    return max(inc,exc);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int wt[]={1,2,3,5},price[]={40,20,30,100};
    int n=4,c=7;
    cout<<knapsack_problem(n,c,wt,price);

    return 0;
}