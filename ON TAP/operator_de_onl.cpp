#include<bits/stdc++.h>
using namespace std;

class MANG{
	private:
		int n;
		int *a;
	public:
		friend istream&operator>>(istream&in,MANG &x){
			cout<<"n= ";in>>x.n;
			x.a=new int [x.n];
			for(int i=0;i<x.n;i++){
				cout<<"a["<<i<<"]=";
				in>>x.a[i];
			}
			return in;
		}
		friend ostream&operator<<(ostream&ou,MANG x){
			for(int i=0;i<x.n;i++){
				ou<<x.a[i]<<" ";
			}
			return ou;
		}
		bool operator=(MANG &x){
			int dem=0;
			for(int i=0;i<n;i++){
				if(x.a[i]==x.a[i+1]){
					dem++;
				}		
			}
			if (dem==x.n-1){
				return true;
			}
			return false;
		}	
};
int main(){
	MANG a;
	cin>>a;
	cout<<a;
	if(a=a) cout<<"TRUE";
	else cout<<"FALSE";
	return 0;
}