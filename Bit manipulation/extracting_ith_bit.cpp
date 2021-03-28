#include<iostream>
using namespace std;

int main ()
{
    int n,i;
    cin>>n>>i;

    int mask=1<<i;

    int t=(n&mask)>0?1:0;
    cout<<t;
    

    return 0;
}