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
#endif
    string s;
    int n;
    cin>>n>>s;
    int res=0;
    for(int c=1;c<s.size();c++)
    {
        if(s[c]==s[c-1])
            res++;
    }
    cout<<res;
}

