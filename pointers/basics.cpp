#include<iostream>

using namespace std;
void swap(int *a,int *b);

void swap(int a,int b);

int main()
{
    //BASIC

    /*int x;
    cin>>x;
    cout<<&x<<endl;

    float y;
    cin>>y;
    cout<<&y<<endl;

    //&OPERATOR DOES NOT WORK WITH CHAR

    char ch;
    cin>>ch;
    cout<<(void*)&ch<<endl;

    double a[10];
    int i;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        cout<<&a[i];
    }            

    //SIZE OF POINTER IS ALWAY 8 OR 4 WHEATHER IT IS CHAR TYPE INT TYPE OT FLOAT TYPE   

    int *c,*d,a,b;
    c=&a;
    d=&b;
    
    cout<<c<<endl<<d;

    int *cptr;
    int  ch;
    cin>>ch;
    cptr=&ch;

    cout<<sizeof(cptr);

    //DEREFERNCE OPERATOR

    int x=10;

    int *xptr=&x;

    int **xxptr=&xptr;

    cout<<&x<<endl;
    cout<<*xptr<<endl;

    cout<<**xxptr;

    //SWAPPING CALL BY REFERNCE 

    int a=10,b=20;

    swap(&a,&b);

    cout<<"Value of first in main: "<<a<<endl;
    cout<<"Value of second in main : "<<b<<endl;*/

    //SWAPPING CALL BY VALUE

    int a=10,b=20;

    swap(a,b);

    cout<<"Value of first in main: "<<a<<endl;
    cout<<"Value of second in main : "<<b<<endl;



    return 0;

}

//  void swap(int *a,int *b)
//     {
//         int temp;
//         temp=*a;
//         *a=*b;
//         *b=temp;

//         cout<<"Value of first in swap: "<<*a<<endl;
//         cout<<"Value of second in swap: "<<*b<<endl;
//     }


// void swap(int a,int b)
// {
//      int temp;
//         temp=a;
//         a=b;
//         b=temp;

//         cout<<"Value of first in swap: "<<a<<endl;
//         cout<<"Value of second in swap: "<<b<<endl;
// }


