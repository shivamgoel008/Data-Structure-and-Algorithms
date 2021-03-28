//All number is occuring thrice except one we have to find that unique number

#include<iostream>
#include<math.h>

using namespace std;

int main ()
{
    int n,count[64]={0},ans=0,i,j,no,last_bit,k;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>no;
        k=0;
        while(no>0)
        {
            last_bit=(no&1);
            count[k]=count[k]+last_bit;
            k++;
            no=(no>>1);
        }
    }
    j=0;

    for(i=0;i<64;i++)
    {
        count[i]=count[i]%3;
        ans=ans+count[i]*pow(2,j);
        j++;
    }
    cout<<ans;
    
}