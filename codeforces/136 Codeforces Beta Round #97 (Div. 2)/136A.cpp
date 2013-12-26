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




//Warning: cout.precision(), division par 0, long long

int main()
{
#ifdef LOCAL
    ifstream in("input.txt");
#endif
    int tab[101];
    int n;
    cin>>n;
    for(int c=1;c<=n;c++)
    {
        int a;
        cin>>a;
        tab[c]=a;
    }
    for(int c=1;c<=n;c++)
    {
        for(int c2=1;c2<=n;c2++)
        {
            if(tab[c2]==c){
                cout<<c2<<" ";
            break;}
        }
    }
}

