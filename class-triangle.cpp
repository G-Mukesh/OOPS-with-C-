#include<iostream>
using namespace std;
class Triangle{
	public:
		void area(int b,int h){
			cout<<"Area of triangle is "<<(0.5*b*h);
		}
		void perimeter(int a,int b,int c){
			cout<<"Perimeter of trianlge "<<(a+b+c);
		}
		
};

int main(){
	int x,y,z,h;
	cout<<"Enter the length of side 1 "<<endl;
	cin>>x;
	cout<<"Enter the length of side 2 "<<endl;
	cin>>y;
	cout<<"Enter the length of side 3 "<<endl;
	cin>>z;
	cout<<"Enter the height "<<endl;
	cin>>h;
	Triangle t1;
	t1.area(y,h);
	t1.perimeter(x,y,z);
	
}
