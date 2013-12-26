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
    int n;
    cin>>n;
    vector<int> sum(n);
    for(int c=0;c<n;c++)
    {
        cin>>sum[c];
        if(c>0) sum[c]+=sum[c-1];
    }
    int res=0;
    for(int c=0;c<n;c++)
        for(int c2=c;c2<n;c2++)
        {
            int before=(c>0?sum[c-1]:0);
            int after=sum[n-1]-sum[c2];
            int mid=(c2-c+1-(sum[c2]-(c>0?sum[c-1]:0)));
            res=max(before+after+mid,res);
        }
    cout<<res;
}

