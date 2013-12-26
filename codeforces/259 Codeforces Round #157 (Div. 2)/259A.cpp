#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
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
#define COUT(s) cout<<"-----"<<s<<endl;
#endif
using namespace std;


int main()
{
    #ifdef LOCAL
        ifstream in("input.txt");
        ofstream out("output.txt");
    #endif
    for(int c=0;c<8;c++)
    {
        string s;
        cin>>s;
        int act=0;
        for(int c=0;c<s.size();c++)
            act+=(s[c]==s[(c+1)%s.size()]?1:0);
        if(act!=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}

