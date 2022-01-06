//given N strings, print unique strings in lexiographical order with their frequency

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    map<string,int>m;
    
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        
        m[s]=m[s]+1;
    }
    
    for(auto pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<"\n";
    }
    
    return 0;
}
