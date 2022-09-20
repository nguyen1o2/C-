#include<iostream>
#include<iomanip>
using namespace std;

class Date{
	private:
		int d,m,y;
	public:
	 void nhap();
	 void xuat();
};
void Date::nhap(){
    cout<<"Nhap ngay thanh toan: ";
    cin>>d>>m>>y;
}
void Date::xuat(){
	cout<<d<<" / "<<m<<" / "<<y;
}

class HH{
	private:
	    int maHang;
	    char tenHang[30];
	    int soLuong;
	    int giaBan;
	public:
		void nhap();
		void xuat();
		long TTien(){
			return soLuong*giaBan;
		}
};

class HD{
	private:
		int maHD;
		char donViNhanHang[50];
		char nguoiThanhToan[30];
		char nguoiNhan[30];
		Date ngayThanhToan;
	    HH dSHH[60];
	    int n;
	public:
		void nhap();
		void xuat();
};

void HH::nhap(){
    cout<<"Nhap maHang: ";cin>>maHang;
	cout<<"Nhap tenHang: ";fflush(stdin);gets(tenHang);
	cout<<"Nhap giaBan: ";cin>>giaBan;
	cout<<"Nhap soLuong: ";cin>>soLuong;
}
void HH::xuat(){
	cout<<setw(10)<<maHang<<setw(20)<<tenHang<<setw(20)<<giaBan<<setw(20)<<soLuong<<setw(20)<<TTien();
}
void HD::nhap(){
	cout<<"Nhap maHD: ";cin>>maHD;
	cout<<"Nhap donViNhanHang: ";fflush(stdin);gets(donViNhanHang);
	cout<<"Nhap nguoiThanhToan: ";fflush(stdin);gets(nguoiThanhToan);
	cout<<"Nhap nguoiNhan: ";fflush(stdin);gets(nguoiNhan);
	ngayThanhToan.nhap();
	do{
		cout<<"Nhap so luong hang hoa: ";cin>>n;
	}
	while(n<=0);
	for(int i=0;i<n;i++){
		cout<<"Nhap hang hoa thu "<<i+1<<endl;
		dSHH[i].nhap();
	}	
}

void HD::xuat(){
	cou<<endl<<"----------------------- PHIEU MUA HANG -------------------";
	cout<<"maHD: "<<maHD<<endl;
	cout<<"donViNhanHang: "<<donViNhanHang<<endl;
	cout<<"nguoiThanhToan: "<<nguoiThanhToan<<endl;
	cout<<"nguoiNhan: "<<nguoiNhan<<endl;
	cout<<"Danh sach hang hoa:"<<endl;
	cout<<setw(10)<<"maHang"<<setw(20)<<"tenHang"<<setw(20)<<"giaBan"<<setw(20)<<"soLuong"<<setw(20)<<"TTien"<<endl;
	for(int i=0;i<n;i++){
		dSHH[i].xuat();
		cout<<endl;
	}
	int tong=0;
	for(int i=0;i<n;i++){
		tong+=dSHH[i].TTien();
	}
	cout<<setw(80)<<"Tong tien cua HoaDon la: "<<tong<<endl;
	cout<<"Nhung mat hang co TTien>=25000"<<endl;
	cout<<setw(10)<<"maHang"<<setw(20)<<"tenHang"<<setw(20)<<"giaBan"<<setw(20)<<"soLuong"<<setw(20)<<"TTien"<<endl;
	for(int i=0;i<n;i++){
		if(dSHH[i].TTien()>=25000)
		    dSHH[i].xuat();
		    cout<<endl;
	}
}

int main(){
	HD hd1;
	hd1.nhap();
	hd1.xuat();
}