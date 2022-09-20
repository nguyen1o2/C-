#include<bits/stdc++.h>
using namespace std;

class HT{
	private:
		float R;
	public:
		HT(){
		    R=0;
		}
		HT(float r){
			R=r;
		}
        float DT(){
        	return M_PI*R*R;
		}
		float operator+(HT b){
			return DT()+b.DT();
		}
        float operator-(HT b){
        	return DT-b.DT();
		}
		
};
int main(){
    HT HT1(5),HT2(4);
return 0;
}