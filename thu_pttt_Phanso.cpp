#include<bits/stdc++.h>
using namespace std;
class Phanso{
	private:
		float tu, mau;
	public:
		void nhap();
		void xuat();
		Phanso(){
			tu= mau=0;
		}
		Phanso(float x, float y){
			 tu = x;
			 mau = y;
		}
		Phanso operator +(Phanso y);
		Phanso operator -(Phanso y);
		Phanso operator *(Phanso y);
		Phanso operator /(Phanso y);
		float operator ++();
};
void Phanso::nhap(){
	cout<<"\n nhap tu:"; cin>>tu;
	cout<<"\n nhap mau:"; cin>>mau;
}
void Phanso::xuat(){
	cout<<tu<<"/"<<mau<<endl;
}
Phanso Phanso ::operator+(Phanso y){
	Phanso k;
	k.tu = tu*y.mau + y.tu*mau;
	k.mau = mau*y.mau;
	return k;
}
Phanso Phanso ::operator-(Phanso y){
	Phanso k;
	k.tu = tu*y.mau - y.tu*mau;
	k.mau = mau*y.mau;
	return k;
}
Phanso Phanso ::operator*(Phanso y){
	Phanso k;
	k.tu = tu*y.tu;
	k.mau = mau*y.mau;
	return k;
}
Phanso Phanso ::operator/(Phanso y){
	Phanso k;
	k.tu = tu*y.mau;
	k.mau = mau*y.tu;
	return k;
}
float Phanso::operator ++(){
	return tu/mau;
}
int main(){
	Phanso a(2,5),b,c;
	b.nhap();
	c= a/b;
	a.xuat();
	b.xuat();
	c.xuat();
	cout<<"\n gia tri cua phan so:"<<++c<<endl;
	return 0;
}
