//vector of vector

#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout<<"size :"<<v.size()<<"\n";
    
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout<<"\n";
}


int main()
{
    vector<vector<int>>v;
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        
        vector<int> temp;
        
        for(int i=0;i<s;i++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    
    v.push_back(vector<int>());
    
    for(int i=0;i<v.size();i++)
       printVec(v[i]);
       
    return 0;   
    
    
}
