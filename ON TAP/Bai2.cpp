#include<bits/stdc++.h>
using namespace std;

class HOP{
	float H,R,G;
	public:
		HOP(){
			H=R=G=0;
		}
		HOP(float a,float b,float c){
			a=H;
			b=R;
			c=G;
		}
		friend istream& operator>>(istream&in,HOP &x){
			cout<<"Nhap H = ";
			in>>x.H;
			cout<<"Nhap R = ";
			in>>x.R;
			cout<<"Nhap G = ";
			in>>x.G;
			return in;
		}
		friend ostream& operator<<(ostream&out,HOP &x){
			out<<"H = "<<x.H<<endl;
			out<<"R = "<<x.R<<endl;
			out<<"G = "<<x.G<<endl;
			return out;
		}
		
		float DT(){
			return R*R*M_PI;
		}
		bool operator<(HOP a){
		 	return this->DT()< a.DT();
		}
//		operator+(HOP y){
//			HOP tg;
//			tg.R=R;
//			tg.G=G+y.G;
//			tg.H=H+y.H;
//			return tg;
//		}
};
int main(){
	HOP a,b;
	cin>>a;
	cin>>b;
	cout<<a;
	cout<<b;
	if(a<b) cout<<"yes";
	else cout<<"no";
	return 0;
}