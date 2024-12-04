#include<iostream>
using namespace std;

// Q4. Constructor and Destructor (10 marks)
// Input-Output Explanation:
// ● Input: Define a class and create objects using different constructors (default,
// parameterized, copy). Input data specific to constructors (e.g., for a parameterized
// constructor, input values for initializing attributes).
// ● Output: The program will display the initialized object attributes and demonstrate how
// destructors are invoked automatically when objects go out of scope.

class A1{
    public:
    A1(){
        cout<<"Constructure Is Allocated...."<<endl;
    }

    ~A1(){
        cout<<"Constructure Is Deallocated..."<<endl;
    }
};

int main(){

A1  obj1;

}