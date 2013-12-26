
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


#define MOD 1000000007

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


//Warning: cout.precision(), division par 0, long long




int main()
{
#ifdef LOCAL
    ifstream in("input.txt");
#endif
    int A,B,n;
    cin>>A>>B>>n;
    if(A==0)
    {
        if(B!=0)
        {
            cout<<"No solution";
            return 0;
        }
        else
        {
            cout<<"0";
            return 0;
        }
    }
    if(B%A!=0)
    {
        cout<<"No solution";
        return 0;
    }
    int z=B/A;
    for(int c=-1000;c<=1000;c++)
    {
        int alpha=pow((double)c,n);
        if(alpha==z)
        {
            cout<<c;
            return 0;
        }
    }
    cout<<"No solution";
}

