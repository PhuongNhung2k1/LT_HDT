#include<bits/stdc++.h>
using namespace std;
//cau2

//class TTB2{
//	private:
//		float a, b , c;
//	public:
//		TTB2(){
//			a = b = c = 0.0;
//		}
//		TTB2(float x, float y, float z){
//			a = x;
//			b = y ;
//			c = z ;
//		}
//		TTB2 operator - ();
//		friend istream &operator >>(istream &is , TTB2 &x);
//		friend ostream &operator <<(ostream &os, TTB2 x);
//		TTB2 operator ++ ();
//};
//istream &operator >>(istream &is , TTB2 &x){
//	
//	cout<<"Nhap he so a: "; is>>x.a;
//	cout<<"Nhap he so b: "; is>>x.b;
//	cout<<"Nhap he so c: "; is>>x.c;
//	return is;
//}
//TTB2 TTB2:: operator - (){
//	this->a = -a;
//	this->b = -b;
//	this->c = -c;
//	
//	return *this;
//}
//ostream &operator <<(ostream &os, TTB2 x){
//
//	os<<x.a<<"x^2";
//	if(x.b < 0){
//		os<<x.b<<"x ";
//	}else{
//		os<<" + "<<x.b<<"x ";
//	}
//	if(x.c < 0){
//		os<<x.c<<" = 0 ";
//	}else{
//		os<<" + "<<x.c<<" = 0";
//	}
//	return os;
//}
//TTB2 TTB2:: operator ++(){
//	int max = a;
//	if(b > max) max = b;
//	if(c > max) max =c;
//	cout<< max;
//}
//
//int main(){
//	TTB2 a,b;
//	cout<<"nhap vao 1 tam thuc bac 2:"<<endl;
//	cin>>a;
//	b= -a;
//	cout<<"Tam Thuc sau khi doi dau : "<<b<<endl;
//	cout<<" gia tri cua he so lon nhat :";
//	++b;
//	return 0;
//}
//cau1

class Phongmay{
	private:
		char mapm[10];
		char tenphong[20];
		char nguoiql[20];
	public:
		void nhap();
		void xuat();
	friend class BangTK;
};
class Thietbi{
	private:
		char matb[10];
		char tentb[20];
		char tinhtrang[20];
		int soluong;
	public:
		void nhap();
		void xuat();
		friend class BangTK;
};
class BangTK{
	private:
		char ngaylap[20];
		char nguoilap[20];
		Phongmay y;
		Thietbi *x;
		int n;
	public:
		void nhap();
		void xuat();
};
void Thietbi::nhap(){
	cout<<"ma tb :" ;fflush(stdin); gets(matb);
	cout<<"ten tb :" ;fflush(stdin); gets(tentb);
	cout<<"tinh trang :" ;fflush(stdin); gets(tinhtrang);
	cout<<"so luong "; cin>>soluong;
}
void Thietbi ::xuat(){
	cout<<setw(10)<<matb;
	cout<<setw(10)<<tentb;
	cout<<setw(10)<<soluong<<endl;
}
void tieude(){
	cout<<setw(10)<<"ma tb";
	cout<<setw(10)<<"ten tb";
	cout<<setw(10)<<"so luong"<<endl;
}
void BangTK ::nhap(){
	cout<<"ngay lap:";  fflush(stdin); gets(ngaylap);
	cout<<"nguoi lap:"; fflush(stdin); gets(nguoilap);
	cout<<"ma phong:"; fflush(stdin); gets(y.mapm);
	cout<<"ten phong:"; fflush(stdin); gets(y.tenphong);
	cout<<"nguoi quan ly:"; fflush(stdin); gets(y.nguoiql);
	cout<<"nhap so thiet bi:"; cin>>n;
	x = new Thietbi[n];
	for(int i=0 ; i<n ; i++){
		cout<<"\n Thiet bi "<<i+1<<endl;
		x[i].nhap();
	}
}
void BangTK::xuat(){
	cout<<"Ngay lap:"<<ngaylap;
	cout<<setw(20)<<"Nguoi lap: "<<nguoilap<<endl;
	cout<<"Ma phong may :"<<y.mapm;
	cout<<setw(20)<<"Ten phong may:"<<y.tenphong<<endl;
	cout<<"Nguoi quan li: "<<y.nguoiql<<endl;
	tieude();
	for(int i=0 ; i<n ; i++){
		x[i].xuat();
	}
	int tongtb =0;
	for(int i=0; i<n ; i++){
		tongtb+=x[i].soluong;
	}
	cout<<setw(10)<<"Tong so thiet bi:"; cout<<setw(40)<<tongtb<<endl;
	
}
int main(){
	BangTK btk;
	btk.nhap();
	cout<<"----------------Thong tin vua thong ke----------------------"<<endl;
	btk.xuat();
	return 0;
}

