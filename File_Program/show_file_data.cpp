#include<iostream>
#include<fstream>
using namespace std;

int main(){
  
    ifstream newFile("C:\\Users\\mohit\\Desktop\\Demo123.txt");

  string str;
   while (getline(newFile,str))
   {
       cout<<str<<endl;
   }
   
    
    newFile.close();

    return 0;
    
  

} 