 #include <iostream>

 int min(int a,int b)
 {
        return a<b?a:b;
 }
int abs(int n)
{
    return n<0?-n:n;
}
    int main()
    {
        int n,x1,y1,x2,y2;
        std::cin>>n>>x1>>y1>>x2>>y2;
        if(x1==x2&&(x1==0||x1==n))
            std::cout<<abs(y1-y2);
        else if(y1==y2&&(y1==0||y1==n))
            std::cout<<abs(x1-x2);
       else
            std::cout<<min(y1+y2,2*n-y1-y2)+min(x1+x2,2*n-x1-x2);
    }
