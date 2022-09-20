#include<iostream>
#include<math.h>
using namespace std;

class HOCSINH{
	private:
		char hoVaTen[30];
		char ngaySinh[30];
		char gioiTinh[10];
		float DTB;
		char XLDD[10];
	public:
		void sethoVaTen(char *ch){
			strcpy(hoVaTen, ch);
		}
		char *gethoVaTen(){
			return hoVaTen;
		}
		void setngaySinh(char *str){
			strcpy(ngaySinh, str);
		}
		char *getngaySinh(){
			return ngaySinh;
		}
		void setgioiTinh(char *gt){
			strcpy(gioiTinh, gt);
		}
		char *getgioiTinh(){
			return gioiTinh;
		}
		void nhap(){
			sethoVaTen("Nguyen Van Nguyen");
			setngaySinh("15/04/2002");
	    	setgioiTinh("Nam");
		}
		void xuat(){
			cout<<"Ho va ten:"<<gethoVaTen()<<endl;
			cout<<"ngay sinh: "<<getngaySinh()<<endl;
			cout<<"gioi tinh: "<<getgioiTinh();
		}
	};
int main(){
	HOCSINH hs1;
	hs1.nhap();
	hs1.xuat();
}