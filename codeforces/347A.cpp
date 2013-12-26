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
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int c=0;c<n;c++) cin>>v[c];
    sort(v.begin(),v.end());
    cout<<v.back()<<" ";
    for(int c=1;c+1<v.size();c++)
        cout<<v[c]<<" ";
    cout<<v[0];
}

