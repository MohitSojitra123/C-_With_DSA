#include<iostream>
using namespace std;

// Q2. Data Encapsulation (10 marks)
// Input-Output Explanation:
// ● Input: Create a BankAccount object with attributes like account number and balance.
// Input new balance values using setter methods.
// ● Output: The program should display account details like account number and updated
// balance using getter methods. The private attributes should not be directly accessible
// outside the class, ensuring encapsulation.


class SBI{
    private:
    string account_holder_name;
    int accout_number,account_balance; 
    
    public:
    void Set_Balance(string ac_holder_name,int ac_number,int ac_balance){
          this->account_holder_name=ac_holder_name;
          this->account_balance=ac_balance;
          this->accout_number=ac_number;
    }

    void Get_Account_Detail(){
       cout<<"Account Owner Name Is ==>  "<<this->account_holder_name<<endl
       <<"Account Number Is ==>  "<<this->accout_number<<endl
       <<"Account Balance Is ==> "<<this->account_balance<<endl
       <<"------------------------------"<<endl;

    }
};

int main(){

SBI S1,S2;

S1.Set_Balance("Mohit Sojitra",163479894,5000000);
S1.Get_Account_Detail();

S2.Set_Balance("Rohit Patel",468593046,230000);
S2.Get_Account_Detail();

}