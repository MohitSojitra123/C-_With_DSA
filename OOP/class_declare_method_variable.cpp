#include<iostream>
using namespace std;

class student{

public:

int roll_number;
string stu_name;
char division;

void input_detail(){
    cout<<"Enter Student Roll Number..."<<endl;
    cin>>roll_number;
    cout<<"Enter Student Name..."<<endl;
    cin>>stu_name;
    cout<<"Enter Student Division..."<<endl;
    cin>>division;
}

void output_detail(){
    cout<<"Student Name Is ==> "
    <<stu_name
    <<endl
    <<"Student Roll Number Is ==> "
    <<roll_number
    <<endl
    <<"Student Division Is ==> "
    <<division
    <<endl;
}
};

int main(){

student st1;
st1.input_detail();
st1.output_detail();

cout<<st1.stu_name<<endl;
cout<<st1.roll_number<<endl;
cout<<st1.division<<endl;


}