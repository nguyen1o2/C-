#include<iostream>
#include<math.h>
using namespace std;

class PTB2{
	private:
	float a;
	float b;
	float c;
	float delta;
	public:
		void nhap();
		void GPT();
};
 void PTB2::nhap(){
	cout<<"Nhap a: ";cin>>a;
	cout<<"Nhap b: ";cin>>b;
	cout<<"Nhap c: ";cin>>c;
}
void PTB2::GPT(){
	if(a==0){
		if(b==0){
			if(c==0){
				cout<<"PT vo so nghiem";
			}
			else{
				cout<<"PT vo nghiem";
			}
		}
		else{
			cout<<"PT co nghiem x= "<<-c/b;
		}
	}
	else{
		delta=b*b-4*a*c;
		if(delta>0){
			cout<<"PT co nghiem \nx1="<<(-b+sqrt(delta))/2*a;
			cout<<"\nx2="<<(-b-sqrt(delta))/2*a;
		}
		else if(delta==0){
			cout<<"PT co nghiem kep x="<<-b/2*a;
		}
		else{
			cout<<"PT vo nghiem";
		}
	}
}
int main(){
	PTB2 pt1;
	pt1.nhap();
	pt1.GPT();
	return 0;
}