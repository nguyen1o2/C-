#include<bits/stdc++.h>
using namespace std;

class BINHCHUA{
	private:
	int CD,CR,CC;
	public:
        BINHCHUA(){
           CD=CR=CC=0;	
        }
        BINHCHUA(int cd,int cr,int cc){
	        CD=cd;
	        CR=cr;
	        CC=cc;
        }
		friend istream&operator>>(istream&in,BINHCHUA&x){
			cout<<"Nhap chieu dai: ";in>>x.CD;
			cout<<"Nhap chieu rong: ";in>>x.CR;
			cout<<"Nhap chieu cao: ";in>>x.CC;
			return in;
		}
		friend ostream&operator<<(ostream&ou,BINHCHUA&x){
			ou<<"Chieu dai: "<<x.CD<<endl;
			ou<<"Chieu rong: "<<x.CR<<endl;
			ou<<"Chieu cao: "<<x.CC<<endl;
			return ou;
		}
		int TT(){
			return CD*CR*CC;
		}
		bool operator==(BINHCHUA x){
			if(TT()==x.TT()) return 1;
			return 0;
		}
		bool operator!=(BINHCHUA x){
			if(CD*CD*CD==TT()) return 1;
			return 0;
		}
};
int main(){
	BINHCHUA a,b;
	cin>>a;
	cin>>b;
	cout<<"Binh a: "<<endl<<a;
	cout<<"Binh b: "<<endl<<b;
	if(a==b) cout<<"TRUE"<<endl;
	else cout<<"FALSE"<<endl;
	if(b!=b) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}


