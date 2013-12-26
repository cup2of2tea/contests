#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum1=0,sum2=0;
    bool lol=false;
    for(int c=0;c<n;c++)
    {
        int x,y;
        cin>>x>>y;
        sum1+=x;
        sum2+=y;
        if(x%2!=y%2)    lol=true;
    }
    if(sum1%2==0&&sum2%2==0)
    {
        cout<<0;
    }
    else if(lol && sum1%2==1 && sum2%2==1)
    {
        cout<<1;
    }
    else cout<<-1;
        
}
