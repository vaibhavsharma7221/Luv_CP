//auto keyword

#include<bits/stdc++.h>
using namespace std;

int main()
{
    auto i=1.2;
    cout<<i;
    
    vector<int> v={2,3,4,5,6};
    
    cout<<"\n";
    for(auto p=v.begin();p!=v.end();p++)
    cout<<(*p)<<" ";
    
    cout<<endl;
    
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    for(auto i=v_p.begin();i!=v_p.end();i++)
    cout<<i->first<<" "<<i->second<<"\n";
    
    return 0;
}
