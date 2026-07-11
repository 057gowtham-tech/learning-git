  #include<iostream>
   using namespace std;
   
   int add(int a,int b)
   {
    return a+b;
   }
   
   int subtract(int a ,int b)
   {
    return a-b;
   }
   
   int multiple(int a,int b)
   {
    return a*b;
   }
   
   double divide(int a, int b)
    {
    if(b == 0)
     {
        cout << "Error: cannot divide by zero" << endl;
        return 0; 
     }
    return(double) a / b;
    }
    
    int main()
    {
     int a,b;
     cout<<"enter two numbers:";
     cin>>a>>b;
     cout<<"addition is:"<<add(a,b)<<endl;
     cout<<"subtraction is:"<<subtract(a,b)<<endl;
     cout<<"multiplication is:"<<multiple(a,b)<<endl;
     cout<<"dividend is :"<<divide(a,b)<<endl;
     return 0;
    }