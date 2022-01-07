//Unordered Maps

#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string> &m)
{
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<"\n";
    }
}

int main()
{
    unordered_map<int,string> m;
    
    m[1]="abc";//O(1)
    m[2]="bcd";
    m[3]="cde";
    m[4]="def";
    m[3]="efg";
    
    auto it = m.find(7);//O(1)
    
    if(it!=m.end())
        m.erase(it);//O(1)
    
    print(m);
    
    return 0;
}
