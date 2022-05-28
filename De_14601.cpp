#include<bits/stdc++.h>

using namespace std;
//                   cau1 
//class Nguoi{
//	protected:
//		char hoten[20];
//		int tuoi;
//		char gioitinh[10];
//	public:
//		void nhap();
//		void xuat();
//};
//class Nhanvien:public Nguoi{
//	private:
//		char manv[10];
//		char chucvu[20];
//		float luong;
//	public:
//		void nhap();
//		void xuat();
//	friend class Congty;
//};
//class Congty{
//	private:
//		char mact[10];
//		char diachi[20];
//		Nhanvien *x;
//		int n;
//	public:
//		void nhap();
//		void xuat();
//};
//void Nguoi::nhap(){
//	cout<<"Nhap ho ten:"; fflush(stdin); gets(hoten);
//	cout<<"Tuoi:"; cin>>tuoi;
//	cout<<"Gioi tinh:"; fflush(stdin); gets(gioitinh);
//}
//void tieude(){
//	cout<<setw(15)<<" manv";
//	cout<<setw(15)<<"chucvu";
//	cout<<setw(15)<<"luong";
//	cout<<setw(15)<<"ho ten";
//	cout<<setw(15)<<"tuoi";
//	cout<<setw(15)<<"gioi tinh";
//}
//void Nguoi::xuat(){
//	cout<<setw(15)<<hoten;
//	cout<<setw(15)<<tuoi;
//	cout<<setw(15)<<gioitinh;
//}
//void Nhanvien::nhap(){
//	cout<<"Ma nv :"; fflush(stdin); gets(manv);
//	cout<<"Chuc vu :"; fflush(stdin); gets(chucvu);
//	cout<<"Luong:";cin>>luong;
//	Nguoi::nhap();
//}
//void Nhanvien::xuat(){
//	cout<<setw(15)<<manv;
//	cout<<setw(15)<<chucvu;
//	cout<<setw(15)<<luong;
//	Nguoi::xuat();
//}
//void Congty::nhap(){
//	cout<<"nhap Ma cong ty:"; fflush(stdin); gets(mact);
//	cout<<"dia chi :"; fflush(stdin); gets(diachi);
//	cout<<"nhap so nhan vien:"; cin>>n;
//	x= new Nhanvien[n];
//	for(int i=0 ; i<n ;i++){
//		cout<<"nhap nhan vien thu "<<i+1<<endl;
//		x[i].nhap();
//	}
//}
//void Congty::xuat(){
//	cout<<setw(10)<<"Ma cong ty:"<<mact;
//	cout<<setw(30)<<"dia chi "<<diachi<<endl;
//	for(int i=0 ; i<n ;i++){
//		x[i].xuat();
//	}
//}
//int main(){
//	Congty ct;
//	cout<<"nhap thong tin 1 congty:"<<endl;
//	ct.nhap();
//	cout<<"-----------------Thong tin cong ty vua nhap------------"<<endl;
//	ct.xuat();
//	return 0;
//}
// ------------------Cau2
class PTB2{
	private:
		float a, b, c;
	public:
		friend istream &operator >>(istream &is, PTB2 &x);
		friend ostream &operator<<(ostream &os, PTB2 x);
		PTB2 operator -(PTB2 x);
		PTB2 operator--();
};
istream &operator >>(istream &is, PTB2 &x){
	
	cout<<"\tnhap he so a: "; is>>x.a;
	cout<<"\tnhap he so b: "; is>>x.b;
	cout<<"\tnhap he so c: "; is>>x.c;
	return is;
}
ostream &operator<<(ostream &os, PTB2 x){
		os<<x.a<<"x^2 ";
	if(x.b < 0 ){
		os<<x.b<<"x ";
	}else{
		os<<" + "<<x.b;
	}
	if(x.c < 0 ){
		os<<x.c;
	}else{
		os<<" + "<<x.c<<" = 0";
	}
	return os;
}
PTB2 PTB2 ::operator -(PTB2 x){
	PTB2 k;
	k.a = a - x.a;
	k.b = b - x.b;
	k.c = c - x.c;
	
	return k;	
}
PTB2 PTB2 ::operator --(){
	cout<<"gia tri trung biinh cua he so a b c :"<<(float)(a+b+c)/3;
}
int main(){
	PTB2 P,Q,K;
	cout<<"Nhap PTB2 P:"<<endl; cin>>P;
	cout<<"Nhap PTB2 Q:"<<endl; cin>>Q;
	K = P - Q;
	cout<<"hieu hai pt la:"<<K<<endl;
	--K;
	return 0;
}
