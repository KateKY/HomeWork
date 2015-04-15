#include <iostream>
#include <cstdlib>

using namespace std;

#define SHOW(x)  cout<<#x<<" = "<<x<<endl;

//базовый класс
class Shape{
public:
    virtual void show()=0;
};


class Square: public Shape{

    double a;
public:

     Square(double a){
        this->a=a;
    }

    void show(){
        cout<<"Square: "<<endl;
        SHOW(a);
    }

};


class Circle  : public Shape{

    double x,y,r;

public:
    Circle(double x, double y, double r){
        this->x=x;
        this->y=y;
        this->r=r;
    }

    void show(){
        cout<<"Circle:"<<endl;
        SHOW(x);
        SHOW(y);
        SHOW(r);
        }

};


class Rectangle: public Shape{

    double a,b;

public:
    Rectangle(double a, double b){
        this->a=a;
        this->b=b;
    }

    void show(){
        cout<<"Rectangle:"<<endl;
        SHOW(a);
        SHOW(b);

    }
};


int main(){

      Shape* s[] = {
        new Square(10),
        new Circle(5,7,20),
        new Rectangle(2, 3),
        new Square(15),
      };

      for(int i = 0; i < 4; ++i)
        s[i]->show();

      system("pause");
    return 0;
}
