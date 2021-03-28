#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i;
    cin>>n;

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }
            cout<<i<<" ";
        }

        
    }

    return 0;
}
