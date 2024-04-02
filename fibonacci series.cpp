#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,sum;
	
	int n;
	cout<<"Enter the number of terms "<<endl;
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<n-2;i++){
		sum=a+b;
		a=b;
		b=sum;
		cout<<sum<<" ";
	}
}
