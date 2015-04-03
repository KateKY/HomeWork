#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

void decision(double a, double b, double c)

{
   double D, x1,x2;
   D = b*b-4*a*c;



   if(D>0)
   {
       x1=(-b+sqrt(D))/(2*a);
       x2=(-b-sqrt(D))/(2*a);
       cout<<"Roots of the equation: "<<x1<<", "<<x2<<endl;

   }
   else
   {
       if (D<0)
       cout<<"Equation has no roots"<<endl;

       else
         { if ((a==0)&&(b==0)&&(c==0))
             cout<<"equation has infinitely many roots"<<endl;
           else
           {x1=(-b)/(2*a);
               cout<<"equation has one root: "<<x1<<endl;}
   }

}
}


int main()
{
    double a,b,c;
    cout<<"Enter the coefficients"<<endl<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;

    decision(a,b,c);

    system("pause");

    return 0;

}
