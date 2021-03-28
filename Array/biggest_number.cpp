#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>

using namespace std;

bool compare(int a,int b)
{
    string s1=to_string(a),s2=to_string(b);
    return s2+s1>s1+s2;

}


int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        cin>>n;

        int a[n];

        for(i=0;i<n;i++)
        cin>>a[i];

        sort(a,a+n,compare);

        for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    }
}