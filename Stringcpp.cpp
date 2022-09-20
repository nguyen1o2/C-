#include<bits/stdc++.h>
using namespace std;

int demchuthuong(char *str){
	int dem=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='a' && str[i]<='z')
		dem++;
	}
	return dem;
}

int demtu(char *str){
	int dem=1;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' ' && str[i+1]!=' ') dem++;
	}
	return dem;
}

int demkhoangtrang(char *str){
	int dem=0;
		for(int i=0;i<strlen(str);i++){
		if(isspace(str[i])) dem++;	
    }
    return dem;
}

void check(char *str){
	int dem=0;
	int count=demtu(str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' ' && str[i+1]!=' ') dem++;
	}
	if(dem==0 && count<=7){
		cout<<"Chuoi hop le!"<<endl;
	}
	else{
		cout<<"Chuoi khong hop le!"<<endl;
	}
}
void chen(char *str,char ch,int vitri){
	for(int i=strlen(str);i>vitri;i--){
		str[i]=str[i-1];
	}
	str[vitri]=ch;
	str++;
}
int main(){
	char str[10000];
	cout<<"Nhap vao 1 chuoi: ";
	gets(str);
	cout<<"So chu thuong la: "<<demchuthuong(str)<<endl;
	cout<<"So tu: "<<demtu(str)<<endl;
	cout<<"So khoang trang: "<<demkhoangtrang(str)<<endl;
	check(str);
	chen(str,'C',strlen(str));
	puts(str);
	return 0;
}