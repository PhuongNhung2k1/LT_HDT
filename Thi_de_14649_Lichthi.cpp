#include<bits/stdc++.h>
using namespace std;
// cau1
class PTB2{
	private:
		float a, b, c;
	public:
		friend istream &operator >>(istream &is, PTB2 &x);
		friend ostream &operator <<(ostream &os, PTB2 x);
		PTB2 operator+(PTB2 x);
		PTB2 operator ++();
};
istream &operator >>(istream &is, PTB2 &x){
	cout<<"\t nhap he so a: "; is>>x.a;
	cout<<"\t nhap he so b: "; is>>x.b;
	cout<<"\t nhap he so c: "; is>>x.c;
	
	return is;
}
ostream &operator <<(ostream &os, PTB2 x){
	cout<<x.a<<"x^2";
	if(x.b<0){
		os<<x.b<<"x ";
	}else{
		os<<" + "<<x.b<<"x ";
	}
	if(x.c<0){
		os<<x.c;
	}else{
		os<<" + "<<x.c<<"= 0";
	}
	return os;
}
PTB2 PTB2 ::operator+(PTB2 x){
	PTB2 k;
	
	k.a = a + x.a;
	k.b = b + x.b;
	k.c = c + x.c;
	return k;
}
PTB2 PTB2 ::operator ++(){
	float max = a;
	if(b> max) max = b;
	if(c> max ) max = c;
	cout<<max;
}
int main(){
	PTB2 a,b,K;
	cout<<"nhap ptb2 a:"<<endl; cin>>a;
	cout<<"nhap ptb2 b:"<<endl; cin>>b;
	K = a+b;
	cout<<"Tong 2 ptb2 : "<<K<<endl;
	cout<<"GTLN he so:";
	++K;
	return 0;
}
//class Lichthi{
//	private:
//		char ngaythi[10];
//		char buoi[10];
//		char monthi[20];
//		float thoigian;
//	public:
//		void nhap();
//		void xuat();
//		friend class LichTHPTQG;
//};
//class LichTHPTQG{
//	private:
//		int nam;
//		int sodiemthi;
//		int sothisinh;
//		int sogv;
//		Lichthi *x;
//		int n;
//	public:
//		void nhap();
//		void xuat();
//};
//void Lichthi::nhap(){
//	cout<<"nhap ngay thi:";  fflush(stdin); gets(ngaythi);
//	cout<<"nhap buoi thi:";  fflush(stdin); gets(buoi);
//	cout<<"nhap mon thi:";  fflush(stdin); gets(monthi);
//	cout<<"thoi gian :"; cin>>thoigian;
//}
//void Lichthi::xuat(){
//	cout<<setw(15)<<ngaythi;
//	cout<<setw(15)<<buoi;
//	cout<<setw(15)<<monthi;
//	cout<<setw(15)<<thoigian<<endl;
//}
//void tieude(){
//	cout<<setw(15)<<"ngay thi";
//	cout<<setw(15)<<"buoi";
//	cout<<setw(15)<<"mon thi";
//	cout<<setw(15)<<"thoi gian"<<endl;
//}
//void LichTHPTQG::nhap(){
//	cout<<"nhap Nam:"; cin>>nam;
//	cout<<"nhap so diem thi:"; cin>>sodiemthi;
//	cout<<"nhap so thi sinh:"; cin>>sothisinh;
//	cout<<"nhap so giao vien:"; cin>>sogv;
//	cout<<"nhap so lich thi:"; cin>>n;
//	x = new Lichthi[n];
//	for(int i=0 ; i<n ; i++){
//		cout<<"nhap lich thi thu "<<i+1<<endl;
//		x[i].nhap();
//	}
//	
//}
//void LichTHPTQG::xuat(){
//	cout<<setw(20)<<"Nam :"<<nam;
//	cout<<setw(20)<<"So diem thi:"<<sodiemthi<<endl;
//	cout<<setw(20)<<"So thi sinh:"<<sothisinh;
//	cout<<setw(20)<<"so Giao vien:"<<sogv<<endl;
//	tieude();
//	for(int i=0 ; i<n ; i++){
//		x[i].xuat();
//	}
//}
//int main(){
//	LichTHPTQG lt;
//	cout<<"nhap vao thong tin lich thi:";
//	lt.nhap();
//	cout<<"------------------Lich thi chi tiet---------------"<<endl;
//	lt.xuat();
//	return 0;
//}
