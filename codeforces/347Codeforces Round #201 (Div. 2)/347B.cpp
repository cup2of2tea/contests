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
    int res=0;
    int max_swap=0;
    for(int c=0;c<v.size();c++)
    {
        if(c==v[c]) res++;
        else if(v[v[c]]==c) max_swap=2;
        else max_swap=max(max_swap,1);
    }
    cout<<res+max_swap;
}

