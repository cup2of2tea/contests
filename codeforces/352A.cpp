#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int nb_5=0,nb_0=0;
    for(int c=0;c<n;c++)
    {
        int z=0;
        cin>>z;
        if(z>0) nb_5++;
        else nb_0++;
    }
    if(nb_0==0)
    {
        cout<<-1;
        return 0;
    }
    int maxi=-1;
    int act=0;
    for(int c=0;c<nb_5;c++)
    {
        act*=10;
        act+=5;
        act%=9; 
        if(act==0)
        {
            maxi=c;
        }   
    }
    if(maxi==-1)
    {
        cout<<0;
        return 0;
    }
    for(int c=0;c<=maxi;c++)
        cout<<5;
    for(int c=0;c<nb_0;c++)
        cout<<0;
}
