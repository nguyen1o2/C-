#include<bits/stdc++.h>
using namespace std;
class HocSinh;
class Date{
	private:
	int d,m,y;
	public:
		void input();
		void output();
		friend class HocSinh;
};

class HocSinh{
	private:
		char maSV[10];
		char hoTen[30];
		Date ngaySinh;
		char nganhHoc[50];
		float diemTK;
	public:
		void input();
		void output();
		friend void IndiemTKMax(HocSinh *hs1,int n);
		friend void ChenSV(HocSinh *hs1,int &n);
};

void Date::input(){
	cout<<"Nhap ngay xuat: ";
	cin>>d>>m>>y;
}

void Date::output(){
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}

void HocSinh::input(){
	cout<<"Nhap maSV: ";fflush(stdin);gets(maSV);
	cout<<"Nhap hoTen: ";fflush(stdin);gets(hoTen);
	ngaySinh.input();
	cout<<"Nhap nganhHoc: ";fflush(stdin);gets(nganhHoc);
	cout<<"Nhap diemTK: ";cin>>diemTK;
}
void HocSinh::output(){
	cout<<setw(10)<<maSV<<setw(20)<<hoTen<<setw(20)<<ngaySinh.d<<"/"<<ngaySinh.m<<"/"<<ngaySinh.y<<setw(20)<<nganhHoc<<setw(20)<<diemTK<<endl;
}
void IndiemTKMax(HocSinh *hs1,int n){
	float max=hs1[0].diemTK;
	for(int i=0;i<n;i++){
		if(max<hs1[i].diemTK)
		max=hs1[i].diemTK;
	}
	for(int i=0;i<n;i++){
		if(max==hs1[i].diemTK)
		hs1[i].output();
	}
}
void ChenSV(HocSinh *hs1,int &n){
	int k;
	cout<<"Nhap vi tri can chen: ";cin>>k;
	HocSinh hs_new;
	hs_new.input();
	for(int i=n;i>=k;i--){
		hs1[i]=hs1[i-1];
	}
	hs1[k]=hs_new;
	n++;
	cout<<"Danh sach sinh vien sau khi chen "<<endl;
	cout<<setw(10)<<"maSV"<<setw(20)<<"hoTen"<<setw(30)<<"ngaySinh"<<setw(30)<<"nganhHoc"<<setw(30)<<"diemTK"<<endl;
	for(int i=0;i<n;i++){
		hs1[i].output();
	}
}
int main(){
	HocSinh *hs1;
	int n;
	cout<<"Nhap n: ";cin>>n;
	hs1= new HocSinh [n];
	for(int i=0;i<n;i++){
		hs1[i].input();
	}
	cout<<setw(10)<<"maSV"<<setw(20)<<"hoTen"<<setw(30)<<"ngaySinh"<<setw(30)<<"nganhHoc"<<setw(30)<<"diemTK"<<endl;
	for(int i=0;i<n;i++){
		hs1[i].output();
	}
	cout<<"Sinh vien co diemtk cao nhat:"<<endl;
	cout<<setw(10)<<"maSV"<<setw(20)<<"hoTen"<<setw(30)<<"ngaySinh"<<setw(30)<<"nganhHoc"<<setw(30)<<"diemTK"<<endl;
	IndiemTKMax(hs1,n);
	ChenSV(hs1,n);
	return 0;
}