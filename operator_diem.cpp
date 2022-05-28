#include<bits/stdc++.h>
using namespace std;
class Diem{
	private:
		float x, y,z;
	public:
		Diem(){}
		Diem(float a, float b, float c){
			x = a;
			y = b;
			z = c;
			
		}
		void xuat(){
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
		friend istream& operator >> (istream& d1,Diem& d2);
		friend ostream& operator << (ostream& d1,Diem d2);
};
Diem Diem:: operator + (Diem d1, Diem d2){
			Diem tam;
			tam.x=d1.x + d2.x;
			tam.y = d1.y + d2.y;
			tam.z = d1.z + d2.z;
			return tam;
		}
int main(){
	Diem d1(7,8,9), d2(4,7,6),d3;
	d3= d1+d2;
	d1.xuat();
	d2.xuat();
	cout<<"\n toa do 2 diem la:";
	d3.xuat();
	return 0;
}
