#include<iostream>
using namespace std;

class hinh{
	protected :
		float cd,cr;
	public :
		void nhap();
		void xuat();
};

class HinhCN:public hinh{
	public:
	    float CV(){
	    	return (cd+cr)*2;
		};
		float DT(){
			return cd*cr;
		};
		void xuat();
};
void hinh::nhap(){
	cout<<"Nhap chieu dai va chieu rong: ";
	cin>>cd>>cr;
}
void hinh::xuat(){
	cout<<"Chieu dai: "<<cd<<endl;
	cout<<"Chieu rong: "<<cr<<endl;
}
void HinhCN::xuat(){
	hinh::xuat();
	cout<<"Chu vi: "<<CV()<<endl;
	cout<<"Dien tich: "<<DT();
}
int main(){
	HinhCN h1;
	h1.nhap();
	h1.xuat();
}