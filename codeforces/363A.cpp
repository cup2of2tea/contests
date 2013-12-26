#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;



int main()
{
#ifndef ONLINE_JUDGE
//    #define cin in
    ifstream in("input.txt");
#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"O-|-OOOO"<<endl;
    }
    while(n!=0)
    {
        int act=n%10;
        if(act>=5) cout<<"-O|";
        else cout<<"O-|";
        int c;
        for(c=0;c<act%5;c++) cout<<"O";
        cout<<"-";
        c++;
        for(;c<5;c++) cout<<"O";
        cout<<endl;
        n/=10;
    }
}

