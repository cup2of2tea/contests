#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <istream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>
#include <cstdio>
#include <set>
#include <stack>
#include <ctime>
#include <climits>
#include <iterator>
#define LOCAL
#ifdef ONLINE_JUDGE
#define COUT(s)
#undef LOCAL
#endif
#ifdef LOCAL
#define cin in
#define COUT(s) cout<<"-----"<<s<<"-----"<<endl;
#endif
using namespace std;

// m appareils
// k prises origines
// n multi
// ai nombres prises


int main()
{
    #ifdef LOCAL
        ifstream in("input.txt");
        ofstream out("output.txt");
    #endif
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(n);
    for(int c=0;c<v.size();c++)
        cin>>v[c];
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int act=k;
    int i=0;
    while(act<m&&i<v.size())
    {
        act--;
        act+=v[i++];
    }
    cout<<(act<m?-1:i);
}

