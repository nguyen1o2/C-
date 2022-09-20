#include<bits/stdc++.h>
using namespace std;

class GIANHANG;
class HANG{
protected:
	char Mapt[20];
	char Loai[10];
	char NamSX[10];
	char HangSX[20];
public:
	void nhap();
	void xuat();
};
class HOP : public HANG{
	char Kieudang[20];
	char Chatlieu[10];
	int Thetich;
	char Ghichu[50];
public:
	void nhap();
	void xuat();
};
class GIANHANG{
	char MaGH[20];
	char TenGH[20];
	int Solo;
	HOP *x;
	int n;
public:
	void nhap();
	void xuat();
};
void HANG::nhap(){
	cout<<"MaPT :";fflush(stdin);gets(Mapt);
	cout<<"Loai :";fflush(stdin);gets(Loai);
	cout<<"Nam_SX :";fflush(stdin);gets(NamSX);
	cout<<"Hang_SX :";fflush(stdin);gets(HangSX);
}
void HANG::xuat(){
	cout<<"MaPT: "<<Mapt<<endl;
	cout<<"Loai: "<<Loai<<endl;
	cout<<"Nam_SX: "<<NamSX<<endl;
	cout<<"Hang_SX: "<<HangSX<<endl;
}
void HOP::nhap(){
    HANG:nhap();
    cout<<"Kieu dang: ";fflush(stdin);gets(Kieudang);
    cout<<"Chat lieu: ";fflush(stdin);gets(Chatlieu);
    cout<<"The tich: ";cin>>Thetich;   
	cout<<"Ghi chu: ";fflush(stdin);gets(Ghichu);
}  
void HOP::xuat(){
	Hang:xuat();
	cout<<"Kieu dang: "<<Kieudang<<endl;
	cout<<"Chat lieu: "<<Chatlieu<<endl;
	cout<<"The tich: "<<Thetich<<endl;
	cout<<"Ghi chu: "<<Ghichu<<endl; 
}
void GIANHANG::nhap(){
	cout<<"Ma GH: ";fflush(stdin);gets(MaGH);
	cout<<"Ten GH: ";fflush(stdin);gets(TenGH);
	cout<<"Solo: ";cin>>Solo;
	cout<<"Nhap so hop: ";cin>>n;
	x = new HOP [n];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin hop thu: "<<i+1<<endl;
		x[i].nhap();
	}
}
void GIANHANG::xuat(){
	cout<<"Ma GH: "<<MaGH<<endl;
	cout<<"Ten GH: "<<TenGH<<endl;
	cout<<"Solo: "<<Solo<<endl;
	for(int i=0;i<n;i++){
	x[i].xuat();
}
}
int main(){
	GIANHANG GH;
	GH.nhap();
	GH.xuat();
	return 0;
}