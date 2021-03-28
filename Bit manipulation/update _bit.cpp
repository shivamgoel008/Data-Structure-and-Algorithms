//it has 2 parameters number ,value(0 OR 1) and ith position
//it changes the number ith bit with value

#include<iostream>
using namespace std;

int clearbit(int n,int i)
{
    int mask=~(1<<i);
    return (n&mask);
}

int main ()
{
    int n,value,i;
    cin>>n>>value>>i;

    int no=clearbit(n,i);
    int mask=(value<<i);
    cout<<(no|mask);
     return 0;
}