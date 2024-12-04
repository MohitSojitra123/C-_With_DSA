#include<iostream>
using namespace std;

// Q3. Array of Objects and Static Members (10 marks)
// Input-Output Explanation:
// ● Input: Enter details of 5 books (title, author, and price). Provide a threshold value to filter
// books based on price.
// ● Output: The program will display the details of books priced above the given threshold.
// Additionally, static members will count and display the total number of books created

class Library{
   private:
   string book_title,book_author;
   int book_price; 

   public:
   void Add_Book(){
     cout<<"Enter Book Title...."<<endl;
     cin>>this->book_title;
     cout<<"Enter Book Author...."<<endl;
     cin>>this->book_author;
     cout<<"Enter Book Price...."<<endl;
     cin>>this->book_price;
     cout<<"-------------------------"<<endl;
   }

   void Show_Book(){
     cout<<"Book Title Is ==>  "<<book_title<<endl
     <<"Book Author Is ==>  "<<book_author<<endl<<
     "Book Price Is  ==>  "<<book_price<<endl
     <<"-------------------------------"<<endl;
   }

};

int main(){

int obj_size;
cout<<"Enter Object Length...."<<endl;
cin>>obj_size;

Library obj1[obj_size];

for(int i=0; i<obj_size; i++){
    obj1[i].Add_Book();
    obj1[i].Show_Book();
}

}