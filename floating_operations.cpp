#include<iostream>
using namespace std;
int main(){
	float x,y;
	cout<<"Enter two numbers"<<endl;
	cin>>x;
	cin>>y;
	float sum=x+y;
	float diff=x-y;
	float mul=x*y;
	float div=x/y;
	cout<<"The sum is "<<sum<<endl;
	cout<<"The difference is "<<diff<<endl;
	cout<<"The product is "<<mul<<endl;
	cout<<"The modulo is "<<div<<endl;
	return 0;
}
