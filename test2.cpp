#include<iostream>
using namespace std;
/*VD:x=3,y=4;
f(3,7) x<y 
=>f(x,y)= f(3,-2)+2 (y<x)
=>f(x,y)=3+2
*/
float f(float x, float y){
	if(y>=x) return x;
	return f(x,y-2*x)+2;
}
int main(){
	float x,y;
	cout<<"Nhap x= ";cin>>x;
	cout<<"Nhap y= ";cin>>y;
	cout<<"Ket qua la: "<<f(x,y);
	return 0;
}
