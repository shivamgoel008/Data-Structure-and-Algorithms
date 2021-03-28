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

void indicies(int *a,int i,int n,int key)
{
    if(i==n)
    return;

    else if(a[i]==key)
    cout<<i<<" ";
    
    indicies(a,i+1,n,key);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,i,key;
    cin>>n;

    int a[n];

    fo(i,n)
    cin>>a[i];

    cin>>key;

    indicies(a,0,n,key);
    return 0;
}
