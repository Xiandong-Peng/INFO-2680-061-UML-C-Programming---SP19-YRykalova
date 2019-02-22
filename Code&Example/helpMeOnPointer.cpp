#include <iostream>
using namespace std;

using namespace std;
 
void swap1(int p,int q){
 
    int temp;
    temp = p;
    p = q ;
    q = temp;
}
 
void swap2(int *p,int*q){
   int *temp;
   *temp = *p;
   *p = * q;
   *q = *temp;
}
 
void swap3(int *p,int *q){
  int *temp;
  temp = p ;
  p = q;
  q = temp;
}
void swap4(int *p,int *q){
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
 
}

void swap5(int &p,int &q){
 int temp;
 temp = p;
 p = q;
 q = temp;
 
}

int main(){
 int a,b;
 a = 1;
 b = 2;
 //swap1(a,b);
 swap2(&a,&b);
 //swap3(&a,&b);
 //swap4(&a,&b);
 //swap5(a,b);
cout<< a <<" "<<b<<endl;
return 0;

}
