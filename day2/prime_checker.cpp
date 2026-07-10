#include<iostream>
    using namespace std;
    
    int main()
    {
     int n;
     cout<<"enter a number:";
     cin>>n;
     
     bool isprime = true;
     
     
     if(n<=1)
     {
      isprime = false;
     }
     
     else
     {
      for(int j=2;j<n;j++)
      {
       if(n%j==0)
       {
        isprime = false;
       }
      }
     }
     cout<<boolalpha<<isprime;
     return 0;
   }