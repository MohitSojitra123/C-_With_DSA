#include<iostream>
using namespace std;

class c1{
    private:
      int mobile=98745678;
      string name="Chore";
      string Address="Rajkot";

    public:
     void show(){
        cout<<mobile<<endl;
        cout<<name<<endl;
        cout<<Address<<endl;
     } 
};

class c2:public c1{

};

int main(){

c2 obj1;
obj1.show();

   

}