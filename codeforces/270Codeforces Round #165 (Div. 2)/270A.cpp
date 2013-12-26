#include <iostream>

using namespace std;

int main()
{
    int nb_cas;
    cin>>nb_cas;
    while(nb_cas--)
    {
        int a;
        cin>>a;
        cout<<(360%(180-a)==0?"YES":"NO")<<endl;
     }
}
