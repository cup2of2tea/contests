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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int c=0;c<n;c++)
        cin>>v[c];
    sort(v.begin(),v.end());
    if(n<k)
    {
        cout<<-1;
    }
    else
    {
        if(k==0)
            cout<<v.back()+1<<" "<<v.back()+1;
        else
            cout<<v[n-k]<<" "<<v[n-k];
    }
}

