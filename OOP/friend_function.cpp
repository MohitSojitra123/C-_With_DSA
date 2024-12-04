#include<iostream>
using namespace std;


class A1{

private:
int ATM_PIN;

public:
void set_value(){
    ATM_PIN=99099;
} 

friend void get_value(A1 A1_obj);

};

void get_value(A1 A1_obj){
    cout<<"ATM PIN Number Is..."<<A1_obj.ATM_PIN;
}

int main(){

A1 obj1;
obj1.set_value();
get_value(obj1);

}