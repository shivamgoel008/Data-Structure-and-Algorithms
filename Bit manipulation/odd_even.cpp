#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    if((n&1)==1)
    cout<<"ODD";

    if((n&1)==0)
    cout<<"EVEN";

    return 0;
}