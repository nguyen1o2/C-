#include<iostream>
using namespace std;

class PTB1{
	private:
		float a;
		float b;
	public:
		void nhap();
		void GPT();	
};
void PTB1::nhap(){
	cout<<"Nhap a: ";cin>>a;
	cout<<"Nhap b: ";cin>>b;
}
void PTB1::GPT(){
	if(a==0){
		if(b==0){
			cout<<"PT vo so nghiem";
		}
		else{
		    cout<<"PT vo nghiem";
		}
	}
	else{
		cout<<"PT co nghiem x= "<<-b/a;
	}
}
int main(){
	PTB1 pt1;
	pt1.nhap();
	pt1.GPT();
}