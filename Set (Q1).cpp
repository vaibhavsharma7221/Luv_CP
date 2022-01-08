#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        
        s.insert(str);
    }
    
    cout<<"\n"<<s.size()<<"\n";
    
    cout<<"\n";
    
    for(auto val : s)
    cout<<val<<"\n";
    
    return 0;
}

