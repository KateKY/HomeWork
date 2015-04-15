#include <iostream>
#include <stdlib.h>
#include <vector>
#include <ctime>
using namespace std;


#define SHOW(a)  cout<< a<<" ";
#define MAX(x,y)  x>y?x:y

//вывод
void print(vector<double> v1){
      if (v1.empty())
        return ;
    for(int i=0; i<v1.size(); i++)
       SHOW(v1[i]);
}
//максимум
double max(vector<double> v1){

    if (v1.empty())
        return 0;
    double c=v1[0];
    for (int i=1;i<v1.size();i++)
        c=MAX(c,v1[i]);
    return c;
}

int main() {
    srand( time(0) );
 vector<double> v1(10);
//заполнение вектора
 for(int i=0; i<v1.size(); i++)
     v1[i]=rand()%10;

  cout<<endl;
//вывод
  print(v1);
  //нахождение максимума
  cout<<endl<<"max: "<<max(v1)<<endl;

  v1.clear();
  system("pause");
  return 0;
}
