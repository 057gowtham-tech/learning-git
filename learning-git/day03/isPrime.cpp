#include<iostream>
   using namespace std;
   
   bool isprime(int n)
   {
    if(n<=0)
    {
     return false;
    }
    
    else
    {
     for(int j=2;j<n;j++)
     { 
       if(n%j==0)
       {
        return false;
       }
     }
    }
    return true;
    }
    int main()
    {
     int n;
     cout<<"enter a number:";
     cin>>n;
     
     cout<<boolalpha<<isprime(n);
     return 0;
     }
     