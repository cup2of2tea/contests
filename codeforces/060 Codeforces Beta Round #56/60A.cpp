#include <iostream>
using namespace std;
 
int main()
{
    
    int nb_boites,nb_indications;
    cin>>nb_boites>>nb_indications;
        int min=0,max=nb_boites+1;
    string indic;
    int nb;
    for(int c=0;c<nb_indications;c++)
    {
        for(int c2=0;c2<4;c2++)
        {
            string truc;
            if(c2==2)
                cin>>indic;
            else
                cin>>truc;
        }
        cin>>nb;
        if(indic=="left")
            if(max>nb)
                max=nb;
        if(indic=="right")
            if(min<nb)
                min=nb;
        if(min+1>=max)
        {
            cout<<-1;
            return 0;
         }
    }
    cout<<max-min-1;
}
