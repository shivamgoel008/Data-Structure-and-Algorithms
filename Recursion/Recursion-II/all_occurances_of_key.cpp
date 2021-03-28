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
void all_occurance(int *a,int i,int n,int key)
{
    int ans;
    if (i==n)
    return;
    
    if(a[i]==key)
    cout<<i<<" ";

    all_occurance(a,i+1,n,key);
}
*/

int all_occurance(int *a,int n,int i,int key,int *out,int j)
{
    if(i==n)
    return j;

    else if(a[i]==key)
    {
        out[j]=i;
        return all_occurance(a,n,i+1,key,out,j+1);
    }

    return all_occurance(a,n,i+1,key,out,j);
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
        fo(i,n)
        cin>>a[i];

        cin>>key;

        int out[100];

        int count=all_occurance(a,n,0,key,out,0);

        cout<<count<<endl;

        fo(i,count)
        cout<<out[i]<<" ";

    }
    return 0;
}
