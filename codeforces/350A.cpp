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
    #define cin in
    ifstream in("input.txt");
#endif // ONLINE_JUDGE
    int N1,N2;
    cin>>N1>>N2;
    vector<int> v1(N1),v2(N2);
    for(int c=0;c<N1;c++) cin>>v1[c];
    sort(v1.begin(),v1.end());
    for(int c=0;c<N2;c++) cin>>v2[c];
    sort(v2.begin(),v2.end());
    if(v1[0]*2>=v2[0]||v1.back()>=v2[0])
    {
        cout<<-1;
        return 0;
    }
    cout<<max(v1.back(),v1[0]*2);
}

