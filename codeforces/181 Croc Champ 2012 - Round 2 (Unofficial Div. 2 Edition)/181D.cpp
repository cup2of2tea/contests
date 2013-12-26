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
#include <ctime>
#include <queue>
#include <climits>
#include <iterator>
#define MOD 1000000007

#define LOCAL
#ifdef ONLINE_JUDGE
#undef LOCAL
#endif

#ifdef LOCAL
#define cin in
#endif

using namespace std;

template < typename  T,typename  T2 >
T2 fac(T n)
{
    return n<2?1:fac<T,T2>(n-1)*n;
}

template < typename  T,typename  T2,typename  T3>
T2 fac(T n, T3 mod)
{
    return n<2?1:(fac<T,T2,T3>(n-1,mod)*n)%mod;
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
    for(long long unsigned c=0; c<v.size(); c++)
    {
        m[v[c]]++;
        if(m[v[c]]-1)
            distinct=false;
    }
    for(typename map<T2,T>::iterator it=m.begin(); it!=m.end(); it++)
        total/=fac<T,T>(it->second);
    return total;
}

template <typename  T,typename  T2,typename  T3>
T nb_permutations(vector<T2> v,T3 mod)
{
    T total=fac<T,T,T3>(v.size(),mod);
    map<T2,T> m;
    bool distinct=true;
    for(long long unsigned c=0; c<v.size(); c++)
    {
        m[v[c]]++;
        if(m[v[c]]-1)
            distinct=false;
    }
    for(typename map<T2,T>::iterator it=m.begin(); it!=m.end(); it++)
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

int pgcd (int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    return pgcd(b,a%b);
}

string conversion(int n,int base)
{
    string res="";
    while(n!=0)
    {
        res=((char)('0'+n%base))+res;
        n/=base;
    }
    return res;
}



int main()
{
#ifdef LOCAL
    ifstream in("input.txt");
#endif
    string s1,s2;
    cin>>s1>>s2;
    int n;
    cin>>n;
    vector<int> v;
    for(int c=0;c<s1.size();c++)
    {
        bool b=true;
        for(int c2=0;c2<s1.size();c2++)
        {
            if(s1[c2]!=s2[(c+c2)%s1.size()])
            {
                b=false;
                break;
            }
        }
        if(b)
            v.push_back(c);
    }
    int dp[2][1001];
    for(int c=0;c<2;c++)
        for(int c2=0;c2<1001;c2++)
            dp[c][c2]=0;
    dp[0][0]=1;
    int res=1;
    for(int c=1;c<=n;c++)
    {
        int z=c%2,y=1-z;
        int tot=0;
        for(int c2=0;c2<s1.size();c2++)
        {
                dp[z][c2]=(res-dp[y][c2]+MOD)%MOD;
                tot+=dp[z][c2];
                tot%=MOD;
        }
        res=tot;
    }
    int truc=0;
    for(int c=0;c<v.size();c++)
    {
        truc+=dp[n%2][v[c]];
        truc%=MOD;
    }
    cout<<truc;
}

