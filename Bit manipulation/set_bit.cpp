
//in set bit if 5=00101 and i=1 output=0 and if i=2 output=1..... if it is 1 it remains 1 and if 0 it changes to 0

#include<iostream>
using namespace std;

int main ()
{
    int n,i,ans;
    cin>>n>>i;

    int mask=1<<i;

    ans=(n|mask);

    cout<<ans;
    return 0;
}