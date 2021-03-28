#include<iostream>

using namespace std;

int main ()
{
    long long int n,i=0,a[100]={0},j,p=1,ans=0;
    cin>>n;

    while(n>0)
    {
        j=(n&1);
        n=(n>>1);
        ans=ans+p*j;
        p=p*10;
    }
    cout<<ans;

    return 0;
}