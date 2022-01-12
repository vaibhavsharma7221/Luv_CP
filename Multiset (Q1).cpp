#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>> k;
        
        multiset<long long> s;

        for(int i=0;i<n;i++)
        {
            long long cc;
            cin>>cc;
            
            s.insert(cc);
        }
        
        long long cce=0;
        
        while(k--)
        {
            auto it = --s.end();
            long long val= (*it);
            cce += val;
            
            s.erase(it);
            
            s.insert(val/2);
        }
        cout<<cce<<"\n";
    }
    return 0;
}

