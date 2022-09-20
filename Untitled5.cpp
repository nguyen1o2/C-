#include<iostream>
#include<iomanip>
using namespace std;

class HangHoa{
	private :
		int maHang;
		char tenHang[50];
		long donGia;
		int soLg;
	public:
		void nhap();
		void xuat();
		long TTien(){
			return soLg*donGia;
		}
};

class PhieuMuaHang{
	private:
		int maPhieu;
		char tenKhach[30];
		char dienThoai[12];
		int n;
		HangHoa dsHang[15];
	public:
		void nhap();
		void xuat();
};

void HangHoa::nhap(){
	cout<<"Nhap maHang: ";cin>>maHang;
	cout<<"Nhap tenHang: ";fflush(stdin);gets(tenHang);
	cout<<"Nhap donGia: ";cin>>donGia;
	cout<<"Nhap soLg: ";cin>>soLg;
}

void HangHoa::xuat(){
	cout<<setw(10)<<maHang<<setw(20)<<tenHang<<setw(20)<<soLg<<setw(20)<<donGia<<setw(20)<<TTien()<<endl;
}

void PhieuMuaHang::nhap(){
	cout<<"Nhap maPhieu: ";cin>>maPhieu;
	cout<<"Nhap tenKhach: ";fflush(stdin);gets(tenKhach);
	cout<<"Nhap so luong hang: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap hang hoa thu "<<i+1<<endl;
		dsHang[i].nhap();
	}
}

void PhieuMuaHang::xuat(){
	cout<<"maPhieu: "<<maPhieu<<endl;
	cout<<"tenKhach: "<<tenKhach<<endl;
	cout<<"so luong hang: "<<n<<endl;
	cout<<"Danh sach hang hoa\n"<<endl;
	cout<<setw(10)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(20)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
	for(int i=0;i<n;i++){
		dsHang[i].xuat();
	}
	long tong=0;
	for(int i=0;i<n;i++){
		tong = tong +dsHang[i].TTien();
	}
	cout<<setw(90)<<"Cong thanh tien: "<<tong<<endl;
}

int main(){
	PhieuMuaHang p1;
	p1.nhap();
	p1.xuat();
	return 0;
}