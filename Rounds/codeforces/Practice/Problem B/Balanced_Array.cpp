
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test()
    {
        ll n,element,cnt1,cnt2,i,last;
        cin>>n;

        element=n/2;
        
        if((n/2)%2!=0)
        cout<<"NO"<<endl;

        else if((n/2)%2==0)
        {
            cout<<"YES"<<endl;

            cnt1=0;
            for(i=2;;i+=2)
            {
                cout<<i<<" ";
                cnt1++;
                if(cnt1==n/2)
                break;
            }

            cnt2=0;
            for(i=1;;i+=2)
            {
                cout<<i<<" ";
                cnt2++;
                if(cnt2==(((n/2)-1)))
                break;
            }

            last=element*(element+1)-((element-1)*(element-1));
            cout<<last<<" ";
            cout<<endl;
        }
    }
    return 0;
}