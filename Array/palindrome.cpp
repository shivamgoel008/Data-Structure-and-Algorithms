#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
    char a[100];
    cout<<"Enter the string: ";
    cin.getline(a,1000);

    int n=strlen(a),i,j,flag=0;

    i=0;
    j=n-1;

    while(i<j)
    {
        if(a[i]!=a[j])
        {
            flag=1;
            break;
        }

        else 
        {
            i++;
            j--;
        }
    }

    if(flag==1)
    cout<<"NOT PALINDROME!";

    else 
    cout<<"PALINDROME";

}