#include<iostream>
#include<fstream>
using namespace std;


int main(){

  ofstream newFile("C:\\Users\\mohit\\Desktop\\Demo123.txt");

  cout<<"File Is Created...";

  newFile<<"CPP Full Course....";

  newFile.close(); 

}