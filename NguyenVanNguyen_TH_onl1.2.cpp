#include<bits/stdc++.h>
using namespace std;
class DIEM{
	char tenMon[30];
	int soTrinh;
	float diem;
	public:
		void nhap();
		void xuat();
		float getDiem(){
			return diem;
		}
		int getsoTrinh(){
			return soTrinh;
		}
};
class PHIEU{
	char maSV[10];
	char tenSV[30];
	char lop[10];
	int khoa;
	DIEM x[10];
	int n;
	public:
		void nhap();
		void xuat();
		friend void tenMon(PHIEU p);
		friend void chenMon(PHIEU &p);
};

void DIEM::nhap(){
	cout<<"Nhap tenMon: ";fflush(stdin);gets(tenMon);
	cout<<"Nhap soTrinh: ";cin>>soTrinh;
	cout<<"Nhap diem: ";cin>>diem;
}
void DIEM::xuat(){
	cout<<tenMon<<setw(20)<<soTrinh<<setw(20)<<diem<<endl;
}
void PHIEU::nhap(){
	cout<<"Nhap maSV: ";fflush(stdin);gets(maSV);
	cout<<"Nhap tenSV: ";fflush(stdin);gets(tenSV);
	cout<<"Nhap lop: ";fflush(stdin);gets(lop);
	cout<<"Nhap khoa: ";cin>>khoa;
	cout<<"Nhap so luong mon: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin mon thu: "<<i+1<<endl;
		x[i].nhap();
	}
}
void PHIEU::xuat(){
    cout<<"maSV: "<<maSV<<setw(20)<<"tenSV: "<<tenSV<<endl;
	cout<<"lop: "<<lop<<setw(20)<<"khoa: "<<khoa<<endl;
	cout<<"tenMon"<<setw(20)<<"soTrinh"<<setw(20)<<"diem"<<endl;
	for(int i=0;i<n;i++){
		x[i].xuat();
	}
	float tong1=0,tong2=0;
	for(int i=0;i<n;i++){
		tong1+=x[i].getDiem()*x[i].getsoTrinh();
		tong2+=x[i].getsoTrinh();
	}
	cout<<setw(42)<<"diemTB: "<<(float)tong1/tong2<<endl;
}

void tenMon(PHIEU p){
	for(int i=0;i<p.n;i++){
		if(p.x[i].getsoTrinh()>3){
			p.x[i].xuat();
		}
	}
}
void chenMon(PHIEU &p){
	DIEM monNew;
	monNew.nhap();
	int k;
	cout<<"Nhap vi tri can chen: ";cin>>k;
	if(k>=0 && k<p.n){
	for(int i=p.n;i>=k;i--){
		p.x[i+1]=p.x[i];
	}
	p.x[k]=monNew;
	p.n++;	
	}
	else{
		cout<<"Vi tri chen khong hop le!";
	}
}
int main(){
	PHIEU p;
	p.nhap();
	cout<<"===================PHIEU BAO DIEM==============="<<endl;
	p.xuat();
	tenMon(p);
	chenMon(p);
	p.xuat(); 
	return 0;
}