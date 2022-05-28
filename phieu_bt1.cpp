#include<bits/stdc++.h>
using namespace std;
class NCC{
	private:
		char mancc[15];
		char tenncc[20];
		char dcncc[30];
		char sdt[12];
	public:
		void nhap();
		void xuat();
		friend class Phieu;
};
class Sanpham{
	private:
		char masp[20];
		char tensp[20];
		int soluong;
		long dongia;
	public:
		void nhap();
		void xuat();
		friend class Phieu;
};
class Phieu{
	private:
		char maphieu[20];
		char ngaylap[10];
		NCC ncc;
		Sanpham *x;
		int n;
		char hieutruong[20];
		char nguoilap[20];
	public:
		void nhap();
		void xuat();
};
void Sanpham::nhap(){
	cout<<"\nnhap ma san pham :"; fflush(stdin);
	gets(masp);
	cout<<"\nnhap ten san pham :"; fflush(stdin);
	gets(tensp);
	cout<<"\n so luong :"; cin>>soluong;
	cout<<"\n don gia :"; cin>>dongia;
}
 void Sanpham::xuat(){
 	cout<<masp<<setw(10)<<tensp<<setw(10)<<soluong<<setw(10)<<dongia<<setw(10)<<soluong*dongia;
 }
 void NCC::nhap(){
 	cout<<"\nnhap ma NCC:"; fflush(stdin);
	gets(mancc);
	cout<<"\nnhap ten NCC:"; fflush(stdin);
	gets(tenncc);
	cout<<"\nnhap dia chi NCC :"; fflush(stdin);
	gets(dcncc);
	cout<<"\nnhap so dien thoai :"; fflush(stdin);
	gets(sdt);
 }
 void NCC::xuat(){
 	cout<<"ma Ncc:"<<mancc<<setw(25)<<"ten NCC :"<<tenncc<<endl;
	 cout<<"Dia chi NCC :"<<dcncc<<setw(25)<<"sdt"<<sdt<<endl;
 }
 void Phieu::nhap(){
 	cout<<"\n nhap ma phieu:"; fflush(stdin);
 	gets(maphieu);
 	cout<<"\nngay lap :"; fflush(stdin);
	gets(ngaylap);
	ncc.nhap();
	cout<<"\n nhap vao danh sach san pham :"; cin>>n;
	Sanpham *x =new Sanpham[n];
	for(int i=0 ; i< n; i++){
		cout<<"\n thong tin san pham thu "<<i+1<<endl;
		x[i].nhap();
	}
	cout<<"\n Hieu truong:"; fflush(stdin);
	gets(hieutruong);
	cout<<"\nNguoi lap:"; fflush(stdin);
	gets(nguoilap);
 }
 void tieude(){
 	cout<<"masp "<<setw(20)<<"tensp"<<setw(20)<<"so luong"<<setw(20)<<"don gia"<<setw(15)<<"Thanh tien"<<endl;
 }
 void Phieu::xuat(){
  	cout<<"maphieu :"<<maphieu<<setw(30)<<"ngaylap :"<<ngaylap<<endl;
 	ncc.xuat();
 	tieude();
 	for(int i=0 ; i<n ; i++){
 		x[i].xuat();
	 }
	cout<<"hieutruong"<<setw(20)<<"nguoilap"<<endl;
	cout<<hieutruong<<setw(20)<<nguoilap<<endl;
 }

int main(){
	Phieu p1;
	cout<<"\n nhap vao thong tin phieu thu:";
	p1.nhap();
	cout<"\nthong tin phieu vua nhap :";
	p1.xuat();
	return 0;
}
