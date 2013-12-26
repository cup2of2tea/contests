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
    int n,m;
    cin>>n>>m;
    vector<string > v(n);
    for(int c=0;c<n;c++) cin>>v[c];
    vector<vector<int> > affilee(m,vector<int>(n,0));
    for(int c=0;c<n;c++)
    {
        int act = 0;
        for(int c2=0;c2<m;c2++)
        {
            if(v[c][c2]=='1')
            {
                act++;
            }
            else act = 0;
            affilee[c2][c]=act;
        }
    }
    for(int c=0;c<m;c++) sort(affilee[c].rbegin(),affilee[c].rend());
    int best = 0;
    for(int c=0;c<m;c++)
    {
        int maxi = -1;
        for(int c2=0;c2<n;c2++)
        {
            best = max(affilee[c][c2]*(c2+1),best);
        }
    }
    cout<<best;

}

