#include<iostream>
using namespace std;

// Q6. Polymorphism (10 marks)
// Input-Output Explanation:
// ● Input: Define a base class Shape with a method calculateArea. Create objects of
// derived classes Circle and Rectangle and input dimensions like radius, length, and
// width.
// ● Output: The program will calculate and display the area for each shape using method
// overriding (runtime polymorphism). It will also demonstrate how the base class pointer
// calls the derived class method at runtime.


class Shape{

   public:
   int a,b;
   void calculateArea(){
     
   }

};

class Circle:public Shape{
    public:
    int a,b;
    void calculateArea(){
     
   }
};

class Rectangle:public Circle{
    public:
    int a,b;
    void calculateArea(){
     
   }
};


int main(){



}