#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.second<p2.second;
}

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,start,end,i,j,count=1;
        cin>>n;
        vector<pair<int,int >>v(n);
        
        
        for(i=0;i<n;i++)
        {
            cin>>start>>end;
            v[i]=make_pair(start,end);
        }

        sort(v.begin(),v.end(),compare);

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(v[i].second<=v[j].first)
                {
                    count++;
                    i=j-1;
                    break;
                }
            }
        }
        cout<<count;

    }
    return 0;
}