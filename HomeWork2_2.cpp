#include<iostream>
#include<stdlib.h>
using namespace std;


#define SHOW(x) cout<<x<<" + "
#define min(x,y)  x<y?x:y

int* array;

void summand (int B,int N, int number , int max ){

    if(N==0){
        cout<<B<<" = ";

    for (int i=0;i<number-1;i++)
        SHOW(array[i]);

    cout<<array[number-1]<<endl;
   }

    for(int i=min(max,N);i>=1;i--){
    array[number]=i;
    summand(B,N-i,number+1,i);
   }
}


int main(){

 int N;
 cout<<"Enter N: ";
 cin>>N;

 array = new int[N];

 int B=N;

 summand(B,N,0,N);

delete[] array;
system("pause");
return 0;
}
