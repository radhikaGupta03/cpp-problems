#include<iostream>
using namespace std;
void swap_cbv_v1(int a,int b){
	int t=a;
	a=b;
	b=t;
}
void swap_cbv_v2(int &a,int &b){
	int t=a;
	a=b;
	b=t;
}
void swap_cbr_v3(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int a=10,b=20;
	int c=10,d=20;
	swap_cbv_v1(a,b);
	cout<<"\nValues after swapping using call by value a= "<<a<<" b= "<<b;
	swap_cbv_v2(a,b);
	cout<<"\nValues after swapping using call by value a= "<<a<<" b= "<<b;
	swap_cbr_v3(&c,&d);
	cout<<"\nValues after swapping using call by refrence a= "<<a<<" b= "<<b;
	return 0;
}
