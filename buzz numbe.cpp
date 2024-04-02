#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if((n%10)==7 || n/7==0 ){
		cout<<"It is a buzz number";
	}
	else{
		cout<<"It is not a buzz number";
	}
}
