#include<iostream>
#include<climits>

using namespace std;

int main ()
{
    int n,max=INT_MIN,i,j,k,left,right;
    cin>>n;

    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            int sum=0;
            for(k=i;k<=j;k++)
            {
                sum=sum+a[k];
            }

            if(sum>max)
            {
                max=sum;
                left=i;
                right=j;
            }
        }
    }
    for(i=left;i<=right;i++)
    cout<<a[i]<<" ";

    cout<<endl<<max;

}