
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
        ll n,k,i,right,left,max_peak,min_index,p;
        cin>>n>>k;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        bool peaks[n]={false};

        for(i=1;i<n-1;i++)
        {
            if(v[i]>v[i+1] and v[i]>v[i-1])
            peaks[i]=true;
        }

        max_peak=0;
        min_index=1;

        for(i=1;i<k-1;i++)
        {
            if(peaks[i]==true)
            max_peak++;

        }

        left=1;
        right=k-1;

        for(i=1;i<=(n-k);i++)
        {
            p=max_peak;
            if(peaks[left]==true)
            p--;

            if(peaks[right]==true)
            p++;

            right++;
            left++;

            if(p>max_peak)
            {
                max_peak=p;
                min_index=i+1;
            }
        }                                            
        cout<<max_peak+1<<" "<<min_index<<endl;
    }
    return 0;
}