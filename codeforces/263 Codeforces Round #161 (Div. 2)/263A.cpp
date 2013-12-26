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
    for(int c=0;c<5;c++)
        for(int c2=0;c2<5;c2++)
        {
            int n;
            cin>>n;
            if(n==1)
            {
                cout<<abs(c-2)+abs(c2-2);
                return 0;
            }
        }
}

