#include<iostream>
#include<string>
using namespace std;
int max(int arr[],int n){
	int m;
	m=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>m){
			m=arr[i];
		}
	}
	return m;
}
int min(int arr[],int n){
	int m;
	m=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<m){
			m=arr[i];
		}
	}
	return m;
}

int main(){
	int n;
	cout<<"Enter the no.of elements in the array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements "<<endl;
	for(int i=0;i<n,i++){
		cin>>arr[i];
	}
	cout<<"maximum element is "<<max(arr,n)endl;
	cout<<"minimum element is "<<min(arr,n);
}
