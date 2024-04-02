#include<iostream>
using namespace std;
int main(){
	int a,b,res;
	cout<<"Enter the two numbers"<<endl;
	cin>>a;
	cin>>b;
	res=min(a,b);
	do{
		if(a%res==0 && b%res==0 ){
			cout<<"Greatest common divisor is "<<res;
			break;
		}
		res=res-1;
	}while(res>0);
	
}
