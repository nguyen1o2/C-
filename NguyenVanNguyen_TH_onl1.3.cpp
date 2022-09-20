#include<bits/stdc++.h>
using namespace std;
class PHIEU;
class TTTS{
	char tenTS[30];
	int soLuong;
	char tinhTrang[30];
	public:
		void nhap();
		void xuat();
		friend void sapxep(PHIEU p);
		friend void suaTT(PHIEU &p);
};

class PHONG{
	char kKTP[30];
	char maPhong[10];
	char truongPhong[30];
	public:
		void nhap();
		void xuat();
};
class PHIEU{
	char maPhieu[10];
	char ngayKiemKe[15];
	char nhanVienKiemKe[30];
	char chucVu[30];
	TTTS x[10];
	PHONG y;
	int n;
	public:
		void nhap();
		void xuat();
		friend void sapxep(PHIEU p);
		friend void suaTT(PHIEU &p);
};
void TTTS::nhap(){
	cout<<"Nhap tenTS: ";fflush(stdin);gets(tenTS);
	cout<<"Nhap soLuong: ";cin>>soLuong;
	cout<<"Nhap tinhTrang: ";fflush(stdin);gets(tinhTrang);
}
void TTTS::xuat(){
	cout<<tenTS<<setw(20)<<soLuong<<setw(20)<<tinhTrang<<endl;
}
void PHONG::nhap(){
	cout<<"Nhap kiemKeTaiPhong: ";fflush(stdin);gets(kKTP);
	cout<<"Nhap maPhong: ";fflush(stdin);gets(maPhong);
	cout<<"Nhap truongPhong: ";fflush(stdin);gets(truongPhong);
}
void PHONG::xuat(){
	cout<<"kiem ke tai phong: "<<kKTP<<setw(20)<<"ma phong: "<<maPhong<<endl<<"truong phong: "<<truongPhong<<endl;
}
void PHIEU::nhap(){
	cout<<"Nhap maPhieu: ";fflush(stdin);gets(maPhieu);
	cout<<"Nhap ngayKiemKe: ";fflush(stdin);gets(ngayKiemKe);
	cout<<"Nhap nhanVienKiemKe: ";fflush(stdin);gets(nhanVienKiemKe);
	cout<<"Nhap chucVu: ";fflush(stdin);gets(chucVu);
	y.nhap();
	cout<<"Nhap so luong tai san: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin tai san thu: "<<i+1<<endl;
		x[i].nhap();
	}
}
void PHIEU::xuat(){
	cout<<"maPhieu: "<<maPhieu<<setw(20)<<"ngayKiemKe: "<<ngayKiemKe<<endl;
	cout<<"nhanVienKiemKe: "<<nhanVienKiemKe<<setw(20)<<"chucVu: "<<chucVu<<endl;
	y.xuat();
	cout<<"tenTS"<<setw(20)<<"soLuong"<<setw(20)<<"tinhTrang"<<endl;
	for(int i=0;i<n;i++){
		x[i].xuat();
	}
}
void suaTT(PHIEU &p){
	for(int i=0;i<p.n;i++){
		if(strcmp(p.x[i].tenTS,"May vi tinh")==0){
			p.x[i].soLuong=20;
		}
	}
}
void sapxep(PHIEU p){
	TTTS tg;
	for(int i=0;i<p.n-1;i++){
		for(int j=i+1;j<p.n;j++){
			if(p.x[i].soLuong>p.x[j].soLuong){
				tg=p.x[i];
				p.x[i]=p.x[j];
				p.x[j]=tg;
			}
		}
	}
}
int main(){
	PHIEU p;
	p.nhap();
	cout<<"===============PHIEU KIEM KE TAI SAN================="<<endl;
	p.xuat();
	suaTT(p);
	cout<<"===============PHIEU KIEM KE TAI SAN SAU KHI SUA================="<<endl;
	p.xuat();
	sapxep(p);
	cout<<"===============PHIEU KIEM KE TAI SAN SAU KHI SX================="<<endl;	
	p.xuat();
	return 0;
}