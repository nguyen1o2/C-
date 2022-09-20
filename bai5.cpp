#include<iostream>
using namespace std;

class SINHVIEN{
	private :
		char ten[30];
		int ngay,thang,nam;
		char gt[3];
		float dtb;
		char xeploai[10];
		public:
			void nhap();
		    void xuat();
};

void SINHVIEN::nhap(){
	cout<<"Nhap ten: ";fflush(stdin);gets(ten);
	cout<<"Nhap ngay: ";cin>>ngay;
	cout<<"Nhap thang: ";cin>>thang;
	cout<<"Nhap nam: ";cin>>nam;
	cout<<"Nhap gioi tinh: ";fflush(stdin);gets(gt);
	cout<<"Nhap dtb: ";cin>>dtb;
	cout<<"Nhap xep loai: ";fflush(stdin);gets(xeploai);
}

void SINHVIEN::xuat(){
	cout<<"--------------------\n";
	cout<<"Ten: ";puts(ten);
	cout<<"Ngay: "<<ngay;
	cout<<"\nThang: "<<thang;
	cout<<"\nNam: "<<nam;
	cout<<"\nGioi tinh: ";puts(gt);
	cout<<"Diem tb: "<<dtb;
	cout<<"\nXep loai dao duc: ";puts(xeploai);
}

int main(){
	SINHVIEN sv1;
	sv1.nhap();
	sv1.xuat();
}