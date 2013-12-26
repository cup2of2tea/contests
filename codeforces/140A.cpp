#include<iostream>
#include<cmath>
using namespace std;
int R,r,n;

int main(){
    while(cin>>n>>R>>r){
        cout<<(r>R || n>1&& (R-r)*sin(acos(-1.0)/n)+1e-8<r ?"NO":"YES");
    }
}
