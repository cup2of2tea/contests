#include <iostream>
typedef long long ll;
using namespace std;
ll c(ll a, ll b){
    ll ans=1;
    for(ll i=1; i<=b; i++){
        ans*=a-i+1;
        ans /=i;
    }
    return ans;
}
int main(){
    ll n,b,g;
    ll ans=0;
    cin >>  b >> g >> n;
    for(ll i=4; i<n; i++){
        ans+= c(b,i)*c(g, n-i);
    }
    cout<<ans <<endl;
}
