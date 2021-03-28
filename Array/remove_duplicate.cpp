#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100],i,j,l,curr,prev;
    cout<<"Enter string: ";
    cin.getline(a,100);
    l=strlen(a);

    prev=0;
    for(int curr=1;i<l;curr++)
    {
        if(a[prev]!=a[curr])
        {
            prev++;
            a[prev]=a[curr];
        }
        
    }
    a[prev+1]='\0';
    cout<<"Updated String: ";
    cout<<a;

}