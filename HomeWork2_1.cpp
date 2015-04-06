#include<iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;


struct Point {
double x,y;
}B,C,N;


double distan(Point B, Point C ){

  double dist=sqrt(pow((B.x-C.x),2)+ pow((B.y-C.y),2));
  return dist;
}

double scalar_product(Point B,Point C){

   double scalar=B.x*C.x+B.y*C.y;
   return scalar;
}

Point sub (Point B,Point C){

    N.x=B.x-C.x;
    N.y=B.y-C.y;
    return N;
}


Point sum (Point B,Point C)   {

    N.x=B.x+C.x;
    N.y=B.x+C.y;
    return N;
}

int main(){


 cout<<"Enter the coordinates of the point B:"<<endl<<"x = ";
 cin>>B.x;
 cout<<"y = ";
 cin>>B.y;
 cout<<"Enter the coordinates of the point C:"<<endl<<"x = ";
 cin>>C.x;
 cout<<"y = ";
 cin>>C.y;


 cout<<"The distance between points: "<<distan(B,C)<<endl;
 cout<<"Scalar product: "<<scalar_product(B,C)<<endl;
 sub(B,C);
 cout<<"The difference of vectors is vector with coordinates: x = "<<N.x<<", y = "<<N.y<<endl;
 sum(B,C);
 cout<<"the amount of vectors is vector with coordinates: x = "<<N.x<<", y = "<<N.y<<endl;


 system("pause");
 return 0;

}
