  #include<iostream>
  using namespace std;
  int main()
  {
   double principal,rate,time,si;
   cout<<"enter the principal amount:";
   cin>>principal;
   cout<<"enter the rate of interest:";
   cin>>rate;
   cout<<"enter time in years:";
   cin>>time;
   si=(principal*rate*time)/100;
   cout<<"simple interest is:"<<si;
   return 0;
  }