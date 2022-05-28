#include<bits/stdc++.h>
using namespace std;
class Diem{
	private:
		float x,y,z;
	public:
		Diem(){
			x=y=z=0;
		}
		Diem(float a, float b, float c){
		    x = a;
		    y = b;
		    z = c;
		}
	    Diem operator + (Diem d1);
	    Diem operator - (Diem d1);
	friend istream& operator >> (istream& d1,Diem& d2);
	friend ostream& operator << (ostream& d1,Diem& d2);
};
Diem Diem::operator +(Diem d1){
	Diem bk;
	bk.x = x + d1.x;
	bk.y = y + d1.y;
	bk.z = z + d1.z;
	return bk;
}
Diem Diem::operator -(Diem d1){
	Diem bk;
	bk.x = x - d1.x;
	bk.y = y - d1.y;
	bk.z = z - d1.z;
	return bk;
}
istream& operator >> (istream& d1,Diem& d2){
	d1>>d2.x;
	d1>>d2.y;
	d1>>d2.z;
	return d1;
}
ostream& operator << (ostream& d1,Diem& d2){
	d1<<setw(5)<<d2.x<<setw(5)<<d2.y<<setw(5)<<d2.z<<endl;
}
int main(){
	Diem m(2,4,5),n,t,h;
	cout<<"\n nhap toa do n:";
	cin>>n;
	t= m+n;
	h= m-n;
	cout<<"\n tong 2 diem la"<<t<<endl;
	cout<<"\n hieu 2 diem la"<<h;
	return 0;
}





//class PS{
//	private:
//		float tu, mau;
//	public:
//		friend istream &operator>>(istream& x,PS& y);
//		friend ostream &operator<<(ostream& x, PS y);
//};
//istream& operator >>(istream& x,PS& y){
//	cout<<"\n nhap tu so:";
//	x>>y.tu;
//	cout<<"\n nhap mau so:";
//	x>>y.mau;
//	return x;
//}
//ostream& operator <<(ostream& x,PS y){
//	x<<y.tu<<"/"<<y.mau<<endl;
//	return x;
//}
//int main(){
//	PS x,y;
//	cout<<"\n nhap PS x:";cin>>x;
//	cout<<"\n nhap PS y:";cin>>y;
//	cout<<"phan so vua nhap :";
//	cout<<x<<endl<<y<<endl;
//	return 0;
//}
