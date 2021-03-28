#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define set(a) memset(a,0,sizeof(a))
#define sort(a) sort(a,a+n)
#define fo(i,n) for(i=0;i<n;i++)
#define PI 3.1415926535897932384626

/*
//my approach to solve the problem
int first_occurance(int *a,int first,int last,int key)
{
    if(first>last)
    return -1;

    else if(a[first]==key)
    return first;

    
    first=first+1;
    return first_occurance(a,first,last,key);
}
*/
/*
//coding blocks approach-1 to solve this problem 
int first_occurance(int *a,int n,int key)
{
    int ans;
    if(n==0)
    return -1;

    if(a[0]==key)
    return 0;

    ans=first_occurance(a+1,n-1,key);
    if(ans==-1)
    return-1;

    return ans+1;
}
*/


//coding  blocks approach-2 to solve this problem and this method is better approach

int first_occurance(int *a,int i,int n,int key)
{
    if(i==n)
    return -1;

    else if(a[i]==key)
    return i;

    return first_occurance(a,i+1,n,key);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,key;
        cin>>n;

        int a[n];

        for(i=0;i<n;i++)
        cin>>a[i];
        cin>>key;

        int ans=first_occurance(a,0,n,key);
        cout<<ans<<endl;
    }
    return 0;
}
