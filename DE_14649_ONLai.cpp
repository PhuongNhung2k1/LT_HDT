#include<bits/stdc++.h>
using namespace std;
class lichthi{
	private:
		char ngay[20];
		char buoi[10];
		char monthi[20];
		int thoigian;
	public:
		void nhap();
		void xuat();
		friend class LichthiTHPTQG;
};
class LichthiTHPTQG{
	private:
		int nam;
		int sodiemthi;
		int sothisinh;
		int sogv;
		int n;
		lichthi *x;
	public:
		void nhap();
		void xuat();
};
void lichthi::nhap(){
	cout<<"nhap ngay thi :"; fflush(stdin); gets(ngay);
	cout<<"nhap buoi thi :"; fflush(stdin); gets(buoi);
	cout<<"nhap mon thi :"; fflush(stdin); gets(monthi);
	cout<<"nhap thoi gian thi :"; cin>>thoigian;
}
void tieude(){
	cout<<setw(10)<<"ngay";
	cout<<setw(20)<<"buoi";
	cout<<setw(20)<<"mon thi";
	cout<<setw(20)<<"thoi gian"<<endl;
}
void lichthi::xuat(){
	cout<<setw(10)<<ngay;
	cout<<setw(20)<<buoi;
	cout<<setw(20)<<monthi;
	cout<<setw(20)<<thoigian<<endl;
}
void LichthiTHPTQG::nhap(){
	cout<<"nhap nam thi: "; cin>>nam;
	cout<<"nhap so diem thi: "; cin>>sodiemthi;
	cout<<"nhap so thi sinh thi: "; cin>>sothisinh;
	cout<<"nhap so gv coi thi: "; cin>>sogv;
	cout<<"nhap so mon thi:"; cin>>n;
	x = new lichthi[n];
	for(int i=0 ; i<n ; i++){
		cout<<"nhap mon thu "<<i+1<<endl;
		x[i].nhap();
	}
}
void LichthiTHPTQG::xuat(){
	cout<<setw(5)<<"Nam :"<<nam;
	cout<<setw(30)<<"So diem thi :"<<sodiemthi<<endl;
	cout<<setw(5)<<"So thi sinh :"<<sothisinh;
	cout<<setw(30)<<"So gv coi thi :"<<sogv<<endl;
	tieude();
	for(int i=0 ; i<n ; i++){
		x[i].xuat();
	}
	cout<<setw(40)<<"tong mon thi:"<<n<<endl;
}
int main(){
	LichthiTHPTQG lt;
	cout<<"nhap vao thong tin lich thi THPTQG:"<<endl;
	lt.nhap();
	cout<<"---------------------------Thong tin lich thi --------------------"<<endl;
	lt.xuat();
	return 0;
}
// de 14649
//class PTB2 {
//	private:
//		float a,b ,c;
//	public:
//		friend istream &operator >>(istream &is, PTB2 &x);
//		friend ostream &operator<<(ostream &os, PTB2 x );
//		PTB2 operator +(PTB2 x);
//		PTB2 operator ++();
//		
//};
//istream &operator >>(istream &is, PTB2 &x){
//	cout<<"\t nhap a:"; is>>x.a;
//	cout<<"\t nhap b:"; is>>x.b;
//	cout<<"\t nhap c:"; is>>x.c;
//	return is;
//	
//}
//ostream &operator<<(ostream &os, PTB2 x ){
//	os<<x.a<<"x^2 ";
//	if(x.b < 0 ){
//		os<<x.b<<"x ";
//	}else{
//		os<<" + "<<x.b;
//	}
//	if(x.c < 0 ){
//		os<<x.c;
//	}else{
//		os<<" + "<<x.c<<" = 0";
//	}
//	return os;
//}
//PTB2 PTB2 ::operator +(PTB2 x){
//	PTB2 k;
//	k.a = a + x.a;
//	k.b = b + x.b;
//	k.c = c + x.c;
//	return k;
//}
//PTB2 PTB2 :: operator ++(){
//	if(a>b &&a> c){
//		cout<<a;
//	}else if(b>a &&b>c){
//		cout<<b;
//	}
//	else if(c>a &&c>b){
//		cout<<c;
//	}
//	return *this;
//}
//int main(){
//	PTB2 P,Q, K;
//	cout<<" nhap phuong trinh P:"<<endl; cin>>P;
//	cout<<" nhap phuong trinh Q:"<<endl; cin>>Q;
//	K = P+Q;
//	cout<<"phuong trinh tong:"<<K<<endl;
//	cout<<" gia tri he so lon nhat cua phuong trinh K:"; ++K;
//	return 0;
//}
