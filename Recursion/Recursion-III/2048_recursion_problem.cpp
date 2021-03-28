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

void print(int n)
{
    if(n==0)
    cout<<"zero"<<" ";

    else if(n==1)
    cout<<"one"<<" ";

    else if(n==2)
    cout<<"two"<<" ";

    else if(n==3)
    cout<<"three"<<" ";

    else if(n==4)
    cout<<"four"<<" ";

    else if(n==5)
    cout<<"five"<<" ";

    else if(n==6)
    cout<<"six"<<" ";

    else if(n==7)
    cout<<"seven"<<" ";

    else if(n==8)
    cout<<"eight"<<" ";

    else if(n==9)
    cout<<"nine"<<" ";

}

void digit(int n)
{
    int rem;
    if(n==0)
    return;

    rem=n%10;
    n=n/10;
    digit(n);
    print(rem);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    
    digit(t);
    return 0;
}
