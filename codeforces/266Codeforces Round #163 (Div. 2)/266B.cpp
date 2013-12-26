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
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int c=0;c<t;c++)
    {
        string s2=s;
        for(int c2=0;c2<s.size()-1;c2++)
        {
            if(s[c2]=='B'&&s[c2+1]=='G')
            {
                s2[c2]='G';
                s2[c2+1]='B';
                c2++;
            }
            else
                s2[c2]=s[c2];
        }
        s=s2;
    }
    cout<<s;
}

