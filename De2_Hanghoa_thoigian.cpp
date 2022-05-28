#include<bits/stdc++.h>
using namespace std;
class Moto;
class Nhasx{
	private:
		char tennsx[20];
		char dcnsx[20];
	public:
		void nhap(){
			cout<<"nhap tennsx:";  fflush(stdin); gets(tennsx);
			cout<<"dia chi nsx:"; fflush(stdin); gets(dcnsx);
		}
		void xuat(){
			cout<<setw(15)<<tennsx;
			cout<<setw(15)<<dcnsx;
		}
		friend class Hanghoa;
		friend void timkiem(Moto *mt, const char *tennsx, int n);
};
class Hanghoa{
	protected:
		char nhanhieu[20];
		Nhasx x;
	public:
		void nhap(){
			cout<<"nhap nhan hieu:"; fflush(stdin); gets(nhanhieu);
			x.nhap();
		}
		void xuat(){
			cout<<setw(15)<<nhanhieu;
			x.xuat();
		}
};
class Moto:public Hanghoa{
	private:
		int phankhoi;
		float giathanh;
	public:
		void nhap();
		void xuat();
		friend void timkiem(Moto *mt, const char *tennsx, int n);
		friend void sapxep(Moto *mt, int n);
};
void tieude(){
	cout<<setw(15)<<"nhanhieu";
	cout<<setw(15)<<"nhap tennsx"; 
	cout<<setw(15)<<"dia chi nsx";
	cout<<setw(15)<<"phan khoi";
	cout<<setw(15)<<"gia thanh"<<endl;
}
void Moto::nhap(){
	Hanghoa::nhap();
	cout<<"nhap phan khoi:"; cin>>phankhoi;
	cout<<"nhap gia thanh:"; cin>>giathanh;
}
void Moto::xuat(){
	Hanghoa::xuat();
	cout<<setw(15)<<phankhoi;
	cout<<setw(15)<<giathanh<<endl;
}
void timkiem(Moto *mt, const char *tennsx, int n){
	bool check = false;
	for(int i=0 ; i<n ; i++){
		if(strcmpi(mt[i].x.tennsx,tennsx)==0){
			check =true;
			break;
		}
	}
	if(check){
		cout<<"--------------------------xe moto da tim thay--------------------------"<<endl;
		tieude();
		for(int i=0 ; i<n ; i++){
		if(strcmpi(mt[i].x.tennsx,tennsx)==0){
			mt[i].xuat();
		}
	  }
	}
	else{
		cout<<"khong tim thay ten nsx!"<<endl;
	}
}
// sap xep theo tang dan cua gia thanh
void sapxep(Moto *mt, int n){
	for(int i=0 ; i<n-1 ;i++){
		for(int j=i+1; j<n ; j++){
			if(mt[i].giathanh > mt[j].giathanh){
				Moto tam = mt[i];
				mt[i]= mt[j];
				mt[j]= tam;
			}
		}
	}
	for(int i=0 ; i<n ;i++){
		mt[i].xuat();
	}
}
int main(){
	Moto *mt;
	int n;
	do{
	cout<<"nhap vao so xe moto:"; cin>>n;
	mt = new Moto[n];
	}while(n<2||n>20);
	for(int i=0 ;i<n ; i++){
		cout<<"nhap moto thu "<<i+1<<endl;
		mt[i].nhap();
    }
    cout<<"----------------------Danh sach mo to vua nhap----------------------"<<endl;
    tieude();
    for(int i=0 ;i<n ; i++){
		mt[i].xuat();
    }
    cout<<"xe mo to duoc tim thay:"<<endl;
    timkiem(mt,"Toyota",n);
    cout<<"xe mo to duoc sap xep theo don gia:"<<endl;
    sapxep(mt,n);
	return 0;
}
/*class thoigian{
	private:
		float gio, phut, giay;
	public:
		thoigian(){
			gio=phut=giay=0.0;
		}
		thoigian(float g , float p ,float q){
			gio = g;
			phut = p;
			giay = q;
		}
		friend istream &operator >>(istream &is, thoigian &t);
		friend ostream &operator <<(ostream &os, thoigian t);
		thoigian operator +(thoigian t);
		thoigian operator -(thoigian t);
		
};
istream &operator >>(istream &is, thoigian &t){
	cout<<"nhap so gio ";is>>t.gio;
	cout<<"nhap so phut";is>>t.phut;
	cout<<"nhap so giay ";is>>t.giay;
	return is;
}
ostream &operator <<(ostream &os, thoigian t){
	cout<<"thoi gian:";
	os<<t.gio<<":"<<t.phut<<":"<<t.giay<<endl;
	return os;
}
thoigian thoigian::operator +(thoigian t){
	thoigian tong;
	tong.gio = gio+t.gio;
	tong.phut = phut +t.phut;
	tong.giay = giay +t.giay;
	return tong;
}
thoigian thoigian::operator -(thoigian t){
	thoigian hieu;
	hieu.gio = gio-t.gio;
	hieu.phut = phut -t.phut;
	hieu.giay = giay -t.giay;
	return hieu;
}
int main(){
	thoigian P(12,4.5,20), Q,tong,thuong;
	cout<<"\nnhap tgian:";
	cin>>Q;
	tong= P+Q;
	thuong = P-Q;
	cout<<"tong tgian:"<<tong<<endl;
	cout<<"thuong tgian:"<<thuong<<endl;
	return 0;
}*/
