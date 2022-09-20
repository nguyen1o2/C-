#include<bits/stdc++.h>
using namespace std;

class GianHang;
class Hang{
	protected:
		char maPT[10],loai[30],namSX[15],hangSX[30];
		public:
			void nhap();
			void xuat();
};

class Hop : public Hang{
    private:
	    char kieuDang[30],chatLieu[30];
		float theTich;
		char ghiChu[30];
		public:
		     void nhap();
			 void xuat();
			 friend void SuaTen(GianHang &GH);
			 friend void SapXep(GianHang GH);			 	
};

class GianHang{
	private:
		char maGH[10],tenGH[30];
		float soLo;
		Hop *x;
		int n;
		public:
			void nhap();
			void xuat();
			friend void SapXep(GianHang GH);
			friend void SuaTen(GianHang &GH);
};

void Hang::nhap(){
	cout<<"Nhap maPT: ";fflush(stdin);gets(maPT);
	cout<<"Nhap loai: ";fflush(stdin);gets(loai);
	cout<<"Nhap namSX: ";fflush(stdin);gets(namSX);
	cout<<"Nhap hangSX: ";fflush(stdin);gets(hangSX);
}

void Hang::xuat(){
	cout<<maPT<<setw(10)<<loai<<setw(10)<<namSX<<setw(10)<<hangSX<<setw(10);
}

void Hop::nhap(){
	Hang::nhap();
	cout<<"Nhap kieuDang: ";fflush(stdin);gets(kieuDang);
	cout<<"Nhap chatLieu: ";fflush(stdin);gets(chatLieu);
	cout<<"Nhap theTich: ";cin>>theTich;
	cout<<"Nhap ghiChu: ";fflush(stdin);gets(ghiChu);
}

void Hop::xuat(){
	Hang::xuat();
	cout<<kieuDang<<setw(10)<<chatLieu<<setw(10)<<theTich<<setw(10)<<ghiChu<<endl;
}

void GianHang::nhap(){
	cout<<"Nhap maGH: ";fflush(stdin);gets(maGH);
	cout<<"Nhap tenGH: ";fflush(stdin);gets(tenGH);
	cout<<"Nhap soLo: ";cin>>soLo;
	cout<<"Nhap soHop: ";cin>>n;
	x = new Hop [n];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin hop thu: "<<i+1<<endl;
		x[i].nhap();
	}
}

void GianHang::xuat(){
	cout<<"maGH: "<<maGH<<endl;
	cout<<"tenGH: "<<tenGH<<endl;
	cout<<"soLo: "<<soLo<<endl;
	cout<<"soHop: "<<n<<endl;
	cout<<"maPT"<<setw(10)<<"loai"<<setw(10)<<"namSX"<<setw(10)<<"hangSX"<<setw(10)<<"kieuDang"<<setw(10)<<"chatLieu"<<setw(10)<<"theTich"<<setw(10)<<"ghiChu"<<endl;
	for(int i=0;i<n;i++){
		x[i].xuat();
	}
}

void SuaTen(GianHang &GH){
	strcpy(GH.tenGH,"NHUA GIA DUNG");
}

void SapXep(GianHang GH){
	Hop tg;
	for(int i=1;i<GH.n;i++){
		for(int j=GH.n-1;j>=i;j--){
			if(GH.x[j].theTich<GH.x[j-1].theTich){
				tg=GH.x[j];
				GH.x[j]=GH.x[j-1];
				GH.x[j-1]=tg;
			}
		}
	}
}

int main(){
	GianHang GH;
	GH.nhap();
	cout<<"================================THONG TIN GIANHANG==============================="<<endl;	
	GH.xuat();
	cout<<"===========================THONG TIN GIANHANG SUA KHI SUA========================="<<endl;
	SuaTen(GH);
	GH.xuat();	
    cout<<"===========================THONG TIN GIANHANG SAU KHI SX========================="<<endl;
	SapXep(GH);
	GH.xuat();
	return 0;
}