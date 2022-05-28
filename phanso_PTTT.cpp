#include<bits/stdc++.h>
using namespace std;
class PS{
	private:
		float tu;
		float mau;
	public:
		void nhap();
		void xuat();
		PS operator + (PS y);
		PS operator - (PS y);
		PS operator - ();// doi dau
		float operator ++();
};
void PS::nhap(){
	cout<<"\n nhap tu :"; cin>>tu;
	cout<<"\n nhap mau:"; cin>>mau;
}
void PS::xuat(){
	cout<<tu<<"/"<<mau<<endl;
}
PS PS ::operator + (PS y){
     PS k;
	 k.tu = tu*y.mau + mau*y.tu;
	 k.mau = mau*y.mau;
	 return k;
}
PS PS ::operator - (PS y){
	 PS k;
	 k.tu = tu*y.mau - mau*y.tu;
	 k.mau = mau*y.mau;
	 return k;
}
PS PS ::operator -(){
	PS k;
	k.tu = -tu;
	k.mau = mau;
	return k;
}
float PS ::operator ++(){
	return tu/mau;
}
int main(){
	PS a,b,c;
	a.nhap();
	b.nhap();
	c= a+b;
	cout<<"\n tong 2 phan so :";
	c.xuat();
	c =-c;
	c.xuat();
	// khong the cout<<x<<y; duoc;
	// thay bang 	cout<<a.xuat()<<endl;cout<<b.xuat();
	cout<<"gia tri cua phan so la:"<<++c;
	return 0;
}
