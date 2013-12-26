#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;


class comparaison
{
public:
    bool operator()(const pair<int,int> &p1,const pair<int,int> &p2)
    {
        return abs(p1.first)+abs(p1.second)>abs(p2.first)+abs(p2.second);
    }
};



int main()
{
#ifndef ONLINE_JUDGE
    #define cin in
    ifstream in("input.txt");
#endif // ONLINE_JUDGE
    int N;
    cin>>N;
    priority_queue<pair<int,int>,vector<pair<int,int> >,comparaison> pq;
    long long sum=0;
    for(int c=0;c<N;c++)
    {
        int x,y;
        cin>>x>>y;
        pq.push(make_pair(x,y));
        sum+=((x!=0?1:0)+(y!=0?1:0))*2;
        sum+=2;
    }
    cout<<sum<<endl;
    int z=0;
    for(int c=0;c<N;c++)
    {
        pair<int,int> act=pq.top();
        swap(act.first,act.second);
        pq.pop();
        for(int c=0;c<2;c++)
        {
            if(act.first>0)
            {
                cout<<"1 "<<act.first<<" U"<<endl;
            }
            if(act.first<0)
            {
                cout<<"1 "<<abs(act.first)<<" D"<<endl;
            }
            if(act.second>0)
            {
                cout<<"1 "<<abs(act.second)<<" R"<<endl;
            }
            if(act.second<0)
            {
                cout<<"1 "<<abs(act.second)<<" L"<<endl;
            }
            cout<<c+2<<endl;
            act.first=-act.first;
            act.second=-act.second;
        }
    }
}

