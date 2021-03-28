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
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // test()
    {
        ll day1,vac1,day2,vac2,p,answer=0;
        cin>>day1>>vac1>>day2>>vac2>>p;

        if(day1==day2){
            answer+=day1-1;
            if(p%(vac1+vac2)==0)
            answer+=p/(vac1+vac2);

            else {
                // cout<<"YES";
                answer+=p/(vac1+vac2)+1;
            }
        }
        else if(day1>day2)
        {
            answer+=day2-1;
            ll cnt=0;
            while(p>0){
                p=p-vac2;
                answer++;
                cnt++;
                if(cnt==abs(day2-day1))
                break;
            }
            if(p>0){
                if(p%(vac1+vac2)==0)
                answer+=p/(vac1+vac2);

                else 
                answer+=p/(vac1+vac2)+1;
            }
        }
        else if(day2>day1)
        {
            answer+=day1-1;
            ll cnt=0;
            while(p>0){
                p=p-vac1;
                answer++;
                cnt++;
                if(cnt==abs(day2-day1))
                break;
            }
            if(p>0){
                if(p%(vac1+vac2)==0)
                answer+=p/(vac1+vac2);

                else 
                answer+=p/(vac1+vac2)+1;
            }
        }
        cout<<answer<<endl;
        
    }
    return 0;
}