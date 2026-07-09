#include<iostream>
   #include<cstdlib>
   #include<ctime>
   using namespace std;
   int main()
   {
    int guess;
    cout<<"enter guess:";
    cin>>guess;
    srand(time(0));  // seeds the random generator (do this once)
    int secret = rand() % 100 + 1; 
    while(guess != secret)
    {
      
      if(guess>secret)
      { 
        cout<<"guess is high"<<endl;
      }
        
      else if(guess<secret)
      {
       cout<<"guess is less"<<endl;
      }
       
     cout<<"enter guess 2: ";
     cin>>guess;
         
         
     
    }
    
     cout<<"got it";
     
     return 0;
  }        
         
    