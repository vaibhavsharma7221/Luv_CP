//vector of pairs

#include<iostream>
#include<vector>

using namespace std;

void printvec(vector<pair<int,int>> &v)
{
    cout<<"\noutput :";
    for(int i=0;i<v.size();i++)
    cout<<v[i].first<<" "<<v[i].second<<"\n";
    
    cout<<"\n";
}

int main()
{
    vector<pair<int,int>>v;
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
     {
         int x,y;
         cin>>x>>y;
         
         v.push_back({x,y});
     }
    
    printvec(v);
    
    return 0;
}
