#include<bits/stdc++.h>
using namespace std;

class PT{
    protected:
	    char maPT[30];
		char loai[30];
		float gia;
		char hangSX[30]; 	
	public:
	    void nhap();
		void xuat();		
};
class XM:public PT{
	char maXe[30];
	char tenXe[30];
	float dungTich;
	int bienSo;
	public:
		void nhap();
		void xuat();
};
class BX{
	char maBX[30];
	char tenBX[30];
	char dienTich[30];
	XM *x;
	int n;
	public:
		void nhap();
		void xuat();
};
void PT::nhap(){
	cout<<"Nhap maPT: ";fflush(stdin);gets(maPT);
	cout<<"Nhap loai: ";fflush(stdin);gets(loai);
	cout<<"Nhap gia: ";cin>>gia;
	cout<<"Nhap hangSX: ";fflush(stdin);gets(hangSX);
}
void PT::xuat(){
	cout<<maPT<<setw(10)<<loai<<setw(10)<<gia<<setw(10)<<hangSX<<setw(10);
}
void XM::nhap(){
	PT::nhap();
	cout<<"Nhap maXe: ";fflush(stdin);gets(maXe);
	cout<<"Nhap tenXe: ";fflush(stdin);gets(tenXe);
	cout<<"Nhap dungTich: ";cin>>dungTich;
	cout<<"Nhap bienSo: ";cin>>bienSo;
}
void XM::xuat(){
	PT::xuat();
	cout<<maXe<<setw(10)<<tenXe<<setw(10)<<dungTich<<setw(10)<<bienSo<<endl;
}
void BX::nhap(){
	cout<<"Nhap maBX: ";fflush(stdin);gets(maBX);
	cout<<"Nhap tenBX: ";fflush(stdin);gets(tenBX);
	cout<<"Nhap dienTich: ";fflush(stdin);gets(dienTich);
	cout<<"Nhap so luong xe may: ";cin>>n;	
	x=new XM [n];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin xe thu: "<<i+1<<endl;
		x[i].nhap();
	}
}
void BX::xuat(){
	cout<<"maBX: "<<maBX<<endl;
	cout<<"tenBX: "<<tenBX<<endl;
	cout<<"dienTich: "<<dienTich<<endl;
	cout<<"so Luong Xe May: "<<n<<endl;
    cout<<"maPT"<<setw(10)<<"loai"<<setw(10)<<"gia"<<setw(10)<<"hangSX"<<setw(10)<<"maXe"<<setw(10)<<"tenXe"<<setw(10)<<"dungTich"<<setw(10)<<"bienSo"<<endl;
	for(int i=0;i<n;i++){
		x[i].xuat();
	}
}
int main(){
	BX a;
	a.nhap();
	cout<<"==================Thong Tin Bai Xe=================="<<endl;
	a.xuat();
}
