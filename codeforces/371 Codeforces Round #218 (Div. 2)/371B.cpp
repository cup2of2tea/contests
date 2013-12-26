#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <iterator>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    #define cin in
    ifstream in("input.txt");
#endif // ONLINE_JUDGE
    int a,b;
    cin>>a>>b;
    queue<pair<pair<int,int>,int> > bfs;
    bfs.push(make_pair(make_pair(a,b),0));
    map<pair<int,int>,bool> visites;
    while(bfs.size()>0)
    {
        pair<int,int> p = bfs.front().first;
        int cost = bfs.front().second;
        bfs.pop();
        if(p.first==p.second)
        {
            cout<<cost<<endl;
            return 0;
        }
        pair<int,int> p2;
        int dx[3]={2,3,5};
        for(int c2=0;c2<2;c2++)
        {
            for(int c3=0;c3<3;c3++)
            {
                if(p.first%dx[c3]==0)
                {
                    p2.first=p.first/dx[c3];
                    p2.second=p.second;
                    if(!visites[p2])
                    {
                        visites[p2]=true;
                        bfs.push(make_pair(p2,cost+1));

                    }
                }
            }
            swap(p.first,p.second);
        }

    }
    cout<<-1<<endl;
}


