//in this problem every number is occuring twice and two numbers are occuring once we have to find that number

#include<iostream>
#include<algorithm>

using namespace std;

int main ()
{
    int n,i,res=0,temp,mask,x,y;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        res=res^a[i];
    }
    int pos=0;

    temp=res;

    while(1)
    {
        if((temp&1)==1)
        {
            break;
        }
        temp=temp>>1;
        pos++;
    }

    mask=(1<<pos);

    for(i=0;i<n;i++)
    {
        if((a[i]&mask)>0)
        x=x^a[i];
    }

    y=res^x;

    cout<<min(x,y)<<" "<<max(x,y);

    return 0;

}