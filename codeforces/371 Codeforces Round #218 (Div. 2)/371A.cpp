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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int c=0;c<n;c++) cin>>v[c];
    int res=0;
    for(int c=0;c<k;c++)
    {
        vector<int> compte(2,0);
        for(int c2=c;c2<n;c2+=k)
        {
            compte[v[c2]-1]++;
        }
        res+=(*min_element(compte.begin(),compte.end()));
    }
    cout<<res;
}


