#include<bits/stdc++.h>
using namespace std;
 
class IO{
	private:
		int a,b,c;
		public:
			friend istream& operator>>(istream &in,IO &x){
				in>>x.a>>x.b>>x.c;
				return in;
			}
			friend ostream& operator<<(ostream &ou,IO &x){
				ou<<"canh a= "<<x.a<<endl<<"canh b= "<<x.b<<endl<<"canh c= "<<x.c<<endl;
				return ou;
			}
			operator+(IO x){
                int tg=x.a+x.b+x.c;
                return tg;
			}
}; 
int main(){
	IO tamgiac1,tamgiac2;
	cout<<"Nhap canh cua tam giac1: ";
	cin>>tamgiac1;
	cout<<"3 canh cua tam giac 1 la\n"<<tamgiac1;
	cout<<"Nhap canh cua tam giac2: ";
	cin>>tamgiac2;
	cout<<"3 canh cua tam giac 2 la\n"<<tamgiac2;
}