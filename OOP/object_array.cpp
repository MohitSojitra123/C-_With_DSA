#include<iostream>
using namespace std;

class A1{
    int id;
    string name;

    public:
    void set_data(){
        cout<<"Enter Id..."<<endl;
        cin>>id;
        cout<<"Enter Name..."<<endl;
        cin>>name;
    }

    void get_data(){
      cout<<"Id Is ===> "<<id
      <<endl
      <<"Name Is ===> "
      <<name
      <<endl;
    } 

};

int main(){

A1 obj1[4];

// obj1[0].set_data();
// obj1[0].get_data();
// obj1[1].set_data();
// obj1[1].get_data();
// obj1[2].set_data();
// obj1[2].get_data();
// obj1[3].set_data();
// obj1[3].get_data();

for(int i=0; i<4; i++){
    obj1[i].set_data();
    obj1[i].get_data();
}

}