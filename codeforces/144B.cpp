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

#define LOCAL
#ifdef ONLINE_JUDGE
#undef LOCAL
#endif

#ifdef LOCAL
#define cin in
#endif
#define FOREACH(i, n) for (typeof(n.begin()) i = n.begin(); i != n.end(); ++i)
#define MEMSET(p, c) memset(p, c, sizeof(p))

using namespace std;

template < typename  T,typename  T2 >
T2 fac(T n)
{
    return n<2?1:fac<T,T2>(n-1)*n;
}

template < typename  T,typename  T2,typename  T3>
T2 fac(T n, T3 mod)
{
    return n<2?1:(fac/*<T,T2,T3>*/(n-1,mod)*n)%mod;
}
template <typename  T>
T nb_combinaisons(T k,T n)
{
    if(n<k)
        return nb_combinaisons<T>(n,k);
    return fac<T,long long int>(n)/(fac<T,long long int>(n-k)*fac<T,long long int>(k));
}

template <typename T,typename  T2>
T nb_permutations(vector<T2> v)
{
    T total=fac<T,T>(v.size());
    map<T2,T> m;
    bool distinct=true;
    for(long long unsigned c=0;c<v.size();c++)
    {
        m[v[c]]++;
        if(m[v[c]]-1)
            distinct=false;
    }
    for(typename map<T2,T>::iterator it=m.begin();it!=m.end();it++)
        total/=fac<T,T>(it->second);
    return total;
}

template <typename  T,typename  T2,typename  T3>
T nb_permutations(vector<T2> v,T3 mod)
{
    T total=fac<T,T,T3>(v.size(),mod);
    map<T2,T> m;
    bool distinct=true;
    for(long long unsigned c=0;c<v.size();c++)
    {
        m[v[c]]++;
        if(m[v[c]]-1)
            distinct=false;
    }
    for(typename map<T2,T>::iterator it=m.begin();it!=m.end();it++)
        total/=fac<T,T>(it->second);
    return total%mod;
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

long long int pgcd (long long int a,long long int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    return pgcd(b,a%b);
}

string conversion(long long int n,int base)
{
    string res="";
    while(n!=0)
    {
        res=((char)('0'+n%base))+res;
        n/=base;
    }
    return res;
}


struct triplet
{
    int a;
    int b;
    int c;
};

bool dist(long long int x1,long long int y1,long long int x2,long long int y2,long long int rad)
{
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)>(rad*rad);
}


int main()
{
#ifdef LOCAL
    ifstream in("input.txt");
#endif
    int xa,ya,xb,yb;
    cin>>xa>>ya>>xb>>yb;
    if(xa>xb)
        swap(xa,xb);
    if(ya>yb)
        swap(ya,yb);
    int n;
    cin>>n;
    vector<triplet> v(n);
    for(int c=0;c<v.size();c++)
        cin>>v[c].a>>v[c].b>>v[c].c;
    set<pair<int,int> > s;
    s.clear();
    for(int c=xa;c<=xb;c++)
    {
        bool lol1=false,lol2=false;
        for(int c2=0;c2<n;c2++)
         {
            if(!dist(c,ya,v[c2].a,v[c2].b,v[c2].c))
                lol1=true;
            if(!dist(c,yb,v[c2].a,v[c2].b,v[c2].c))
               lol2=true;
         }
         if(!lol1)
            s.insert(make_pair(c,ya));
         if(!lol2)
             s.insert(make_pair(c,yb));
    }
    for(int c=ya;c<=yb;c++)
    {
        bool lol1=false,lol2=false;
        for(int c2=0;c2<n;c2++)
         {
            if(!dist(xa,c,v[c2].a,v[c2].b,v[c2].c))
                lol1=true;
            if(!dist(xb,c,v[c2].a,v[c2].b,v[c2].c))
                lol2=true;
         }
         if(!lol1)
            s.insert(make_pair(xa,c));
        if(!lol2)
            s.insert(make_pair(xb,c));
    }
    cout<<s.size();
}

