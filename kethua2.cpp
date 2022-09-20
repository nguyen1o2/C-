#include<iostream>
#include<iomanip>
using namespace std;

class date{
	private:
		int d,m,y;
	public:
		void nhap();
		void xuat();
		friend class HDT;
};
class SP{
	protected :
		int maSP;
		char tenSP[30];
		date NSX;
		float trongLuong;
		char mauSac[10];
	public:
		void nhap();
		void xuat();
};
class HDT:public SP{
	private:
		int congSuat;
		char dongDien[10];
	public:
		void nhap();
		void xuat();
};
void date::nhap(){
	cout<<"Nhap NSX: ";
	cin>>d>>m>>y;
}
void date::xuat(){
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}
void SP::nhap(){
	cout<<"Nhap maSP: ";cin>>maSP;
	cout<<"Nhap tenSP: ";fflush(stdin);gets(tenSP);
	NSX.nhap();
	cout<<"Nhap trongLuong: ";cin>>trongLuong;
	cout<<"Nhap mauSac: ";fflush(stdin);gets(mauSac);
}
void HDT::nhap(){
	SP::nhap();
	cout<<"Nhap congSuat: ";cin>>congSuat;
	cout<<"Nhap dongDien: ";cin>>dongDien;
}
void HDT::xuat(){
	cout<<setw(10)<<maSP<<setw(20)<<tenSP<<NSX.d<<NSX.m<<NSX.y<<setw(20)<<trongLuong<<setw(20)<<mauSac<<setw(20)<<congSuat<<setw(20)<<dongDien;
}
int main(){
	HDT h;
	h.nhap();
	h.xuat();
}

		
		