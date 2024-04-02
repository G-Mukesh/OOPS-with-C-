#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter no.of rows"<<endl;
	cin>>n;
	for(int i=0;i<n/2;i++){
		cout<<endl;
		for(int j=n/2;j>i;j--){
			cout<<"  ";
		}
		for(int k=0;k<=i;k++){
			cout<<" *  ";
		}
	}
	
	for(int i=n/2+1;i<=n;i++){
		cout<<endl;
		for(int j=n/2;j<=i;j++){
			cout<<"  ";
		}
		for(int k=i;k<n;k++){
			cout<<" *  ";
		}
		
	}
	
}
