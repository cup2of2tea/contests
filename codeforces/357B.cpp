#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
using namespace std;


int main()
{
    int N,M;
    cin>>N>>M;
    vector<int> color(N,0);
    for(int c=0;c<M;c++)
    {
        vector<int> v(3);
        int mask=0;
        for(int c2=0;c2<3;c2++) {cin>>v[c2];v[c2]--;}
        for(int c2=0;c2<3;c2++)
        {
            if(color[v[c2]]!=0)
            {
                mask|=(1<<color[v[c2]]);
            }
        }
        for(int c2=0;c2<3;c2++)
        {
            if(color[v[c2]]==0)
            {
                for(int c3=1;c3<=3;c3++)
                {
                    if(!((1<<c3)&mask))
                    {
                        color[v[c2]]=c3;
                        break;
                    }
                }
            }
            mask|=(1<<color[v[c2]]);
        }

    }
    for(int c=0;c<color.size();c++) cout<<color[c]<<" ";
}

