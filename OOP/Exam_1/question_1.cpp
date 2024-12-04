#include<iostream>
using namespace std;

// Q1. Object-Oriented Programming (10 marks)
// Input-Output Explanation:
// ● Input: The program will define classes and objects representing real-world entities (e.g.,
// Student and Teacher). You will input data such as names, IDs, and other properties
// for these objects.
// ● Output: The program will demonstrate how principles like abstraction (hiding details),
// encapsulation (using private attributes and methods), inheritance (reusing code from
// parent classes), and polymorphism (overriding methods) work. It will also show the use
// of the this keyword to resolve naming conflicts.

class Teacher{
     
     public:
     string stu_name,stu_city;
     int stu_roll,stu_std;

     void Add_Student(){
        cout<<"Enter Student Name..."<<endl;
        cin>>stu_name;
        cout<<"Enter Student Roll Number..."<<endl;
        cin>>stu_roll;
        cout<<"Enter Student Std...."<<endl;
        cin>>stu_std;
        cout<<"Enter Student City Name...."<<endl;
        cin>>stu_city;
        cout<<"------------------------"<<endl;
     }

     void Print_Student_Detail(){
        cout<<"Student Name Is ==> "<<this->stu_name<<endl
        <<"Student Roll Number Is  ==> "<<this->stu_roll<<endl
        <<"Student City Is ==> "<<this->stu_city<<endl
        <<"Student Std Is  ==> "<<stu_std<<endl;
         cout<<"------------------------"<<endl;
     }
};


int main(){

Teacher Student1,Student2;

Student1.Add_Student();
Student1.Print_Student_Detail();

Student2.Add_Student();
Student2.Print_Student_Detail();

}