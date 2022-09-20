#include<iostream>
#include<iomanip>
using namespace std;

class HANGHOA{
	private:
		int maHang;
		char tenHang[30];
		float donGia;
		int soLuong;
	public:
		void input();
		void output();
		float TTien(){
			return soLuong*donGia;
		}
		int getsoLuong(){
			return soLuong;
		}
};

class PHIEUMUAHANG{
	private:
		int maPhieu;
		char tenKhachHang[30];
		char dienThoai[12];
		int n;
		HANGHOA dSHH[20];
	public:
		void input();
		void output();
};

void HANGHOA::input(){
	cout<<"Nhap maHang: ";cin>>maHang;
	cout<<"Nhap tenHang: ";fflush(stdin);gets(tenHang);
	cout<<"Nhap donGia: ";cin>>donGia;
	cout<<"Nhap soLuong: ";cin>>soLuong;
}

void HANGHOA::output(){
	cout<<setw(10)<<maHang<<setw(20)<<tenHang<<setw(20)<<donGia<<setw(20)<<soLuong<<setw(20)<<TTien()<<endl;
}

void PHIEUMUAHANG::input(){
	cout<<"Nhap maPhieu: ";cin>>maPhieu;
	cout<<"Nhap tenKhachHang: ";fflush(stdin);gets(tenKhachHang);
	cout<<"Nhap SDT: ";fflush(stdin);gets(dienThoai);
	cout<<"Nhap so luong hang hoa: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap hang hoa thu: "<<i+1<<endl;
		dSHH[i].input();
	}
}

void PHIEUMUAHANG::output(){
	cout<<"-----------------------------------------------"<<endl;
	cout<<"MA PHIEU: "<<maPhieu<<endl;
	cout<<"TEN KHACH HANG: "<<tenKhachHang<<endl;
	cout<<"SDT: "<<dienThoai<<endl;
	cout<<"DANH SACH HANG HOA"<<endl;
	cout<<setw(10)<<"maHang"<<setw(20)<<"tenHang"<<setw(20)<<"donGia"<<setw(20)<<"soLuong"<<setw(20)<<"Thanh tien"<<endl;
	for(int i=0;i<n;i++){
		dSHH[i].output();
	}
	long tong=0;
	for(int i=0;i<n;i++){
		tong = tong +dSHH[i].TTien();
	}
	cout<<setw(85)<<"Tong tien phai tra la: "<<tong<<endl;
	cout<<"Hang hoa co so luong lon nhat: "<<endl;
	cout<<setw(10)<<"maHang"<<setw(20)<<"tenHang"<<setw(20)<<"donGia"<<setw(20)<<"soLuong"<<setw(20)<<"Thanh tien"<<endl;
	int max=dSHH[0].getsoLuong();
	for(int i=0;i<n;i++){
		if(dSHH[i].getsoLuong()>max)
		max=dSHH[i].getsoLuong();
	}
	for(int i=0;i<n;i++){
		if(max==dSHH[i].getsoLuong())
		dSHH[i].output();
	}
}

int main(){
	PHIEUMUAHANG p;
    p.input();
    p.output();
	return 0;
}