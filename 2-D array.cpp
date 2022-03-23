#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    
    int arr[r][c];
    
    for(int rc=0;rc<r;rc++)
    {
        for(int cc=0;cc<c;cc++)
        {
            cin>>arr[rc][cc];
        }
    }
    
    for(int rc=0;rc<r;rc++)
    {
        for(int cc=0;cc<c;cc++)
        {
            cout<<arr[rc][cc];
        }
        cout<<"\n";
    }
}
