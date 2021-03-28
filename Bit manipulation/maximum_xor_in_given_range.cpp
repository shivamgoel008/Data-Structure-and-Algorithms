#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int l,r,count=0,number=0,limitxor,i;
    cin>>l>>r;

    limitxor=l^r;

    while(limitxor>0)
    {
        count++;
        limitxor>>=1;
    }
    number=(pow(2,count)-1);

    cout<<number;
    return 0;

}