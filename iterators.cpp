//iterators-pointers like structres in c++

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,3,5,6,7};
    
    cout<<"Displaying vector via for loop :"; 
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
     
    vector<int>::iterator it;
    
    cout<<"\nDisplaying vector via iterator :";
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
        
    vector<pair<int,int>>v_p={{1,2},{3,4},{5,6}};
    
    vector<pair<int,int>>::iterator i;
    
    cout<<"\nDisplaying vector of pairs via iterator method 1 :";
    for(i=v_p.begin();i!=v_p.end();i++)
    cout<<(*i).first<<" "<<(*i).second<<"\n";
    
    cout<<"\nDisplaying vector of pairs via iterator method 2 :";
    for(i=v_p.begin();i!=v_p.end();i++)
    cout<<i->first<<" "<<i->second<<"\n";
    
    return 0;
}
