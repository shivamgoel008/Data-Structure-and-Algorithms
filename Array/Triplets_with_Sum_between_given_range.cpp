#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(float a,float b)
{
    return a<b;
}

int solve(vector<string> &A) {
    vector<float>v;

    unordered_map<float,bool>m;

    for(auto i:A)
    {
        float num=stof(i);
        v.push_back(num);
    }

    sort(v.begin(),v.end(),compare);
    int first=0;
    int last=A.size()-1;

    // for(auto i:v)
    // cout<<i<<" ";
    // cout<<endl;
        while(first<last-1)
        {
            {
            if(v[first+1]+v[first]+v[last]<2 and v[first+1]+v[first]+v[last]>1)
            {
                cout<<v[first+1]<<" "<<v[first]<<" "<<v[last]<<endl;
                return 1;
            }

            else if(v[first+1]+v[first]+v[last]<=1)
            first++;


            else if(v[first+1]+v[first]+v[last]>=2)
            last--;
            }
        }
    
    

    return 0;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // test()
    {

        int n;
        cin>>n;

        vector<string>v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        cout<<solve(v);
        
    }
    return 0;
}