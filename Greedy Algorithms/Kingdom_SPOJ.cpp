#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(t)
    {
        ll width,height,number,i;
        cin>>width>>height>>number;
        if(number==0){
            cout<<width*height<<endl;
            continue;
        }
        ll x[number],y[number];
 
        for(i=0;i<number;i++)
        cin>>x[i]>>y[i];
 
        sort(x,x+number);
        sort(y,y+number);
 
        ll dx=x[0]-1;
        ll dy=y[0]-1;
 
        for(i=1;i<number;i++)
        {
            dx=max(dx,x[i]-x[i-1]-1);
            dy=max(dy,y[i]-y[i-1]-1);
        }
        dx = max(dx,width-x[number-1]);
        dy = max(dy,height-y[number-1]);

        cout<<dx*dy<<endl;
    }
    return 0;
} 