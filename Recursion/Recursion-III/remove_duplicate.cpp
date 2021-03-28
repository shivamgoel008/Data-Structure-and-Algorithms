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

void removeduplicate(char *a,int i,int n)
{
    int j;
    if(a[i]=='\0' or a[i+1]=='\0')
    return;

    else if(a[i]==a[i+1])
    {
        int k=0;
        j=i+1;
        int l=i+1;
        while(a[i]==a[j])
        {
            k++;
            j++;
        }


        while(a[j]!='\0')
        {
            a[l]=a[j+1];
            j++;
            l++;
        }

        removeduplicate(a,i+k+1,n-k);
    }

    else
    {
        removeduplicate(a,i+1,n);
    }
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    char a[10000];
    cin>>a;
    int n=strlen(a);

    removeduplicate(a,0,n);

    cout<<a;

    return 0;
}
