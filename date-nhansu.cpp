#include<iostream>
using namespace std;

class Date{
	private :
		int d,m,y;
	public:
		void nhap();
		void xuat();
};

class NhanSu{
	private:
		int mans;
		char hoTen[30];
		Date NS;
	public:
		void nhap();
		void xuat();
};

void Date::nhap(){
	cout<<"Nhap ngay sinh: ";
	cin>>d>>m>>y;
}
void Date::xuat(){
	cout<<d<<"/"<<m<<"/"<<y;
}

void NhanSu::nhap(){
	cout<<"Nhap mans: ";cin>>mans;
	cout<<"Nhap hoTen: ";fflush(stdin);gets(hoTen);
	NS.nhap();
}

void NhanSu::xuat(){
	cout<<"MaNS: "<<mans<<endl;
	cout<<"Ho Va Ten: "<<hoTen<<endl;
	cout<<"Ngay Sinh: ";NS.xuat();
}

int main(){
	NhanSu ns1;
	ns1.nhap();
	ns1.xuat();
	return 0;
}