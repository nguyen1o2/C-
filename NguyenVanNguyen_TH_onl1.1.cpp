#include<bits/stdc++.h>
using namespace std;

class date{
	int d,m,y;
    public:
    	void nhap();
    	void xuat();
};

class NCC{
	int maNCC;
	char tenNCC[30];
	public:
		void nhap();
		void xuat();
};

class HH{
	char tenHang[30];
	float donGia;
	int soLuong;
	public:
		void nhap();
		void xuat();
		float TTien(){
			return donGia*soLuong;
		}
};

class PNH{
	char maPhieu[30];
	date ngayLap;
	NCC x;
	HH *y;
	int n;
	char diaChi[30];
	public:
		void nhap();
		void xuat();
};

void date::nhap(){
	cout<<"Nhap ngayLap: ";cin>>d>>m>>y;
}

void date::xuat(){
	cout<<"Ngay lap: "<<d<<"/"<<m<<"/"<<y<<endl;
}

void NCC::nhap(){
	cout<<"Nhap maNCC: ";cin>>maNCC;
	cout<<"Nhap tenNCC: ";fflush(stdin);gets(tenNCC);
}
void NCC::xuat(){
	cout<<"Ma NCC: "<<maNCC;
	cout<<setw(40)<<"Ten NCC: "<<tenNCC<<endl;
}

void HH::nhap(){
	cout<<"Nhap tenHang: ";fflush(stdin);gets(tenHang);
	cout<<"Nhap donGia: ";cin>>donGia;
	cout<<"Nhao soLuong: ";cin>>soLuong;
}

void HH::xuat(){
	cout<<tenHang<<setw(20)<<donGia<<setw(20)<<soLuong<<setw(20)<<TTien()<<endl;
}

void PNH::nhap(){
	cout<<"Nhap maPhieu: ";fflush(stdin);gets(maPhieu);
	ngayLap.nhap();
	x.nhap();
	cout<<"Nhap diaChi: ";fflush(stdin);gets(diaChi);
	cout<<"Nhap so luong hang hoa: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin HH thu: "<<i+1<<endl;
		y[i].nhap();
	}	
}

void PNH::xuat(){
	cout<<"maPhieu: "<<maPhieu<<setw(30);
	ngayLap.xuat();
	x.xuat();
	cout<<"diaChi: "<<diaChi<<endl;
	cout<<"tenHang"<<setw(20)<<"donGia"<<setw(20)<<"soLuong"<<setw(20)<<"TTien"<<endl;
	for(int i=0;i<n;i++){
		y[i].xuat();
	}
	float tongTien=0;
	for(int i=0;i<n;i++){
		tongTien+=y[i].TTien();
	}	
	cout<<setw(50)<<"Cong thanh tien: "<<tongTien;
}

int main(){
	PNH p;
	p.nhap();
	cout<<"======================PHIEU NHAP HANG=================="<<endl;
	p.xuat();
	return 0;
}
