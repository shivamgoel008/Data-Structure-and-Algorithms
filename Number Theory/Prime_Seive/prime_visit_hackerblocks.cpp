#include <bits/stdc++.h>
using namespace std;

void prime_seive(int *p)
{
    int i,j;

    p[1]=p[0]=0;
    p[2]=1;

    for(i=3;i<=100000;i=i+2)
    p[i]=1;

    for(i=3;i*i<=100000;i=i+2)
    {
        if(p[i]==1)
        {
            for(j=i*i;j<=100000;j=j+i)
            p[j]=0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i;

    int p[100001]={0};
    int csum[100001]={0};

    prime_seive(p);


    for(i=0;i<100000;i++)
    {
        csum[i]=csum[i-1]+p[i];
    }

   
    int q;
    cin>>q;

    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<csum[b]-csum[a-1];
    }
    return 0;
}
