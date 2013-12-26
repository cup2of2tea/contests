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
    int x,y;
    cin>>x>>y;
    int z=abs(x)+abs(y);
    cout<<(x<0?-z:0)<<" "<<(x<0?0:(y>0?z:-z))<<" "<<(x<0?0:z)<<" "<<(x<0?(y>0?z:-z):0);
}

