#include<iostream>
using namespace std;

int main(){
    string name="abc ddef ghi jkl mnop";

    cout<<name<<endl;

    // name.push_back('q');
    // name.pop_back();
    // name.append("  Working....");
    
    //  Integer To String... 
     int name2=1234;
     string name3=to_string(name2);

   
    
    cout<<name3<<endl;
    cout<<name.length()<<endl;
    name.reserve();
    cout<<name<<endl;

}