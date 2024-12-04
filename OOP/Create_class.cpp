#include<iostream>
using namespace std;

class student{
    public:
    void print(){
        cout<<"Class Function(Method) Is Called ";
    }
};

int main(){
   
   student st;
   st.print();

 return 0;

}