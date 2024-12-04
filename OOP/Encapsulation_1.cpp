#include<iostream>
using namespace std;

class Student{

    private:
    int roll;
    char name[100];
    int std;
    char div[100];

    public:
    void get(){
       cout<<
        "Student Name Is ... "<<this->name<<endl<<
        "Student Roll Number Is ... "<<this->roll<<endl<<
        "Student Std ... "<<this->std<<endl<<
        "Student Div ... "<<this->div<<endl<<
        "-------------------------------"<<endl
        ;
    }

    void set(){
        cout<<"Enter Student Roll..."<<endl;
        cin>>this->roll;
        cout<<"Enter Student Name..."<<endl;
        cin>>this->name;
        cout<<"Enter Student Std..."<<endl;
        cin>>this->std;
        cout<<"Enter Student Div..."<<endl;
        cin>>this->div;
        cout<<"-----------------------------"<<endl;
    }

};

int main(){

   Student stu1,stu2;

   stu1.set();
   stu1.get();

   stu2.set();
   stu2.get();

}