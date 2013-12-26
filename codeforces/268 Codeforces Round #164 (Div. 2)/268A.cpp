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
#include <list>
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



int main(int argc,char **argv)
{
#ifdef LOCAL
    ifstream in("input.txt");
    ofstream out("output.txt");
#endif
    int n;
    cin>>n;
    vector<pair<int,int> > v(n);
    for(int c=0;c<n;c++)
        cin>>v[c].first>>v[c].second;
    int res=0;
    for(int c=0;c<n;c++)
        for(int c2=c+1;c2<n;c2++)
        {
            if(v[c].first==v[c2].second)
                res++;
            if(v[c2].first==v[c].second)
                res++;
        }
    cout<<res;
}

