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

void replacepi(char *a,int i,int n)
{
    int j;
    if(a[i]=='\0' or a[i+1]=='\0')
    return;

    else if(a[i]=='p' and a[i+1]=='i')
    {j=i+2;

    while(a[j]!='\0')
    j++;

    while(i+2<=j)
    {
        a[j+2]=a[j];
        j--;
    }



    a[i]='3';
    a[i+1]='.';
    a[i+2]='1';
    a[i+3]='4';
    replacepi(a,i+4,n);
    }

    else 
    replacepi(a,i+1,n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin>>t;
    while(t--)
    {
        char a[10000];
        cin>>a;

        ll n=strlen(a);

        replacepi(a,0,n);

        cout<<a<<endl;
 
    }
    return 0;
}
