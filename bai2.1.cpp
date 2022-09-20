#include<iostream>
using namespace std;

class Date{
	private:
	int d,m,y;
	public:
		void input();
		void output();
};

class HoaDon{
	private:
		int maHoaDon;
		char tenHoaDon[30];
		Date ngayXuat;
		float donGia;
		int soLuong; 
	public:
		void input();
		void output();
		float TTien(){
			return donGia*soLuong;
		}
};

void Date::input(){
	cout<<"Nhap ngay xuat: ";
	cin>>d>>m>>y;
}

void Date::output(){
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}

void HoaDon::input(){
	cout<<"Nhap maHoaDon: ";cin>>maHoaDon;
	cout<<"Nhap tenHoaDon: ";cin>>tenHoaDon;
	ngayXuat.input();
	cout<<"Nhap donGia: ";cin>>donGia;
	cout<<"Nhap soLuong: ";cin>>soLuong;
}

void HoaDon::output(){
	cout<<"maHoaDon: "<<maHoaDon<<endl;
	cout<<"tenHoaDon: "<<tenHoaDon<<endl;
	cout<<"ngayXuat: ";ngayXuat.output();
	cout<<"Thanh tien: "<<TTien();
}
int main(){
	HoaDon hd;
	hd.input();
	hd.output();
	return 0;
}

