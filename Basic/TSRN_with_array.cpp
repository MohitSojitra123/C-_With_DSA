#include<iostream>
using namespace std;

//  (5 Marks) TSRN with Array Input
// Write a function in C++ that takes an array of integers and its size, then displays all even numbers in the array.
// Examples:
// - Input: int arr[] = {1, 2, 3, 4, 5}; displayEvenNumbers(arr, 5);
// Output: 2 4
// - Input: int arr[] = {10, 15, 20, 25}; displayEvenNumbers(arr, 4);
// Output: 10 20

void displayEvenNumber(int arr[],int size){
     for(int i=0; i<size-1; i++){
        if(arr[i]%2==0){
             cout<<arr[i]<<" "; 
        }else{
            continue;
        }
     }
     cout<<endl;
}


int main(){

int arr1[10]={11,12,13,14,15,16,17,18,19,20};
int arr2[10]={1,2,3,4,5,6,7,8,9,10};


displayEvenNumber(arr1,10);
displayEvenNumber(arr2,10);


}