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
    int n;
    cin>>n;
    vector<string> v(4);
    for(int c=0;c<v.size();c++) cin>>v[c];
    vector<int> count(10,0);
    for(int c=0;c<v.size();c++) for(int c2=0;c2<v.size();c2++)
    {
        if(v[c][c2]>='0'&&v[c][c2]<='9')
        {
            count[v[c][c2]-'0']++;
            if(count[v[c][c2]-'0']>2*n)
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}

