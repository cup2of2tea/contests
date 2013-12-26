#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int k,d;
    cin>>k>>d;
    if(d==0)
    {
        if(k!=1){cout<<"No solution"; return 0;}
    }
    cout<<d<<(k>1?string(k-1,'0'):"");
    return 0;
}
