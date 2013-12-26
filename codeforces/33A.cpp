#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <map>
#include <cstdio>
#include <set>


#ifdef LOCAL
#define cin in
#endif
#define FOREACH(i, n) for (typeof(n.begin()) i = n.begin(); i != n.end(); ++i)
#define MEMSET(p, c) memset(p, c, sizeof(p))

using namespace std;

template < class T,class T2 >
T2 fac(T n)
{
    return n<2?1:fac<T,T2>(n-1)*n;
}

template <class T>
T nb_combinaisons(T k,T n)
{
    if(n<k)
        return nb_combinaisons<T>(n,k);
    return fac<T,long long int>(n)/(fac<T,long long int>(n-k)*fac<T,long long int>(k));
}

string itoa_2(long long int n)
{
    string s;
    stringstream ss;
    ss<<n;
    ss>>s;
    while(s.size()!=9)
        s='0'+s;
    return s;
}

int pgcd (int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    return pgcd(b,a%b);
}


inline float dist(int x1, int y1, int x2, int y2)
{
        return sqrt(double(x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
bool aprox(float a, float b)
{
        if(abs(a - b) <= 0.01f)
                return 1;
        return 0;
}



int main()
{
#ifdef LOCAL
    ifstream in("input.txt");
#endif
    int mini[1001];
    int n,m,k;
    cin>>n>>m>>k;
    for(int c=1;c<=n;c++)
        mini[c]=10000000;
    for(int c=0;c<n;c++)
    {
        int a,b;
        cin>>a>>b;
        mini[a]=min(mini[a],b);
    }
    int tot=0;
    for(int c=1;c<=n;c++)
        tot+=(mini[c]==10000000?0:mini[c]);
    cout<<min(tot,k);
}

