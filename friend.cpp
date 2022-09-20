#include<iostream>
#include<math.h>
#include<iomanip>
#include<string.h>
using namespace std;
class HS;
class Date{
	private:
		int d,m,y;
	public:
	friend class HS;
	friend void IN_namSinh(HS hs1[],int n);
};
class HS{
	private:
		char hoTen[30];
		char gioiTinh[4];
		Date ngaySinh;
		float diemTB;
	public:
		void nhap();
		void xuat();
		float getdtb(){
			return diemTB;
		}
		friend void In_diemTB(HS hs1[],int n);
		//in HS c? nam sinh 2002
		friend void IN_namSinh(HS hs1[],int n);
};
void HS::nhap(){
	cout<<"Nhap ho ten: ";fflush(stdin);gets(hoTen);
	cout<<"Nhap gioi tinh: ";fflush(stdin);gets(gioiTinh);
	cout<<"Nhap ngay sinh: ";cin>>ngaySinh.d>>ngaySinh.m>>ngaySinh.y;
	cout<<"Nhap diem TB: ";cin>>diemTB;
}
void HS::xuat(){
	cout<<setw(30)<<hoTen;
	cout<<setw(20)<<gioiTinh;
	cout<<setw(30)<<ngaySinh.d<<"/"<<ngaySinh.m<<"/"<<ngaySinh.y;
	cout<<setw(20)<<diemTB<<endl;
}
void In_diemTB(HS hs1[],int n){
	for(int i=0;i<n;i++){
		if(hs1[i].diemTB>7.8){
			hs1[i].xuat();
		}
	}
}
void IN_namSinh(HS hs1[],int n){
	for(int i=0;i<n;i++){
		if(hs1[i].ngaySinh.y==2002){
			hs1[i].xuat();
		}
	}
}
int main(){
	HS hs1[15];
	int n;
	cout<<"Nhap so luong hoc sinh: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap hoc sinh thu "<<i+1<<":"<<endl;
		hs1[i].nhap();
	}
	cout<<"Danh sach hoc sinh vua nhap"<<endl;
	cout<<setw(30)<<"Ho ten";
	cout<<setw(20)<<"Gioi tinh";
	cout<<setw(30)<<"Ngay sinh";
	cout<<setw(20)<<"diem TB"<<endl;
	for(int i=0;i<n;i++){
		hs1[i].xuat();
	}
	//In ra nhung HS co diem tb >7.8
	cout<<"In nhung HS co diem tb > 7.8"<<endl;
	In_diemTB(hs1,n);
//	for(int i=0;i<n;i++){
//		if(hs1[i].getdtb()>7.8){
//			hs1[i].xuat();
//		}
//	}
	cout<<"In nhung HS co nam sinh 2002 "<<endl;
	IN_namSinh(hs1,n);
}
