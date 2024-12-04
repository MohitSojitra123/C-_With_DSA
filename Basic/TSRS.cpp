#include<iostream>
using namespace std;

// (5 Marks) TSRS Function
// Write a function in C++ that takes two floating-point numbers as input and returns their average.
// Examples:
// - Input: cout << calculateAverage(10.0, 20.0) << endl;
// Output: 15
// - Input: cout << calculateAverage(5.5, 7.5) << endl;
// Output: 6.5

float calculateAverage(float a,float b){
       return (a+b)/2;
}

int main(){

cout<<calculateAverage(10.0,20.0)<<endl;
cout<<calculateAverage(5.5,7.5)<<endl;

}