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

bool compare(ll a,ll b)
{
    return a<b;
}

#include <bitset>

int hammingDistance(const vector<int> &nums) {
    long long int sum=0,i,j,k;
        long long int n=nums.size();
        vector<int>bit(64,0);
        
        for(i=0;i<nums.size();i++){
            bitset<64>s1(nums[i]);
            // cout<<s1<<endl;
            int num=nums[i];
            k=0;
            while(num>0){
                if((num&1)==1){
                    bit[k]++;
                }
                num=(num>>1);
                k++;
            }
            // cout<<endl;
        }
        for(i=0;i<32;i++){
            {
                int b=bit[i];
                if(b==0 or b==n)
                    continue;
                else 
                    sum+=(b*abs(n-b))%1000000007;
            }
        }
        return (sum*2)%1000000007;
    
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

        vector<int>v(n);

        for(int i=0;i<n;i++)
        cin>>v[i];

        cout<<hammingDistance(v)<<endl;
    }
    return 0;
}