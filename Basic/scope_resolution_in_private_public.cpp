#include<iostream>
using namespace std;

class Employee {
    private:
        int a, b, c;  // Private variables
    public:
        int d, e;  // Public variables
        void setdata(int a1, int b1, int c1);  // Function to set private data
        void getdata();  // Function to display data
};

// Setting the private data members using this function
void Employee::setdata(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

// Function to print all the data members
void Employee::getdata() {
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Value of d: " << d << endl;
    cout << "Value of e: " << e << endl;
}

int main() {
    Employee emp;
    emp.d = 120;  // Public members can be accessed directly
    emp.e = 130;

    // Setting the private data
    emp.setdata(10, 20, 30);

    // Getting and printing all the values
    emp.getdata();

    return 0;
}
