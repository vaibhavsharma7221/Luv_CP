// Normal set

#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for(auto val : s)
    cout<<val<<"\n";
    
   /* cout<<"\n";
    
    for(auto it=s.begin();it!=s.end();it++)
    cout<<(*it)<<"\n"; */
}

int main()
{
    set<string> s;
    
    s.insert("abc");
    s.insert("bcd");
    s.insert("cde");
    s.insert("abc");
    
    print(s);
    
    auto it =s.find("abc");
    
    if(it!=s.end())
    cout<<"\n"<<(*it)<<"\n";
    
    auto itr=s.find("bcd");
    s.erase(itr);
    
    cout<<"\n";
    print(s);
    
    s.erase("cde");
    
    cout<<"\n";
    print(s);
    
    return 0;
}
