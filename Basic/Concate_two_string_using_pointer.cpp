#include<iostream>
using namespace std;

int main(){

   string f_name,l_name;

    cout<<"Enter Frist Name :=="<<endl;
    cin>>f_name;
    cout<<"Enter Second Name :=="<<endl;
    cin>>l_name;

    string* concate_1=&f_name;
    string* concate_2=&l_name;

    cout<<*concate_1+" "+*concate_2;

}