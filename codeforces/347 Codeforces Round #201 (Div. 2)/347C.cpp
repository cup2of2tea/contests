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



long long pgcd(long long a,long long b)
{
    return a!=0?pgcd(b%a,a):b;
}

int main()
{
#ifndef ONLINE_JUDGE
    #define cin in
    ifstream in("input.txt");
#endif // ONLINE_JUDGE
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int c=0;c<n;c++)
    {
        cin>>v[c];
    }
    sort(v.begin(),v.end());
    long long den=v[0];
    for(int c=1;c<v.size();c++)
    {
        den=pgcd(den,v[c]);
    }
    cout<<((v.back()/den-n)%2==1?"Alice":"Bob");
}

