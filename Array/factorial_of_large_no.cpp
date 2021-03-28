#include<iostream>
#include<algorithm>

using namespace std;

int main ()
{
    int n,carry,product,i,j,res_no,res[10000];
    cin>>n;
    res[0]=1;
    res_no=1;
    carry=0;

    for(i=2;i<=n;i++)
    {
        for(j=0;j<res_no;j++)
        {
            product=res[j]*i+carry;
            res[j]=product%10;
            carry=product/10;
        }

        while(carry>0)
        {
            res[res_no]=carry%10;
            carry=carry/10;
            res_no++;
        }
    }


    for(i=res_no-1;i>=0;i--)
    {
        cout<<res[i];
    }

    return 0;
}