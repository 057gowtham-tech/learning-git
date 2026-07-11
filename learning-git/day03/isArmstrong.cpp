#include<iostream>
  #include<cmath>
  using namespace std;
  
  bool is_armstrong(int n)
  {
   int first = n%10;
   int second = (n/10) % 10;
   int third = n/100;
   int cube_first=pow(first,3);
   int cube_second=pow(second,3);
   int cube_third=pow(third,3);
   if((cube_first+cube_second + cube_third) == n)
   {
    return true;
   }
   else
   {
    return false;
   }
   
   
  }
  int main()
  {
   int n;
   cout<<"enter a 3 digit number:";
   cin>>n;
   cout<<boolalpha<<is_armstrong(n);
   return 0;
  }