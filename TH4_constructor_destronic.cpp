#include<bits/stdc++.h>
using namespace std;
class Electronic{
	protected:
		float congsuat;
		long dienap;
	public:
		Electronic(){
			congsuat =20;
			dienap =220;
		}
};
class Maygiat:public Electronic{
	private:
		long dungtich;
		char loai[20];
	public:
		Matgiat();
		void xuat();
};
class Tulanh:public Electronic {
	private:
		char dungtich[10];
		int songan;
	public:
		Tulanh();
		void xuat(){
			cout<<setw(10)<<dungtich<<setw(20)<<songan<<setw(15)<<congsuat<<setw(15)<<dienap<<endl;
		}
};
int main(){
	Tulanh tl;
	tl.xuat();
	return 0;
}
