#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
     void initCounter(void){
        counter=0;
     }
     void setPrice(void);
     void displayPrice(void);
};

void Shop::setPrice(void){
    cout<<"ENter Id Of Your Item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price Of Your Item"<<endl;
    cin>>itemPrice[counter];
    cout<<"counter..."<<counter<<endl;
    counter++; 
}

void Shop::displayPrice(void){
    for(int i=0; i<counter; i++){
        cout<<"The Price Of item With Id "<<itemId[i]<<" Is "<<itemPrice[i]<<endl;
    }
}



int main(){

 Shop dukan;
 dukan.initCounter();
 dukan.setPrice();
 dukan.setPrice();
 dukan.setPrice();
 dukan.setPrice();
 dukan.displayPrice();

}