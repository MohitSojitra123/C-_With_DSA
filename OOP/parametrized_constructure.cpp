#include<iostream>
using namespace std;

class A{
   
   public:
   A(int a,int b,char sign){
    
     switch (sign)
     {
     case '+':
         cout<<"A and B Sum Is..."<<a+b<<endl;
        break;
     case '-':   
         cout<<"A and B Subtraction Is..."<<a-b<<endl;
        break;
     case '*':
         cout<<"A and B Multiplecation Is..."<<a*b<<endl;
        break;
     case '/':
         cout<<"A and B Divided Is..."<<a/b<<endl;
        break;      
     case '%':
         cout<<"A and B Modular Is..."<<a%b<<endl;
        break;
     default:
        cout<<"Enter Valid Sign...."<<endl;
        break;
     }

   }

};

int main(){

A obj1(10,20,'+');
A obj2(10,20,'-');
A obj3(10,20,'@');
A obj4(10,20,'*');
A obj5(10,20,'%');
A obj6(10,20,'/');

}