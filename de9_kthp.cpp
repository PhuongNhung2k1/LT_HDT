#include<bits/stdc++.h>
using namespace std;
class Mang{
	private:
		int *a;
		int n;
	public:
		friend istream &operator >>(istream &is, Mang &x);
		friend ostream &operator <<(ostream &os, Mang x);
		Mang operator + (Mang x);
		Mang operator - (Mang x);
		Mang operator - ();
};
istream &operator >>(istream &is, Mang &x){
	cout<<"nhap phan tu cua mang:"; is>>x.n;
	x.a = new int[x.n];
	for(int i=0 ;i<x.n; i++){
		cout<<"a["<<i<<"]=";
		is>>x.a[i];
	}
	return is;
}
ostream &operator <<(ostream &os, Mang x){
	for(int i=0 ; i< x.n ; i++){
		os<<x.a[i]<<"  ";
	}
	return os;
}
Mang Mang:: operator + (Mang x){
	Mang tong;
	tong.n=n;
	for(int i=0 ; i<tong.n; i++){
		tong.a[i]= this->a[i]+x.a[i];
	}
	return tong;
}
Mang Mang:: operator - (Mang x){
	Mang hieu;
	hieu.n=n;
	for(int i=0 ; i<hieu.n; i++){
		hieu.a[i]= this->a[i]-x.a[i];
	}
	return hieu;
}
int main(){
	Mang m1, m2,tong;
	cin>>m1;
	cin>>m2;
	tong = m1+m2;
	cout<<"Tong hai mang"<<tong<<endl;
	return 0;
}
