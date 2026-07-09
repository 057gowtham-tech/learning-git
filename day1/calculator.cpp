#include<iostream>
  using namespace std;
  int main()
  {
   double num1,num2;
   char op;
   cout<<"enter num1:";
   cin>>num1;
   cout<<"enter num2:";
   cin>>num2;
   cout<<"enter operator type:";
   cin>>op;
   
   
   if(op=='+')
   {
     cout<<num1+num2;
   }
   else if(op=='-')
   {
    cout<<num1-num2;
   }
   else if(op=='*')
   {
    cout<<num1*num2;
   }
   else if(op=='/')
   {
    cout<<num1/num2;
   }
   
   else{
    cout<<"op not found";
    }
   return 0;
  } 
    
     
   
   
   