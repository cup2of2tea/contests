#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
using namespace std;


int main()
{
    int N;
    cin>>N;
    vector<int> v(N);
    int gauche=0,droite=0;
    for(int c=0;c<N;c++)
    {
        cin>>v[c];
        droite+=v[c];
    }
    int x,y;
    cin>>x>>y;
    for(int c=0;c<N;c++)
    {
        gauche+=v[c];
        droite-=v[c];
        if(gauche>=x&&gauche<=y&&droite>=x&&droite<=y)
        {
            cout<<c+2;
            return 0;
        }
    }
    cout<<0;
}

