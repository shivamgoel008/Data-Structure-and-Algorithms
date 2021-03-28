#include<iostream>
#include<math.h>

using namespace std;

int main ()
{
    int a,i,j,m;
    cin>>a>>m>>i>>j;

    int mask1=((~0)<<j+1);
    int mask2=pow(2,i)-1;

    int mask=(mask1|mask2);

    int n=(a&mask);

    int mmask=(m<<i);
    cout<<(n|mmask);

    return 0;
}