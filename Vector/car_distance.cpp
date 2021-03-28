#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>

using namespace std;

bool compare(pair<int, int>p1,pair<int ,int>p2)
{
    int d1=p1.first*p1.first+p1.second*p1.second;
    int d2=p2.first*p2.first+p2.second*p2.second;
    if(d1==d2)
    return p1.first<p2.first;

    return d1<d2;
}

int main ()
{
    int n,i,x,y;
    cin>>n;

    vector<pair<int,int>> v(n);

    for(i=0;i<n;i++)
   {
       cin>>x>>y;
       v[i]=make_pair(x,y);
   }
    
    sort(v.begin(),v.end(),compare);
    cout<<endl;
     
     for(i=0;i<n;i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;
}