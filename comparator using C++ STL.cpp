//comparator using c++ stl

#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(pair<int,int> a,pair<int,int> b)
{
    if(a.first!=b.first)
        return a.first<b.first;
    
        return a.second>b.second;
}
 
int main()
{
    int n;
    cin>>n;
    
    vector<pair<int,int>> p(n);
    
    for(int i=0;i<n;i++)
    cin>>p[i].first>>p[i].second;
    
    sort(p.begin(),p.end(),should_i_swap);
    
    for(int i=0;i<n;i++)
    cout<<p[i].first<<" "<<p[i].second<<"\n";
  
  return 0;
}    
