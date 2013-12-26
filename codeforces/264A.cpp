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
    string s;
    cin>>s;
    vector<int> v(s.size());

    int beg=0;
    int end=s.size()-1;
    for(int c=0;c<s.size();c++)
        if(s[c]=='l')
        {
            v[end]=c+1;
            end--;
        }
        else
        {
            v[beg]=c+1;
            beg++;
        }
    for(int c=0;c<v.size();c++)
        cout<<v[c]<<endl;
}

