#include<bits/stdc++.h>
using namespace std;

class BENHNHAN; 
class NGUOI 
{ 
protected: 
 char HT[30]; 
 int TUOI; 
public: 
 void nhap(); 
 void xuat(); 
 friend void COUNT(BENHNHAN *K, int n); 
}; 
void NGUOI::nhap() 
{ 
 cout<<"Ho ten: "; fflush(stdin); gets(HT); 
 cout<<"Tuoi : "; cin>>TUOI; 
} 
void NGUOI::xuat() 
{ 
 cout<<"Ho ten: "<<HT<<". Tuoi: "<<TUOI<<endl; 
} 
class BENHVIEN 
{ 
 char TENBV[30]; 
 char DCBV[30]; 
 NGUOI GD; 
 friend class BENHNHAN; 
}; 
class BENHNHAN:public NGUOI 
{ 
 char MA[30]; 
 char TIENSU[30]; 
 char CHANDOAN[30]; 
 BENHVIEN x; 
public: 
 void nhap(); 
 void xuat(); 
 friend void UPDATE(BENHNHAN *K, int n); 
}; 
void BENHNHAN::nhap() 
{ 
 cout<<"MA BN: "; fflush(stdin); gets(MA); 
 NGUOI::nhap(); 
 cout<<"TIEN SU: "; fflush(stdin); gets(TIENSU); 
 cout<<"CHUAN DOAN:"; fflush(stdin); gets(CHANDOAN); 
 cout<<"TEN BV: "; fflush(stdin); gets(x.TENBV); 
 cout<<"DC BV : "; fflush(stdin); gets(x.DCBV); 
 cout<<"Giam doc Benh Vien: "<<endl; 
 x.GD.nhap(); 
} 
void BENHNHAN::xuat() 
{ 
 cout<<"MA BN: "<<MA<<endl; 
 NGUOI::xuat(); 
 cout<<"TIEN SU: "<<TIENSU<<endl; 
 cout<<"CHUAN DOAN:"<<CHANDOAN<<endl; 
 cout<<"TEN BV: "<<x.TENBV<<endl; 
 cout<<"DC BV : "<<x.DCBV<<endl; 
 cout<<"Giam doc benh vien:"<<endl; 
 x.GD.xuat(); 
 cout<<endl; 
} 
//Bonus 1: 
void COUNT(BENHNHAN *K, int n) 
{ 
 int d=0; 
 for(int i=0; i<n; i++) 
 if(K[i].TUOI>30) d++; 
 cout<<"SO BN LON HON 30 TUOI: "<<d<<endl; 
} 
//Bonus 2: 
void UPDATE(BENHNHAN *K, int n) 
{ 
 for(int i=0; i<n; i++) 
 if(strcmp(K[i].MA,"BN01")==0) 
 K[i].TUOI = 20; 
} 
int main() 
{ 
 BENHNHAN *K; int n; 
 cout<<"n="; cin>>n; 
 K = new BENHNHAN[n]; 
 for(int i=0; i<n; i++) 
 K[i].nhap(); 
 for(int i=0; i<n; i++) 
 K[i].xuat(); 
 COUNT(K, n); 
 UPDATE(K, n); 
 for(int i=0; i<n; i++) 
 K[i].xuat(); 
} 