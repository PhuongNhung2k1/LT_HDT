#include<bits/stdc++.h>
using namespace std;

class hhcn{
	private:
		float a, b, c;
	public:
		friend istream& operator>>(istream& x, hhcn &y);
		friend ostream& operator<<(ostream& x, hhcn y);
		float thetich();
		hhcn operator+(hhcn &x);
		hhcn operator-(hhcn &x);
		hhcn operator>(hhcn x);
		hhcn operator<(hhcn x);
};
istream& operator>>(istream& x, hhcn &y){
	cout<< "Nhap chieu dai: "; cin>> y.a;
	cout<< "Nhap chieu rong: "; cin>> y.b;
	cout<< "Nhap chieu cao: "; cin>> y.c;
	return x;
}
ostream& operator<<(ostream& x, hhcn y){
	x<< "Dai rong cao lan luot la: "<< y.a<< " "<< y.b<< " "<< y.c;
	
	return x;
}
float hhcn::thetich(){
	
	return a*b*c;
}
hhcn hhcn::operator+(hhcn &x){
	
	cout<< thetich() + x.thetich();
}
hhcn hhcn::operator-(hhcn &x){
	
	cout<< thetich() - x.thetich();
}

hhcn hhcn::operator>(hhcn x){
	if(thetich() > x.thetich()){
		cout<<"A > B";
	}
}
hhcn hhcn::operator < (hhcn x){
	if(thetich() < x.thetich()){
		cout<<"A < B";
	}
}
int main(){
	hhcn A, B,tong,hieu;
	cout<< "Nhap thong tin hinh A: "<< endl;
	cin>> A;
	cout<< A;
	cout<< "\nThe tich A la: "<< A.thetich()<< endl;
	cout<< "\nNhap thong tin hinh B: "<< endl;
	cin>> B;
	cout<< B;
	tong = A + B;
	hieu = A-B;
	cout<< "\nThe tich B la: "<< B.thetich()<< endl;
	cout<< "\nTong 2 the tich la: "<< tong;
	cout<< "\nHieu 2 the tich la: "<<hieu<<endl;
	A<B;
	A>B;
	
	return 0;
}
