#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isperfect(int n){
	int x=n;
	int p=0;
	
	
	while(n!=0){
		int a =(n%10);
		p+=pow(a,3);
		n=n/10;
	}
	if(p==x){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(isperfect(n)){
		cout<<"It is an armstrong number";
	}
	else{
		cout<<"It is not an armstrong number";
	}
}
