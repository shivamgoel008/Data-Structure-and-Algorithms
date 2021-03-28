#include<iostream>
using namespace std;

int main()
{
    int a,range;
    cin>>a>>range;
    int mask=((~0)<<range);
    cout<<(a&mask);
    return 0;
}