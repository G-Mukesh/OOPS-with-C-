#include<iostream>
using namespace std;

int average(int n){
	int arr[n],avg=0;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		avg+=arr[i];
	}
	avg=avg/n;
	return avg;
}
int main(){
	int n;
	cout<<"Enter the no.of elements in the array"<<endl;
	cin>>n;
	cout<<"The averge of the series is "<<average(n);
}
