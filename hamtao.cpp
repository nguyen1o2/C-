#include<bits/stdc++.h>
using namespace std;

class HocSinh{
	private:
	char hoTen[30];
	int tuoi;
	float diemToan,diemLy,diemHoa;
	public:
		HocSinh(){
			strcpy(hoTen,"N V N");
			tuoi=20;
			diemToan=8.0;
			diemLy=7.0;
			diemHoa=6.0;
		}
		HocSinh(char *ht,int age,float toan,float ly,float hoa){
			strcpy(hoTen,ht);
			tuoi=age;
			diemToan=toan;
			diemLy=ly;
			diemHoa=hoa;
		}
		void xuat(){
			cout<<"Ho ten: "<<hoTen<<endl;
			cout<<"Tuoi: "<<tuoi<<endl;
			cout<<"Diem toan: "<<diemToan<<endl;
			cout<<"Diem ly: "<<diemLy<<endl;
			cout<<"Diem hoa: "<<diemHoa<<endl;
		}
};
int main(){
	HocSinh hs1,hs2("nguyen van nguyen",20,8.0,9.0,10.0);
	cout<<"thong tin hoc sinh thu nhat"<<endl;
	hs1.xuat();
	cout<<"thong tin hoc sinh thu hai"<<endl;
	hs2.xuat();
	return 0;	
}