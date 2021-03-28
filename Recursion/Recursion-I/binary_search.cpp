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

int  binary_search(int *a,int first,int last,int key)
{
    int mid=(first+last)/2;

    if(first>last)
    return -1;

    else if(a[mid]==key)
    return mid;

    else if(key>a[mid])
    return binary_search(a,mid+1,last,key);

    else 
    return binary_search(a,first,mid-1,key);

    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,i;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    cin>>a[i];

    int key;
    cin>>key;

    cout<<binary_search(a,0,n-1,key);

    return 0;
}
