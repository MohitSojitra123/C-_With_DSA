#include<iostream>
using namespace std;

class c1{   
      private: 
      int a=100,b=10;

    public:
     friend class c2;  
};


class c2{
    

    public:
    int c;
    void add(c1 r){
      c=r.a+r.b;
      cout<<c;
    }
};


int main(){
    

c1 obj;
c2 obj1;
obj1.add(obj);


}