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
    vector<bool> reserve(10,false);
    reserve[1]=true;
    reserve[6]=true;
    reserve[8]=true;
    reserve[9]=true;

   int zero = 0;
   int act = 0;
   for(int c=0;c<s.size();c++)
   {
       if(reserve[s[c]-'0'])
       {
           reserve[s[c]-'0']=false;
           continue;
       }
       if(s[c]=='0')
       {
           zero++;
           continue;
       }
       cout<<s[c];
       act*=10;
       act+=s[c]-'0';
       act%=7;
   }
   string s2 = "1689";
   do
   {
       int act2 = act;
       for(int c=0;c<s2.size();c++)
       {
           act2*=10;
           act2+=s2[c]-'0';
           act2%=7;
       }
       if(act2==0)
       {
           cout<<s2;
           break;
       }
   }while(next_permutation(s2.begin(),s2.end()));
    for(int c2=0;c2<zero;c2++) cout<<0;

}

