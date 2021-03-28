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
        limitxor=limitxor>>1;
    }

    for(i=0;i<count;i++)
    {
        number=number+pow(2,i);

    }
    cout<<number;
    return 0;
    
}