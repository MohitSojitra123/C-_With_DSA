#include<iostream>
using namespace std;

class binary{
    string str;

    public:
    void read(void);
    void chk_bin(void);
};

void binary :: read(void){
    cout<<"Enter a Binary Number..."<<endl;
    cin>>str;
}

void binary :: chk_bin(void){
    for(int i=0; i< str.length(); i++){
           if(str.at(i)!='0' && str.at(i)!='1'){
            cout<<"Incorrect Binary Formate"<<endl;
            exit(0);
           }
           }
             cout << "The binary number is correct." << endl;
    }



int main(){

binary b;
b.read();
b.chk_bin();

}