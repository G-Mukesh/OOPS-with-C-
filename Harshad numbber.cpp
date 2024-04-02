#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int x=n;
	while(n!=0){
		sum+=n%10;
		n=n/10;
	}
	if(sum==x){
		cout<<"It is a harshad number";
	}
	else{
		cout<<"It is not a harshad number";
	}
}
