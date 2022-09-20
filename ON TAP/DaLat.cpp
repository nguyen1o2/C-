#include<bits/stdc++.h>
using namespace std;
class Phieu;
class Kho{
	char maKho[30];
	char diaChiKho[30];
	char quanLy[30];
	public:
		void nhap();
		void xuat();
};
class Khach{
	char maKhach[30];
	char diaChi[30];
	char SDT[12];
	public:
		void nhap();
		void xuat();
		friend void SUA(Phieu &a);
};
class ThietBi{
	char maTB[30];
	char tenThietBi[30];
	int soLuong;
	int donGia;
	public:
		void nhap();
		void xuat();
		int TT(){
			return soLuong*donGia;
		}
		friend void SAPXEP(Phieu a);
};
class Phieu{
	char maPhieu[30];
	char ngayLap[30];
	Kho x;
	Khach y;
	ThietBi *z;
	int n;
	public:
		void nhap();
		void xuat();
		friend void SUA(Phieu &a);
		friend void SAPXEP(Phieu a);
};
void Kho::nhap(){
	cout<<"Nhap maKho: ";fflush(stdin);gets(maKho);
	cout<<"Nhap diaChi: ";fflush(stdin);gets(diaChiKho);
	cout<<"Nhap quanLy: ";fflush(stdin);gets(quanLy);
}
void Kho::xuat(){
	cout<<"maKho: "<<maKho<<setw(20)<<"diaChiKho: "<<diaChiKho<<"quanLy: "<<quanLy<<endl;
}
void Khach::nhap(){
	cout<<"Nhap maKhach: ";fflush(stdin);gets(maKhach);
	cout<<"Nhap diaChi: ";fflush(stdin);gets(diaChi);
	cout<<"Nhap SDT: ";fflush(stdin);gets(SDT);
}
void Khach::xuat(){
	cout<<"maKhach: "<<maKhach<<setw(20)<<"diaChi: "<<diaChi<<"SDT: "<<SDT<<endl;
}
void ThietBi::nhap(){
    cout<<"Nhap maTB: ";fflush(stdin);gets(maTB);
    cout<<"Nhap tenThietBi: ";fflush(stdin);gets(tenThietBi);
    cout<<"Nhap soLuong: ";cin>>soLuong;
    cout<<"Nhap donGia: ";cin>>donGia;
}
void ThietBi::xuat(){
	cout<<maTB<<setw(20)<<tenThietBi<<setw(20)<<soLuong<<setw(20)<<donGia<<setw(20)<<TT()<<endl;
}
void Phieu::nhap(){
	cout<<"Nhap maPhieu: ";fflush(stdin);gets(maPhieu);
	cout<<"Nhap ngayLap: ";fflush(stdin);gets(ngayLap);
	x.nhap();
	y.nhap();
	cout<<"Nhap so luong thiet bi: ";cin>>n;
	z=new ThietBi [n];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin thiet bi thu: "<<i+1<<endl;
		z[i].nhap();
	}
}
void Phieu::xuat(){
	cout<<"maPhieu: "<<maPhieu<<setw(20)<<"ngayLap: "<<ngayLap<<endl;
	x.xuat();
	y.xuat();
	cout<<"maTB"<<setw(20)<<"tenThietBi"<<setw(20)<<"soLuong"<<setw(20)<<"donGia"<<setw(20)<<"thanh tien"<<endl;
	for(int i=0;i<n;i++){
		z[i].xuat();
	}
	int tongSo=0;
	for(int i=0;i<n;i++){
		tongSo+=z[i].TT();
	}
	cout<<setw(30)<<"tong so: "<<setw(50)<<tongSo<<endl;
	cout<<setw(80)<<"Ha Noi,ngay...thang...nam 2021"<<endl;	
}
void SUA(Phieu &a){
	strcpy(a.y.diaChi,"DA LAT");
}
void SAPXEP(Phieu a){
	ThietBi tg;
	for(int i=0;i<a.n-1;i++){
		for(int j=i+1;j<a.n;j++){
			if(a.z[i].donGia<a.z[j].donGia){
				tg=a.z[i];
				a.z[i]=a.z[j];
				a.z[j]=tg;
			}
		}
	}
}
int main(){
	Phieu a;
	a.nhap();
	cout<<setw(40)<<"PHIEU XUAT KHO"<<endl;
	a.xuat();
	SUA(a);
	cout<<setw(40)<<"PHIEU XUAT KHO"<<endl;
	a.xuat();
	SAPXEP(a);
	cout<<setw(40)<<"PHIEU XUAT KHO"<<endl;
	a.xuat();
	return 0;
}