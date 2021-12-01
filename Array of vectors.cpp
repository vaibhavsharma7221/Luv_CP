//Array of vectors

#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout<<"\n";
}

int main()
{
    int nv;
    cin>>nv;
   
    vector<int> v[nv];
    
    for(int i=0;i<nv;i++)
    {
        int ni;
        cin>>ni;
        
        for(int j=0;j<ni;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }
    
    for(int i=0;i<nv;i++)
        printvec(v[i]);
   
 return 0;
}
