#include<bits/stdc++.h>
using namespace std;

class HT{
	private: 
	    float a,b,h;
	public:
		HT(){
		  	a=b=h=0;
		  }
		HT(float x,float y,float z){
		  	x=a;
		  	y=b;
		  	z=h;
		  }
		friend istream&operator>>(istream&in,HT&x){
		  	cout<<"Nhap day lon a: ";in>>x.a;
		  	cout<<"Nhap day nho b: ";in>>x.b;
		  	cout<<"Nhap chieu cao h: ";in>>x.h;
		  	return in;
		  }
		friend ostream&operator<<(ostream&out,HT&x){
		  	out<<"Day lon a = "<<x.a<<endl;
		  	out<<"Day nho b = "<<x.b<<endl;
		  	out<<"Chieu cao h = "<<x.h<<endl;
		  	return out;
		  }
		float DT(){
		  	return (a+b)*h/2;
		  }
        HT operator+(HT x){
        	HT tg;
        	tg.a=a+x.a;
        	tg.b=b+x.b;
        	tg.h=h+x.h;
        	return tg;
		} 
		bool operator==(HT x){
			if (DT()==x.DT())
			return 1;
			else return 0;
		}	
};
int main(){
	HT A,B,C;
	cout<<"Nhap thong tin cua hinh thang A"<<endl;
	cin>>A;
	cout<<"Nhap thong tin cua hinh thang B"<<endl;
	cin>>B;
	cout<<"Thong tin cua hinh thang A"<<endl;
	cout<<A;
	cout<<"Thong tin cua hinh thang B"<<endl;
	cout<<B;
	C=A+B;
	ofstream f("tep.TXT");//ghi bo sung
	f<<"Thong tin cua hinh thang A"<<endl;
	f<<A;
	f<<"Thong tin cua hinh thang B"<<endl;
	f<<B;
	cout<<"Thong tin cua hinh thang C"<<endl<<C;
	f<<"Thong tin cua hinh thang C"<<endl<<C;
	if(A==B){
		cout<<"Hai hinh thang bang nhau"<<endl;
	}
	else{
		cout<<"Hai hinh thang khong bang nhau"<<endl;
	}
	return 0;
}