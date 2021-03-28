#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;

void swap (int *x,int *y);

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


    int a,b,c,n,l;
    a=4;
    b=2;
    c=c+a;

    int j=1;

    for(int k=1;k<=n;k++)
    {
        cout<<setw(4)<<j;
        int d=d+pow(k,2);
        cout<<"the value of l in the "<<k<<"ith iteration is "<<l<<endl;
    }

    double p;
    p=sqrt(c);
    cout<<p<<endl;

    cout<<"square root of "<<c<<" is "<<p<<endl;

    int x=5,y=10;

    cout<<"before swap x: "<<x<<"y: "<<y<<endl;
    swap(&x,&y);
    cout<<"Main after swap x: "<<x<<"y: "<<y<<endl;
    return 0;
}


void swap (int *px,int *py)
{
    int temp;
    cout<<"swap before swap *px: "<<*px<<"*py: "<<*py<<endl;
    temp=*px;
    *px=*py;
    *py=temp;

    cout<<"swap after swap *px"<<*px<<"*py "<<*py<<endl;


}