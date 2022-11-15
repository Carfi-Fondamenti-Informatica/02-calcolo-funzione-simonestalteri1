#include <iostream>
using namespace std;
#include <cmath>
int main()
{
   float a,b,x,y;
   cin>>a;
   cin>>b;
   cin>>x;
   cin>>y;
   if(x<0 && y>0)
   {
       cout<<a*x - b*y<<endl;
   }
   else if (x >= 0 && y <= 0)
    {
        cout<<a*pow(x, 2) - b*y<<endl;
    }
   else
    {
        cout<<a*x+b*pow(y,2)<<endl;
    }
    return 0;
}
