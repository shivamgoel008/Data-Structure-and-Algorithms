#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,count=0,i;
    cin>>n;

    //First method 
   /* while(n>0)
    {
        if((n&1)>0)
        count++;
        n=(n>>1);
    }*/

    //Second method (Faster one)
    /*while(n>0)
    {
        n=n&(n-1);
        count++;
    }*/

    // Third method (Fastest method) that is inbuilt fuction 

    cout<<__builtin_popcount(n);

}