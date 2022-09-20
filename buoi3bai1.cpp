#include<iostream>
#include<iomanip>
using namespace std;

class HangHoa{
	private :
		int maHang;
		char tenHang[50];
		long tienTra;
	public:
		void nhap();
		void xuat();
		long gettienTra(){
			return tienTra;
		}
};

class PhieuMuaHang{
	private:
		int maPhieu;
		char tenKhach[30];
		char dienThoai[12];
		int n;
		HangHoa *dsHang;

	public:
		void nhap();
		void xuat();
};

void HangHoa::nhap(){
	cout<<"Nhap maHang: ";cin>>maHang;
	cout<<"Nhap tenHang: ";fflush(stdin);gets(tenHang);
	cout<<"Nhap tienTra: ";cin>>tienTra;
}

void HangHoa::xuat(){
	cout<<setw(20)<<maHang<<setw(20)<<tenHang<<setw(20)<<tienTra<<endl;
}

void PhieuMuaHang::nhap(){
	cout<<"Nhap maPhieu: ";cin>>maPhieu;
	cout<<"Nhap tenKhach: ";fflush(stdin);gets(tenKhach);
	cout<<"Nhap so luong hang: ";cin>>n;
	dsHang=new HangHoa [n];
	for(int i=0;i<n;i++){
		cout<<"Nhap hang hoa thu "<<i+1<<endl;
		dsHang[i].nhap();
	}
}

void PhieuMuaHang::xuat(){
	cout<<setw(40)<<"HOA DON PHIEU MUA HANG"<<endl;
	cout<<"maPhieu: "<<maPhieu<<endl;
	cout<<"tenKhach: "<<tenKhach<<endl;
	cout<<"so luong hang: "<<n<<endl;
	cout<<"Danh sach hang hoa\n";
	cout<<setw(20)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(20)<<"TienTra"<<endl;
	for(int i=0;i<n;i++){
		dsHang[i].xuat();
	}
	long tong=0;
	for(int i=0;i<n;i++){
		tong = tong +dsHang[i].gettienTra();
	}
	cout<<setw(60)<<"Tong tien phai tra: "<<tong;
}

int main(){
	PhieuMuaHang p1;
	p1.nhap();
	cout<<"------------------------------------------------------------"<<endl;
	p1.xuat();
	return 0;
}