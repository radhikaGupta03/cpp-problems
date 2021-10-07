#include<iostream>

using namespace std;

void Char()
{
  char a='A';
  cout<<"Char:         "<<sizeof(char)<<endl;
  }
  
void Bool()
{
  bool a= false;
  cout<<"Bool:         "<<sizeof(bool)<<endl;
  }
 
void Short()
{
  short a=2;
  cout<<"Short:        "<<sizeof(short)<<endl;
}

void Int()
{
  int a=1234;
  cout<<"Int:          "<<sizeof(int)<<endl;
  }
  
void Long()
{
  long a= 1567890324;
  cout<<"Long:         "<<sizeof(long)<<endl;
  }
  
void Float()
{
  float a=23.567f;
  cout<<"Float:        "<<sizeof(float)<<endl;
  }
  
void Double()
{
  double a=678.11134100;
  cout<<"Double:       "<<sizeof(double)<<endl;
  }

void long_double()
{
    long double a=12.675439091;
  cout<<"LOng Double:  "<<sizeof(long double)<<endl;
  }
  
void wideChar()
{
  
  wchar_t a = L'z';
  wcout<<"Wide char:  "<<sizeof(wchar_t)<<endl;
  }
  

int main()
{
  Char();
  Bool();
  Short();
  Int();
  Long();
  Float();
  Double();
  long_double();
  wideChar();
  
  return 0;
  }
