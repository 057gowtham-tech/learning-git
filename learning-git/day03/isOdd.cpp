#include<iostream>
   using namespace std;
   
   
   bool isodd(int n)
   {
    if(n%2==0)
    {
     return false;
    }
    
    else
    {
     return true;
    }
   }
   int main()
   {
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<boolalpha<<isodd(n);
    return 0;
   }