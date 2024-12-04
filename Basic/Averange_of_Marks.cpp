#include<iostream>
using namespace std;

int main(){
    float maths,english,science;
    cout<<"Enter Maths Marks..."<<endl;
    cin>>maths;
    cout<<"Enter English Marks..."<<endl;
    cin>>english;
    cout<<"Enter Science Marks..."<<endl;
    cin>>science;

    float ave=(maths+english+science)/3;

    cout<<ave;
}