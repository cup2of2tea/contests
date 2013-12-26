#include <iostream>
 
using namespace std;
 
int main()
{
        long long int xA,xB,xC,yA,yB,yC;
        cin>>xA>>yA>>xB>>yB>>xC>>yC;
        long long int vecteurxAB=xB-xA,vecteuryAB=yB-yA,vecteurxBC=xC-xB,vecteuryBC=yC-yB;
        long long int z=vecteurxAB*vecteuryBC-vecteuryAB*vecteurxBC;
        if(z>0)
                cout<<"LEFT";
        else if(z<0)
                cout<<"RIGHT";
        else
                cout<<"TOWARDS";
} 


