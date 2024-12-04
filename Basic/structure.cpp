#include<iostream>
using namespace std;

struct emp{
    int id;
    string name;
    int mobile_number; 
};

int main(){


struct emp emp1;
emp1.id=101;
emp1.mobile_number=90909090;
emp1.name="Mohit";
cout<<emp1.id<<endl;
cout<<emp1.mobile_number<<endl;
cout<<emp1.name<<endl;

}