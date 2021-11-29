//pairs

#include<iostream>
using namespace std;

int main()
{
    pair<int,string> p;
    
    p={1,"Vaibhav"};
    
     pair<int,string>&p1=p;
     
     p1={2,"ks"};
    
    cout<<p.second<<"\n";
    cout<<p.first;
    
    
    pair<int,string> p3;
    
    p3=make_pair(3,"prabxs");
    
   cout<<p3.second;
   
   pair<string,int>p_arr[3];
   
   p_arr[0]=make_pair("kanchi",1);
   p_arr[1]={"vaibhav",2};
   p_arr[2]=make_pair("vaikan",3);
   
   swap(p_arr[1],p_arr[0]);
   
   for(int i=0;i<3;i++)
   {
       cout<<p_arr[i].first<<" "<<p_arr[i].second<<"\n";
   }
   
    return 0;
}
