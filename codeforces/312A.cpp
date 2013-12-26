#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <istream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <map>
#include <list>
#include <cstdio>
#include <set>
#include <iomanip>
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
    int nb_sentences;
    cin>>nb_sentences;
    cin.ignore();
    for(int c=0;c<nb_sentences;c++)
    {
        string s;
        getline(cin,s);
        if(s.size()<5||((s.substr(0,5)=="miao.")==(s.substr(s.size()-5,5)=="lala.")))
        {
            cout<<"OMG>.< I don't know!"<<endl;
        }
        else if(s.substr(0,5)=="miao.")
        {
            cout<<"Rainbow's"<<endl;
        }
        else
        {
            cout<<"Freda's"<<endl;
        }
    }
}

