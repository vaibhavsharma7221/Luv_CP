#include<iostream>
#include<vector>

using namespace std;

void printvec(vector<int> &v)
{
    v.push_back(9);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}


int main()
{
    vector<int> v(7,1);
    
    v.push_back(7);
    
    printvec(v);
    
    cout<<"\n";
    
    v.pop_back();
    v.pop_back();
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
