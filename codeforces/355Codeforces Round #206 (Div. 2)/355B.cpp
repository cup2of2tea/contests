#include <iostream>
#include <vector>


using namespace std;



int tot_cost(int cseul,int cmono,vector<int> &v)
{
    int res=0;
    for(int c=0;c<v.size();c++)
    {
        res+=min(cseul*v[c],cmono);
    }
    return res;
}
        


int main()
{
    int s1=0;
    int s2=0;
    int N,M;
    int c1,c2,c3,c4;
    cin>>c1>>c2>>c3>>c4>>N>>M;
    vector<int> bus(N),trolley(M);
    for(int c=0;c<N;c++)
    {
        cin>>bus[c];
        s1+=bus[c];
    }
    for(int c=0;c<M;c++)
    {
        cin>>trolley[c];
        s2+=trolley[c];
    }
    int b=tot_cost(c1,c2,bus);
    int t=tot_cost(c1,c2,trolley);
    cerr<<b+t<<" "<<b+c3<<" "<<t+c3<<" "<<c4<<endl;
    cout<<min(b+t,min(b+c3,min(t+c3,min(2*c3,c4))));
    
    
        
        
}
