#include<iostream>
#include<algorithm>

using namespace std;

int main ()
{
    int n,key,a[]={10,20,30,40,40,40,50,60,60,60,60,70};
    cin>>key;
    n=sizeof(a)/sizeof(int);
    bool present= binary_search(a,a+n,key);
    if(present)
    cout<<"PRESENT"<<endl;

    else 
    cout<<"Absent"<<endl;

    auto lb=lower_bound(a,a+n,key);
    cout<<lb-&a[0]<<endl;

    auto ub=upper_bound(a,a+n,key);
    cout<<ub-&a[0]<<endl;

    cout<<"occurance of element is: "<<ub-lb<<endl;
    

    for(auto it=lb;it!=ub;it++)
    cout<<*it<<" ";
}