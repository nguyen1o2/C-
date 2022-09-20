#include<bits/stdc++.h>
using namespace std;

class SP{
	int phanThuc,phanAo;
	public:
		SP(){
			phanThuc=0;
			phanAo=0;
		}
		SP(int pt,int pa){
			phanThuc=pt;
			phanAo=pa;
		}
		friend istream&operator>>(istream&in,SP &x){
			cout<<"Nhap phan thuc: ";
			in>>x.phanThuc;
			cout<<"Nhap phan ao: ";
			in>>x.phanAo;
			return in;
		}
		friend ostream&operator<<(ostream&ou,SP &x){
			ou<<x.phanThuc<<" + "<<x.phanAo<<"*i"<<endl;
			return ou;
		}
		SP operator+(SP&x){
			SP tg;
			tg.phanThuc=phanThuc+x.phanThuc;
			tg.phanAo=phanAo+x.phanAo;
			return tg;
		}
		SP operator-(SP&x){
			SP tg;
			tg.phanThuc=phanThuc-x.phanThuc;
			tg.phanAo=phanAo-x.phanAo;
			return tg;
		}
};
int main(){
	SP a,b;
	cout<<"Nhap so phuc a: ";
	cin>>a;
	cout<<"Nhap so phuc b: ";
	cin>>b;
	cout<<"So phuc a la: "<<a;
	cout<<"So phuc b la: "<<b;
	SP c,d;
	c=a+b;
	d=a-b;
	cout<<"SP c: "<<c;
	cout<<"SP d: "<<d;
	return 0;
}