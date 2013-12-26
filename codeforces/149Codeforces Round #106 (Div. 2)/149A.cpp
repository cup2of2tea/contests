#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
bool comp(const int &a,const int &b){ return a>b;}
int main()
{
 
     vector<int> v(12);
     int k;
     cin>>k;
     for(int c=0;c<12;c++)
         cin>>v[c];
     sort(v.begin(),v.end(),comp);
     int act=0;
     int c;
     for(c=0;c<v.size();c++){
          if(act>=k) break; act+=v[c];}
     if(act<k) cout<<-1;
     else cout<<c;
}
