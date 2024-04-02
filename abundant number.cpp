#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(int i=1;i<n/2+1;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum>n){
		cout<<"It is an abundant number";
	}
	else{
		cout<<"It is not an abundant number";
	}
	
}
