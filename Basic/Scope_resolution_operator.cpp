#include<iostream>
using namespace std;

// 1) For Accessing Global Variable
// 2) Identifying Class member To Which Class They belong


int num=10; //  Global Variable....

int main(){


int num=20; //Local Variable

cout<<"Local Variable ==> "<<num<<endl;
cout<<"Global Variable ==> "<<::num<<endl;



}