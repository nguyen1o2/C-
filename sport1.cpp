#include<bits/stdc++.h>
using namespace std;
class benhnhan;
class person{
	protected:
		char hoten [20];
		 int tuoi ;
		public:
			void nhap();
			void xuat();
};
void person::nhap()
{
	cout<<"\n nhap ho ten :";fflush(stdin);gets(hoten);
	cout<<" \n nhap tuoi :"; cin>>tuoi;
}
void person::xuat()
{
    cout<<setw(10)<<hoten;
    cout<<setw(10)<<tuoi;
}
class hospital{
    private:
        char tenbenhvien[30];
        char diachi[30];
        char giamdoc[20];
    friend class benhnhan;
};
class benhnhan:public person{
    private:
        hospital x;
        char tieusu [20];
        char chuandoan [20];
    public:
        void nhap();
        void xuat();
        friend void xoabenhnhan(benhnhan *a,int &n);
        
};
void benhnhan::nhap()
{
    person::nhap();
    cout<<"\nNhap ten benh vien: ";fflush(stdin);gets(x.tenbenhvien);
    cout<<"\nNhap dia chi: ";fflush(stdin);gets(x.diachi);
    cout<<"\nNhap giam doc: ";fflush(stdin);gets(x.giamdoc);
    cout<<"\nNhap tieu su: ";fflush(stdin);gets(tieusu);
    cout<<"\nNhap chuan doan: ";fflush(stdin);gets(chuandoan);
}
void benhnhan::xuat()
{
    person::xuat();
    cout<<setw(10)<<x.tenbenhvien;
    cout<<setw(15)<<x.diachi;
    cout<<setw(15)<<x.giamdoc;
    cout<<setw(15)<<tieusu;
    cout<<setw(15)<<chuandoan<<endl;
}

void xoa(benhnhan *a,int &n,int k){
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
		n--;
	}
}

void xoabenhnhan(benhnhan *a,int &n){
	for(int i=0;i<n;i++){
		if(a[i].tuoi==14){
			xoa(a,n,i);
		}
	}
	cout<<"Ho ten"<<setw(15)<<"Tuoi"<<setw(15)<<"Ten benh vien"<<setw(15)<<"Dia chi"<<setw(15)<<"giam doc"<<setw(10)<<"Tieu su"<<setw(10)<<"Chuan doan"<<endl;
    for(int i=0;i<n;i++){
       a[i].xuat();  
    }
}
int main()
{
    benhnhan *a;
    int n;
    cout<<"\nNhap so luong benh nhan : ";cin>>n;
	a=new benhnhan[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nNhap thong tin benh nhan thu "<<i+1;
        a[i].nhap();
    }
    cout<<"Ho ten"<<setw(15)<<"Tuoi"<<setw(15)<<"Ten benh vien"<<setw(15)<<"Dia chi"<<setw(15)<<"giam doc"<<setw(10)<<"Tieu su"<<setw(10)<<"Chuan doan"<<endl;
    for(int i=0;i<n;i++){
       a[i].xuat();
      
    } 
    xoabenhnhan(a,n);
    return 0;
}