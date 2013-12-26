#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <iterator>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    #define cin in
    ifstream in("input.txt");
#endif // ONLINE_JUDGE
    string s;
    cin>>s;
    vector<int> compte(26,0);
    for(int c=0;c<s.size();c++) compte[s[c]-'a']++;
    int z=0;
    for(int c=0;c<26;c++)
    {
        z+=(compte[c]%2);
    }
    if(z==0||z&1)
    {
        cout<<"First";
    }
    else cout<<"Second"<<endl;
}


