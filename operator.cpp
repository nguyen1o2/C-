#include<iostream>
using namespace std;
class SP{
	private:
		int phanThuc,phanAo;
	public:
		void nhap(){
			cout<<"Nhap phan thuc: ";cin>>phanThuc;
			cout<<"Nhap phan ao: ";cin>>phanAo;
		}
		void xuat(){
			cout<<phanThuc<<" + "<<phanAo<<"*i";
		}
	
		SP operator+(SP y){
			SP z;
			z.phanThuc=phanThuc+y.phanThuc;
			z.phanAo=phanAo+y.phanAo;
			return z;
		}
};
int main(){
	SP sp1,sp2;
	sp1.nhap();
	sp2.nhap();
	SP Sp;
	Sp=sp1+sp2;
	Sp.xuat();
}