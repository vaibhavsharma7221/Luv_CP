#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<string,int> &m)
{
    cout<<"\n"<<m.size()<<"\n";
    for(auto &pr :m)
    {
        cout<<pr.first<<" "<<pr.second<<"\n";
    }
}

int main()
{
    unordered_map<string,int> m;
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        
        m[s]=m[s]+1;
    }
    
    print(m);
    
    return 0;
}
