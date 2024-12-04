#include<iostream>
using namespace std;

int main(){

  int array_size;
  cout<<"Enter Array Size..."<<endl;
  cin>>array_size;

  int array[array_size];

  for(int i=0; i<array_size; i++){
    cout<<"Enter Array Element Index : "<<i<<endl;
    cin>>array[i];
  }

  cout<<"---------------"<<endl;
  for(int i=0; i<array_size; i++){
    cout<<array[i]<<endl;
  }
  cout<<"---------------"<<endl;

   
   int user_reaction;

   do
   {
      cout<<"Choose Any Option..."<<endl<<
      "1 For Insert...."<<endl<<
      "2 For View....."<<endl<<
      "3 For Update...."<<endl<<
      "4 For Delete...."<<endl
      <<endl;
      cin>>user_reaction;

      
      switch (user_reaction)
      {
      case 1:
         array_size+=1;
        cout<<"You Can Choose Insert Option..."<<endl;
        cout<<"---------------"<<endl;
        int user_index,user_value;
        cout<<"Enter Index Number To Insert Element..."<<endl;
        cin>>user_index;
        cout<<"Inset Value...."<<endl;
        cin>>user_value;
        for(int i=array_size-1; i>user_index; i--){
            array[i]=array[i-1];
        }
        array[user_index]=user_value;
        cout<<"---------------"<<endl;
        cout<<"---------------"<<endl;
        for(int i=0; i<array_size; i++){
          cout<<array[i]<<endl;
        }
        cout<<"---------------"<<endl;
        break;
      case 2:
        cout<<"You Can Choose View Option..."<<endl;
        cout<<"---------------"<<endl;
        for(int i=0; i<array_size; i++){
          cout<<array[i]<<endl;
        }
        cout<<"---------------"<<endl;
        break;
      case 3:
       int user_update_index,user_update_value;
        cout<<"---------------"<<endl;
        cout<<"You Can Choose Update Option..."<<endl;
        cout<<"Enter Index Number To Update Element..."<<endl;
        cin>>user_update_index;
        cout<<"Enter Update Value..."<<endl;
        cin>>user_update_value;
        cout<<"------------------"<<endl; 
        array[user_update_index]=user_update_value;
        cout<<"Value Update Successfully..."<<endl;
        cout<<"---------------"<<endl;
        for(int i=0; i<array_size; i++){
            cout<<array[i]<<endl;
        }
        cout<<"---------------"<<endl;
        break;
      case 4:
      int delete_index;
        cout<<"You Can Choose Delete Option..."<<endl;
        cout<<"---------------"<<endl;
         cout<<"Enter Array Index Number To Delete Element..."<<endl;
         cin>>delete_index;


         for(int i=delete_index; i<array_size; i++){
             array[i]=array[i+1];
         }
        
          array_size-=1;
         
         

        cout<<"---------------"<<endl;
      

        break;
      default:
        cout<<"Wrong Option Select Choose a Right Option...."<<endl;
         cout<<"Choose Any Option..."<<endl<<
               "1 For Insert...."<<endl<<
               "2 For View....."<<endl<<
               "3 For Update...."<<endl<<
               "4 For Delete...."<<endl
      <<endl;
      cin>>user_reaction;
      cout<<"---------------"<<endl;
        break;
      }

   }while (user_reaction!=0);
   


}