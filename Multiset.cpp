#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for(auto val:s)
    {
        cout<<val<<"\n";
    }
}

int main()
{
    multiset<string> s;
    
    s.insert("abc");
    s.insert("bcd");
    s.insert("cde");
    s.insert("abc");
    
    print(s);
    
    auto it=s.find("abc");
    
    if(it!=s.end())
    s.erase(it);
    
    cout<<"\n";
    print(s);
    
    s.erase("abc");
    
    cout<<"\n";
    print(s);
    
    return 0;
}
