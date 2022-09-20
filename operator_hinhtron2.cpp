#include<iostream>
#include<math.h>
using namespace std;

class hinhtron{
	private:
		float r;
	public:
		hinhtron(float r1){
			r=r1;
		}
		
		hinhtron(){
			r=0.0;
		}
		
		float DT(){
			return M_PI*r*r;
		}
		friend istream& operator >> (istream &in,hinhtron &a){
			in>>a.r;
			return in;
		}
		friend ostream& operator << (ostream&out,hinhtron&a){
		out<<a.DT();
		return out;		
		}
		
		float operator + (hinhtron a){
			return DT()+a.DT();
		}
		float operator - (hinhtron a){
			return DT()-a.DT();
		}
		
		int operator > (hinhtron h){
			if (DT()> h.DT())
			return 1;
			else return 0;
		}
		
		int operator < (hinhtron h){
			if (DT()<h.DT())
			return 1;
			else return 0;
		}	
};

int main(){
	hinhtron a,b;
	cout<<"Nhap ban kinh cho duong tron a: ";cin>>a;
	cout<<"Nhap ban kinh cho duong tron b: ";cin>>b;
	cout<<"hinh tron a: " <<a <<endl;
	cout<<"hinh tron b: " <<b <<endl;
	if(a>b)
	cout<<"hinh tron a > b";
	if(a<b)
	cout<<"hinh tron a < b";
	cout<<endl<<"Tong dien tich la: " <<a+b<<endl;
	cout<<"Hieu dien tich la: " <<a-b;
}

