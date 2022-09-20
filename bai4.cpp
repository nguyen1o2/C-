#include<iostream>
#include<math.h>
using namespace std;

class HINHTAMGIAC{
	private:
	    float a,b,c;
	public:
		void nhap();
		float CV(){
		 	return a+b+c;
		}
		float DT(){
			float p=CV()/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
		void xuat();
};
void HINHTAMGIAC::nhap(){
	do{
		cout<<"Nhap canh a: ";cin>>a;
	    cout<<"Nhap canh b: ";cin>>b;
	    cout<<"Nhap canh c: ";cin>>c;
	}
	while(a+b<=c || b+c<=a || c+a<=b);
}

void HINHTAMGIAC::xuat(){
	cout<<"Chu vi hinh tam giac: "<<CV()<<endl;
	cout<<"Dien tich hinh tam giac: "<<DT();
}
int main(){
	HINHTAMGIAC tg1;
	tg1.nhap();
	tg1.xuat();
//	cout<<"Dien tich hinh tam giac: "<<tg1.DT();
}