//Range based Loops
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,3,4,5,6};
    
    vector<int>::iterator it;
    
    cout<<"Printing vector via iterator :";
    for(it=v.begin();it!=v.end();it++)
        cout<<(*it)<<" ";
        
    cout<<endl;
    
    cout<<"Printing vector via range based loop :";
    for(int value:v)
    cout<<value<<" ";
    
    cout<<endl;
    
    cout<<"doing value++ without refernce operator in 1st loop and then printing in in the 2nd loop :";
    for(int value:v)
    value++;
    
    for(int value:v)
    cout<<value<<" ";
    
    cout<<endl;
    
     cout<<"doing value++ with refernce operator in 1st loop and then printing in in the 2nd loop :";
    for(int &value:v)
    value++;
    
    for(int value:v)
    cout<<value<<" ";
    
    cout<<endl;
    
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    
    cout<<"printing vector of pairs via range based loops :";
    for(pair<int,int>val:v_p)
    cout<<val.first<<" "<<val.second<<"\n";
  
  return 0;
}
