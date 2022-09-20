#include<iostream>
#include<iomanip>
using namespace std;

class Car;
class Date{
	private:
		int d,m,y;
	public:
	    void input();
		void output();	
		void inHang(Car *car,int n);
		friend void sapXep(Car *car,int n);
		friend class Car;
};

class Car{
	private:
	char nhanHieu[30];
	char hangSX[20];
	char kieuDang[30];
	char mauSon[10];
	Date namSX;
	char xuatXu[30];
	float giaBan;
	public:
		void input();
		void output();
		friend void inHang(Car *car,int n);
		friend void sapXep(Car *car,int n);
};

void Date::input(){
	cout<<"Nhap ngay xuat: ";
	cin>>d>>m>>y;
}

void Date::output(){
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}

void Car::input(){
	cout<<"Nhap nhanHieu: ";fflush(stdin);gets(nhanHieu);
	cout<<"Nhap hangSX: ";fflush(stdin);gets(hangSX);
	cout<<"Nhap kieuDang: ";fflush(stdin);gets(kieuDang);
	cout<<"Nhap mauSon: ";fflush(stdin);gets(mauSon);
	namSX.input();
	cout<<"Nhap noi xuatXu: ";fflush(stdin);gets(xuatXu);
	cout<<"Nhap giaBan: ";cin>>giaBan;
}

void Car::output(){
    cout<<nhanHieu<<setw(20)<<hangSX<<setw(20)<<kieuDang<<setw(20)<<mauSon<<setw(20)<<namSX.d<<namSX.m<<namSX.y<<setw(20)<<xuatXu<<setw(20)<<giaBan;
}

void inHang(Car *car,int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(strcmp(car[i].hangSX,"Toyota")==0){
			dem++;
		}
	}
	if(dem>0){
	cout<<"------------------Nhung xe co hang Toyota----------------"<<endl;
    cout<<"Nhan hieu"<<setw(20)<<"Hang san xuat"<<setw(20)<<"Kieu dang"<<setw(20)<<"Mau son"<<setw(20)<<"Nam san xuat"<<setw(20)<<"Xuat xu"<<setw(20)<<"Gia ban"<<endl;
	for(int i=0;i<n;i++){
		if(strcmp(car[i].hangSX,"Toyota")==0){
			car[i].output();
			cout<<endl;
		}
	}
	}
}
void sapXep(Car *car,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(car[i].namSX.y < car[j].namSX.y){
				Car tg = car[i];
				car[i] = car[j];
				car[j] = tg;
			}
		}
	}
}
int main(){
	Car *car;
	int n;
	cout<<"Nhap so luong xe: ";
	cin>>n;
	car = new Car [n];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin xe thu "<<i+1<<endl;
		car[i].input();
	}
	cout<<"-----------------Danh sach xe hoi----------------- "<<endl;
	cout<<"Nhan hieu"<<setw(20)<<"Hang san xuat"<<setw(20)<<"Kieu dang"<<setw(20)<<"Mau son"<<setw(20)<<"Nam san xuat"<<setw(20)<<"Xuat xu"<<setw(20)<<"Gia ban"<<endl;
	for(int i=0;i<n;i++){
		car[i].output();
		cout<<endl;
    }
    inHang(car,n);
    sapXep(car,n);
    cout<<"------------------Sau khi sap xep la-------------------"<<endl;
    cout<<"Nhan hieu"<<setw(20)<<"Hang san xuat"<<setw(20)<<"Kieu dang"<<setw(20)<<"Mau son"<<setw(20)<<"Nam san xuat"<<setw(20)<<"Xuat xu"<<setw(20)<<"Gia ban"<<endl;
    for(int i=0;i<n;i++){
		car[i].output();
		cout<<endl;
    }
	return 0;
}