#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter two numbers"<<endl;
	cin>>x;
	cin>>y;
	int sum=x+y;
	int diff=x-y;
	int mul=x*y;
	int div=x%y;
	cout<<"The sum is "<<sum<<endl;
	cout<<"The difference is "<<diff<<endl;
	cout<<"The product is "<<mul<<endl;
	cout<<"The modulo is "<<div<<endl;
	return 0;
}
