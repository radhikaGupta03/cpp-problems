#include<iostream>

using namespace std;

 namespace first{
     
      int add(int a , int b)
     {
        
         return a+b;
     }
 }
    
    namespace second{
     
      float add(float a , float b)
     {
         
         return a+b;
     }
 }
    
using namespace first;
using namespace second;


 int main(){
     
     
     cout<<"Sum : "<<add(1.2f,2)<<endl;
     cout<<"Sum : "<<add(2,2.1f)<<endl;
     
     
     return 0;
 }