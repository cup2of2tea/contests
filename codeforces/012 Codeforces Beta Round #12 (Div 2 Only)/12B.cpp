#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <map>

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


int main()
{
    #ifdef LOCAL
        ifstream in("input.txt");
    #endif
    string n1,n2,n3;
    cin>>n1>>n2;
    sort(n1.begin(),n1.end());
    int c;
    for(c=0;c<n1.size()&&n1[c]=='0';c++);
    if(c<n1.size())
        swap(n1[c],n1[0]);
    if(n1!=n2)
        cout<<"WRONG_ANSWER";
    else
        cout<<"OK";
}




