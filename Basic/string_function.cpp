#include<iostream>
#include<string.h>
using namespace std;

int main(){

char name1[10]="mohit";
string name2="mohit";
char name3[10]="vivek";

cout<<name1<<endl;
cout<<name2<<endl;

cout<<name1[1]<<endl;
cout<<name2[1]<<endl;

int lenstr=strlen(name3);
cout<<lenstr<<endl;

strrev(name3);
cout<<name3<<endl;

string name4=strcat(name1,name3);
cout<<name4<<endl;

char name5[10];

strcpy(name5,name3);
cout<<name5<<endl;

// strlwr()
// strupr()

}