#include<bits/stdc++.h>
using namespace std;
class Electronic{
	protected :
		float congsuat;
		float dienap;
	public:
		Electronic(float cs, float da){
			congsuat = cs;
			dienap = da;
		}
};
class Maygiat:public Electronic{
	private:
		char dungtich[10];
		char loai[10];
	public:
		Maygiat(float cs, float da,char *dt, char *Loai):Electronic(cs,da){
			strcpy(dungtich, dt);
			strcpy(loai,Loai);
		}
		void xuat();
};
class Tulanh:public Electronic{
	private:
		float dungtich;
		int songan;
	public:
		Tulanh(float cs, float da,float dt,int sn):Electronic(cs,da){
			dungtich =dt;
			songan =sn;
		}
		void Xuat();
};

int main(){
	// khai bao 1may giat va 1 tu lanh va khoi gan gia tri cho a va b
//	Tulanh a(2.33,120,"10",4);
	Maygiat b(3.5,220,20,"Sony");
//	a.Xuat();
	b.xuat();
	return 0;
}
