#include<iostream>
using namespace std;
class Employee{
	public:
		string empname,address,mailid;
		int empid,phno;
		Employee(string name,int id,string address,string mailid,int phno){
			empname=name;
			empid=id;
			address=address;
			mailid=mailid;
			phno=phno;
		}
	
};

class Programmer : public Employee{
	private:
		int bp;
	public:
		Programmer(string name,int id,string address,string mailid,int phno,int bp){
			empname=name;
			empid=id;
			address=address;
			mailid=mailid;
			phno=phno;
			bp=bp;
		}
		
		void display(){
			int da=(97/100)*bp;
			int hra=(1/10)*bp;
			int pf=(12/100)*bp;
			int scf=(1/1000)*bp;
			cout<<"Your basic pay is : "<<bp<<endl;
			cout<<"Your da is : "<<da<<endl;
			cout<<"Your HRA is : "<<hra<<endl;
			cout<<"Your Provident Fund is : "<<pf<<endl;
			cout<<"Your Staff Club Fund is : "<<scf<<endl;
			cout<<"Your gross salary is : "<<bp+hra+da<<endl;
			cout<<"Your net salary is : "<<(bp+hra+da)-(pf+scf);
		}
	
};

class Assistant_Proffessor : public Employee{
	private:
		int bp;
	public:
		Assistant_Proffessor(string name,int id,string address,string mailid,int phno,int bp){
			empname=name;
			empid=id;
			address=address;
			mailid=mailid;
			phno=phno;
			bp=bp;
		}
		
		void display(){
			int da=(97/100)*bp;
			int hra=(1/10)*bp;
			int pf=(12/100)*bp;
			int scf=(1/1000)*bp;
			cout<<"Your basic pay is : "<<bp<<endl;
			cout<<"Your da is : "<<da<<endl;
			cout<<"Your HRA is : "<<hra<<endl;
			cout<<"Your Provident Fund is : "<<pf<<endl;
			cout<<"Your Staff Club Fund is : "<<scf<<endl;
			cout<<"Your gross salary is : "<<bp+hra+da<<endl;
			cout<<"Your net salary is : "<<(bp+hra+da)-(pf+scf);
		}
	
};

class Associate_Professor : public Employee{
	private:
		int bp;
	public:
		Associate_Professor(string name,int id,string address,string mailid,int phno,int bp){
			empname=name;
			empid=id;
			address=address;
			mailid=mailid;
			phno=phno;
			bp=bp;
		}
		
		void display(){
			int da=(97/100)*bp;
			int hra=(1/10)*bp;
			int pf=(12/100)*bp;
			int scf=(1/1000)*bp;
			cout<<"Your basic pay is : "<<bp<<endl;
			cout<<"Your da is : "<<da<<endl;
			cout<<"Your HRA is : "<<hra<<endl;
			cout<<"Your Provident Fund is : "<<pf<<endl;
			cout<<"Your Staff Club Fund is : "<<scf<<endl;
			cout<<"Your gross salary is : "<<bp+hra+da<<endl;
			cout<<"Your net salary is : "<<(bp+hra+da)-(pf+scf);
		}
};

class Professor : public Employee{
	private:
		int bp;
	public:
		Professor(string name,int id,string address,string mailid,int phno,int bp){
			empname=name;
			empid=id;
			address=address;
			mailid=mailid;
			phno=phno;
			bp=bp;
		}
		
		void display(){
			int da=(97/100)*bp;
			int hra=(1/10)*bp;
			int pf=(12/100)*bp;
			int scf=(1/1000)*bp;
			cout<<"Your basic pay is : "<<bp<<endl;
			cout<<"Your da is : "<<da<<endl;
			cout<<"Your HRA is : "<<hra<<endl;
			cout<<"Your Provident Fund is : "<<pf<<endl;
			cout<<"Your Staff Club Fund is : "<<scf<<endl;
			cout<<"Your gross salary is : "<<bp+hra+da<<endl;
			cout<<"Your net salary is : "<<(bp+hra+da)-(pf+scf);
		}
};

int main(){
	string name,address,mailid;
	int id,phno,bp;
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter id : ";
	cin>>id;
	cout<<"Enter address : ";
	cin>>address;
	cout<<"Enter phone number : ";
	cin>>phno;
	cout<<"Enter mailid : ";
	cin>>mailid;
	cout<<"Enter your basic pay : ";
	cin>>bp;
	int n;
	cout<<"ENter 0 - if you are a programmer \n 1 - if you are an Assistant Professor \n 2 - if you are an Associate Professor \n 3 - if you are a Professor"<<endl;
	cin>>n;
	if(n==0){
		Programmer P(name,id,address,mailid,phno,bp);
		P.display();
	}
	else if(n==1){
		Assistan_Proffessor AP(name,id,address,mailid,phno,bp);
		AP.display();
		
	}
	else if(n==2){
		Associate_Professor ASP(name,id,address,mailid,phno,bp);
		ASP.display();
	}
	else if(n==3){
		Professor PR(name,id,address,mailid,phno,bp);
		PR.display();
	}
	else{
		cout<<"ENter a valid option ";
	}
}
