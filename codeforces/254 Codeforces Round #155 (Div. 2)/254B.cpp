#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;


int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
#define cin in
#define cout out
    int mois[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum[12]={0};
    for(int c=1;c<12;c++)
        sum[c]=sum[c-1]+mois[c-1];
    int n;
    cin>>n;
    vector<int> m(n),d(n),p(n),t(n);
    for(int c=0;c<n;c++)
        cin>>m[c]>>d[c]>>p[c]>>t[c];
    int maxi=0;
    for(int c=-500;c<=500;c++)
    {
        int res=0;
        for(int c2=0;c2<n;c2++)
        {
            if(c>=sum[m[c2]-1]+d[c2]-t[c2]&&c<=sum[m[c2]-1]+d[c2]-1)
            {
                res+=p[c2];
            }
        }
        maxi=max(maxi,res);
    }
    cout<<maxi;
}

