//in clear bit if the bit is 0 it remains 0 and if it is 1 it changes to 0;

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,i;
    cin>>n>>i;

    int mask=~(1<<i);

    cout<<(n&mask);

}