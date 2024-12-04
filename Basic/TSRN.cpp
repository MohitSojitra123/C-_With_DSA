#include<iostream>
using namespace std;

// Topic: Function Types and Recursion in C++ [DSA]
// 1. (5 Marks) TSRN Function
// Write a function in C++ that takes an integer as input and displays whether the number is positive,
// negative, or zero.
// Examples:
// - Input: checkSign(5);
// Output: Positive
// - Input: checkSign(-3);
// Output: Negative
// - Input: checkSign(0);
// Output: Zero


int checkSign(int a){
   
     if(a>=1){
        cout<<"Number Is Positive...."<<a<<endl;
     }else if(a<=-1){
        cout<<"Number Is Negative...."<<a<<endl;
     }else{
        cout<<"Number Is Zero...."<<a<<endl;
     }

}
int main(){

  checkSign(0);
  checkSign(1);
  checkSign(-1);

}