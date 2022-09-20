#include<iostream>
using namespace std;

class Diem{
	private:
		int a,b,c;
	public:
		Diem(){
			a=0;
			b=0;
			c=0;
		}
		Diem(int x,int y,int z){
			a=x;
			b=y;
			c=z;
		}
	Diem operator+(Diem y){
		Diem z;
		z.a=this->a+y.a;
		z.b=this->b+y.b;
		z.c=this->c+y.c;
		return z;
	} 
	Diem operator-(Diem y){
		Diem z;
		z.a=this->a-y.a;
		z.b=this->b-y.b;
		z.c=this->c-y.c;
		return z;
	}
	friend istream& operator>>(istream &x,Diem &y){
		cout<<"Nhap vao 1 diem: ";
		x>>y.a>>y.b>>y.c;
		return x;
	}	
	friend ostream& operator<<(ostream &x,Diem &y){
		x<<"("<<y.a<<","<<y.b<<","<<y.c<<")"<<endl;
		return x;
	}	
};
int main(){
	Diem A(2,3,4),B;
	cin>>B;
	cout<<"Diem B"<<B;
	Diem C,D;
	C=A+B;
	D=A-B;
	cout<<"---------------------------------------"<<endl;
	cout<<A<<" + "<<endl<<B<<" = "<<endl<<C<<endl;
	cout<<"---------------------------------------"<<endl;	
    cout<<A<<" - "<<endl<<B<<" = "<<endl<<D;
return 0;
}