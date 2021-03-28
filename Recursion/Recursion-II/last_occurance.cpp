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
//My approach 
int last_occurance(int *a,int first,int last,int key)
{
    if(last==-1)
    return -1;

    else if(a[last]==key)
    return last;
    
    last=last-1;
    return last_occurance(a,first,last,key);
}
*/

int last_occurance(int *a,int i,int key)
{
    if(i==-1)
    return -1;

    if(a[i]==key)
    return i;

    return last_occurance(a,i-1,key);

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,key,i;
        cin>>n;

        int a[n];

        fo(i,n)
        cin>>a[i];

        cin>>key;

        int ans=last_occurance(a,n-1,key);

        cout<<ans;
    }
    return 0;
}
