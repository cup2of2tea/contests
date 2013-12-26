#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int taille;
    cin>>taille;
    vector<int> v(taille);
    set<int> p;
    for(int c=0;c<v.size();c++)
        cin>>v[c],p.insert(c+1);
    int act=0;
    int beg=0;
    for(int c=1;c<v.size();c++)
    {
        if(v[c]<v[c-1])
            beg=c;  
    }
        
    cout<<beg;
}
