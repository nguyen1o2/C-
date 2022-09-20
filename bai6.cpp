#include<iostream>
using namespace std;
class CANBO{
	private :
		int maCB;
		char ten[30];
		char ngaysinh[20];
		int songaylamviec;
		public:
			void nhap();
			long tinhluong(){
				return songaylamviec*250000;
			}
		    void xuat();
};
void CANBO::nhap(){
	cout<<"Nhap maCB: ";cin>>maCB;
	cout<<"Nhap ho va ten: ";fflush(stdin);gets(ten);
	cout<<"Nhap ngay sinh: ";fflush(stdin);gets(ngaysinh);
	cout<<"Nhap so ngay lam viec: ";cin>>songaylamviec;
}
void CANBO::xuat(){
	cout<<"--------------------\n";
	cout<<"MaCB: "<<maCB;
	cout<<"\nHo Va Ten: ";puts(ten);
	cout<<"Ngay Sinh: "<<ngaysinh;
	cout<<"\nSo Ngay Lam Viec: "<<songaylamviec;
	cout<<"\nLuong Cua Can Bo La: "<<tinhluong();
}
int main(){
	CANBO cb1;
	cb1.nhap();
	cb1.xuat();
}