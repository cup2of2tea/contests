#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <iterator>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

long long calc(long long n)
{
    long long pow10 = 1;
    long long res = 0;
    long long nb_digits = 1;
    while(1)
    {
        if(pow10*10 > n)
        {
            res += (n-pow10+1)*nb_digits;
            break;
        }
        res += pow10*9*nb_digits;
        pow10 *= 10;
        nb_digits++;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
  //  #define cin in
    ifstream in("input.txt");
#endif // ONLINE_JUDGE
    long long w, m,k;
    cin>>w>>m>>k;
    w/=k;
    long long to_remove = calc(m-1);
    long long gauche = m - 1, droite = 20000000000000000LL;
    while(gauche != droite)
    {
        long long mid = (gauche+droite+1)/2;
        long long tmp = calc(mid)-to_remove;
        if(tmp > w)
        {
            droite = mid - 1;
        }
        else
        {
            gauche = mid;
        }
    }
    cout<<gauche-m+1<<endl;
}

