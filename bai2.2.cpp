#include<iostream>
using namespace std;

class Date{
	private:
		int d,m,y;
	public:
	    void input();
		void output();	
};

class Car{
	private:
	char hangSX[20];
	Date namSX;
	float giaBan;
	int soLuongBan;
	public:
		void input();
		void output();
};

void Date::input(){
	cout<<"Nhap ngay xuat: ";
	cin>>d>>m>>y;
}

void Date::output(){
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}

void Car::input(){
	cout<<"Nhap hangSX: ";fflush(stdin);gets(hangSX);
	namSX.input();
	cout<<"Nhap giaBan: ";cin>>giaBan;
	cout<<"Nhap soLuongBan: ";cin>>soLuongBan;
}

void Car::output(){
	cout<<"--------------------------------"<<endl;
	cout<<"Hang san xuat: "<<hangSX<<endl;
	cout<<"Nam san xuat: ";namSX.output();
	cout<<"Gia ban: "<<giaBan<<endl;
	cout<<"So luong ban: "<<soLuongBan;
}

int main(){
	Car car1;
	car1.input();
	car1.output();
	return 0;
}