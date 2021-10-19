#include<iostream>
using namespace std;
int main()
{
  int i,j,rows,k;
  cout<<"Enter number of rows: "<<endl;
  cin>>rows;
  cout<<endl;
  for(i=1;i<=rows;i++)
  {
     for(j=1;j<=i;j++)
     {
       cout<<" ";
     }
     for(k=i;k<=rows;k++)
     {
      cout<<"*";
     }
   cout<<"\n";
  }
 return 0;
 }
© 2021 GitHub, Inc.
Terms
Pri
