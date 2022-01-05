// Maps STL

#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
  /*map<int,string>::iterator it;
    
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<"\n";
    }*/
    
    cout<<m.size()<<"\n";
    
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<"\n";
    }  
}


int main()
{
    map<int,string> m;
    
    m[1]="abc";
    m[5]="bcd";
    m[3]="xyz";
    
    m.insert({2,"ghj"});
    
    m.insert(make_pair(4,"dfg"));
    
    m[5]="abc";
    print(m);
    
    cout<<"\n";
    
    auto it=m.find(3);
    cout<<it->first<<" "<<it->second<<"\n\n";
    
    m.erase(4);
    print(m);
    
    m.erase(it);
    print(m);
    
    
    m.clear();
    print(m);
    
    return 0;
}
