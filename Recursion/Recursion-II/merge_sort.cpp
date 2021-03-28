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

void merge(int *a,int s,int e)
{
    int 
}

void mergesort(int *a,int s,int end)
{
    if(s>=end)
    return;

    mid=(s+e)/2;

    mergesort(a,s,mid);
    mergesort(a,mid+1,e);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;

    mergesort();
    
    return 0;
}
