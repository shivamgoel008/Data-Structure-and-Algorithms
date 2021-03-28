#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[100],b[100];
    int n,i,largest;
    cout<<"Enter no of strings: ";
    cin>>n;

    cin.get();//when we press enter the cin.getline reads \n as its first string so cin.get() reads \n here;

    cout<<"Enter string: ";

    for(i=0;i<n;i++)
    {
        cin.getline(a,100);
        strlen(a);
        strlen(b);

        if(strlen(a)>strlen(b))
        {
            strcpy(b,a);
            largest=strlen(a);
        }
    }

    cout<<b<<" "<<largest;

}