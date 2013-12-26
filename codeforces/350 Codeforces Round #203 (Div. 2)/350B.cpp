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





int main()
{
#ifndef ONLINE_JUDGE
    #define cin in
    ifstream in("input.txt");
#endif // ONLINE_JUDGE
    int N;
    cin>>N;
    vector<int> hotel;
    vector<int> type(N);
    for(int c=0;c<N;c++)
    {

        cin>>type[c];
        if(type[c]==1)
        {
            hotel.push_back(c);
        }
    }
    vector<int> transition(N);
    map<int,int> m;
    for(int c=0;c<N;c++)
    {
        cin>>transition[c];
        transition[c]--;
        m[transition[c]]++;
    }
    int indice_maxi;
    int maxi=0;
    for(int c=0;c<hotel.size();c++)
    {
        int sum=1;
        int act=hotel[c];
        while(transition[act]!=-1&&m[transition[act]]==1)
        {
            sum++;
            act=transition[act];
        }
        if(maxi<sum)
        {
            maxi=sum;
            indice_maxi=hotel[c];
        }
    }
    vector<int> res(maxi);
    cout<<maxi<<endl;
    for(int c=maxi-1;c>=0;c--)
    {
        res[c]=indice_maxi;
        indice_maxi=transition[indice_maxi];
    }
    for(int c=0;c<res.size();c++)
    {
        cout<<res[c]+1<<" ";
    }
}

