#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>
#include <cstdio>
#include <set>
#include <stack>
#include <ctime>
#include <climits>
#include <iterator>
#define LOCAL
#ifdef ONLINE_JUDGE
#define COUT(s)
#undef LOCAL
#endif
#ifdef LOCAL
#define cin in
#define COUT(s) cout<<"-----"<<s<<endl;
#endif
using namespace std;


int main()
{
    #ifdef LOCAL
        ifstream in("input.txt");
        ofstream out("output.txt");
    #endif
    int tab[3][3];
    for(int c=0;c<3;c++)
        for(int c2=0;c2<3;c2++)
            cin>>tab[c][c2];
    for(int c=1;c<tab[1][0]+tab[1][2];c++)
    {
        int a=c;
        int d=tab[1][0]+tab[1][2]-a;
        int b=tab[2][0]+tab[2][1]-a;
        tab[0][0]=a;
        tab[1][1]=b;
        tab[2][2]=d;
        for(int c2=0;c2<3;c2++)
        {
            int sum=0;
            for(int c3=0;c3<3;c3++)
                sum+=tab[c2][c3];
            if(sum!=a+b+d)
                goto end;
            sum=0;
            for(int c3=0;c3<3;c3++)
                sum+=tab[c3][c2];
            if(sum!=a+b+d)
                goto end;
        }
        if(b+tab[2][0]+tab[0][2]!=b+a+d)
            goto end;
        break;
        end:;
    }
    for(int c=0;c<3;c++,cout<<endl)
        for(int c2=0;c2<3;c2++)
            cout<<tab[c][c2]<<" ";
}

