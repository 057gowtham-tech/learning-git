#include<iostream>
   using namespace std;
   
   
   void greet(string name)
   {
    cout<<"hello "<<name;
   }
   int  main()
   {
    string name;
    cout<<"enter your name:";
    cin>>name;
    greet(name);
    return 0;
   }