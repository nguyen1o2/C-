#include<iostream>
using namespace std;

class SINHVIEN{
	private :
		char hoten[30];
		int ngay,thang,nam;
		char gioitinh[5];
		float dtb;
		char xeploai[10];
	public :
			void sethoten(char *ht){
				strcpy(hoten,ht);
			}
		    char *gethoten(){
		    	return hoten;
			}
			void setngay(int n){
				ngay=n;
			}
			int getngay(){
				return ngay;
			}
			void setthang(int t){
				thang=t;
			}
			int getthang(){
				return thang;
			}
			void setnam(int nm){
				nam=nm;
			}
			int getnam(){
				return nam;
			}
			void setgioitinh(char *gt){
				strcpy(gioitinh,gt);
			}
			char *getgioitinh(){
				return gioitinh;
			}
			void setdtb(float diemtb){
				dtb=diemtb;
			}
			float getdtb(){
				return dtb;
			}
			void setxeploai(char *xldd){
				strcpy(xeploai,xldd);
			}
			char *getxeploai(){
				return xeploai;
			}
			void nhap();
			void xuat();
};

void SINHVIEN::nhap(){
	sethoten("nguyen van nguyen");
	setngay(15);
	setthang(04);
	setnam(2002);
	setgioitinh("nam");
	setdtb(8.3);
	setxeploai("tot");
}

void SINHVIEN::xuat(){
	cout<<"Ho va Ten: "<<gethoten();
	cout<<"\nNgay sinh: "<<getngay()<<"/"<<getthang()<<"/"<<getnam();
	cout<<"\nGioi tinh: "<<getgioitinh();
	cout<<"\nDiem tb: "<<getdtb();
	cout<<"\nXep loai dao duc: "<<getxeploai();
}
int main(){
	SINHVIEN sv1;
	sv1.nhap();
	sv1.xuat();
}