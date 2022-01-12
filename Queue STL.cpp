//Queue STL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    
    
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        
        q.pop();
    }
    return 0;
}
