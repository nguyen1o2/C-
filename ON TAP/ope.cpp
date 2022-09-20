#include<bits/stdc++.h>
using namespace std;

class MANG{
	int *a,n;
	public:
	    MANG(){
	    	n=0;
	    	*a=0;
		}
		MANG(int *x,int m){
		    for(int i=0;i<m;i++){
				x[i]=x[i];
			} 
		}
		friend istream&operator>>(istream&in,MANG&x){
			cin>>x.n;
			x.a=new int[x.n];
			for(int i=0;i<x.n;i++){
				cout<<"a["<<i<<"]=";
				in>>x.a[i];
			}
			return in;
		}
		friend ostream&operator<<(ostream&ou,MANG&x){
			for(int i=0;i<x.n;i++){
				ou<<x.a[i]<<" ";
			}
			return ou;
		}
//		bool operator=(MANG&x){
//			int count=0;
//			for(int i=0;i<n;i++){
//				if(x.a[i]==x.a[i+1])count++;
//			}
//			if(count==n-1) return true;
//			return false;
//		}
//		int tong(){
//			int tong=0;
//			for(int i=0;i<n;i++){
//				tong+=a[i];
//			}
//			return tong;
//		}
//		bool operator==(MANG &x){
//			if(tong()==x.tong() && n==x.n) return true;
//			return false;
//		}	
};
int main(){
	MANG a,b;
	cout<<"Nhap mang a:";cin>>a;
	cout<<"Mang a la: "<<a;
	cout<<"Nhap mang b:";cin>>b;
	cout<<"Mang b la: "<<b;
////	if(a=a) cout<<"cac phan tu trong mang bang nhau"<<endl;
////	else cout<<"Khac nhau"<<endl;
//	if(a==b) cout<<"= nhau";
//	else cout<<"!= nhau";
	return 0;
}