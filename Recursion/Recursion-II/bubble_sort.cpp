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
void bubble_sort(int *a,int n)
{
    int i,j;
    fo(i,n-1)
    {
        fo(j,n-1-i)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }

    fo(i,n)
    cout<<a[i]<<" ";
}
*/

void sorted(int *a,int n)
{
    int j;
    if(n==1)
    return;

    fo(j,n-1)
    {
        if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    }

    return sorted(a,n-1);
}

void fully_reccursive(int )
{
    if(j==n-1)
    return;

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,i,j;
    cin>>n;

    int a[n];

    fo(i,n)
    cin>>a[i];
  

    sorted(a,n);
    
    fo(i,n)
    cout<<a[i]<<" ";
    
    return 0;
}
