 #include<iostream>
  using namespace std;
  
  
  int getmax(int a ,int b)
  {
   if(a>b)
   {
    return a;
   }
   else
   {
    return b;
   }
  }
  
  int main()
  {
  int a,b;
  cout<<"enter two numbers :";
  cin>>a>>b;
  cout<<getmax(a,b);
  return 0;
  }