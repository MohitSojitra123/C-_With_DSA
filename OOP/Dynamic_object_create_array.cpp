#include<iostream>
#include<string.h>
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
        char f_name[100];
        cout<<"Enter Student Roll..."<<endl;
        cin>>this->roll;
        cout<<"Enter Student Name..."<<endl;
        cin>>f_name;
        strcpy(name,f_name);
        cout<<"Enter Student Std..."<<endl;
        cin>>this->std;
        cout<<"Enter Student Div..."<<endl;
        cin>>this->div;
        cout<<"-----------------------------"<<endl;
    }

};

int main(){


int total_object;
cout<<"Enter Total Object ...."<<endl;
cin>>total_object;


string object_list[total_object];


for(int i=0; i<total_object; i++){
    cout<<"Enter Object Name : "<<i<<endl;
    cin>>object_list[i];
}




for(int i=0; i<total_object; i++){
    Student total_object[i];
      total_object[i].set();
}

for(int i=0; i<total_object; i++){
      Student total_object[i];
      total_object[i].get();
}
  
}