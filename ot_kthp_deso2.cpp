#include<bits/stdc++.h>
using namespace std;
class Canbo;
class Luong{
	protected:
		float phucap;
		float hsl;
		double baohiem;
	public:
		double tinhluong(){
		 	return	hsl*340000+phucap;
		}
};
class Canbo:public Luong{
	private:
		char macanbo[10];
		char madv[10];
		char hoten[20];
		char ngaysinh[20];
	public:
		void nhap();
		void xuat();
	friend void tinhluong_tren(Canbo *cb, int n);
	friend void sua(Canbo *cb , int n,const char *mcbmoi);
};
void Canbo::nhap(){
	cout<<"nhap ma can bo: ";  fflush(stdin);  gets(macanbo);
	cout<<"nhap ma dv: ";  fflush(stdin);  gets(madv);
	cout<<"nhap ho ten: ";  fflush(stdin);  gets(hoten);
	cout<<"nhap ngay sinh: ";  fflush(stdin);  gets(ngaysinh);
	cout<<"phu cap: ";  cin>>phucap;
	cout<<"he so luong:"; cin>>hsl;
	cout<<"bao hiem:"; cin>>baohiem;
}
void Canbo::xuat(){
	cout<<setw(15)<<macanbo;
	cout<<setw(15)<<madv;
	cout<<setw(15)<<hoten;
	cout<<setw(15)<<ngaysinh;
	cout<<setw(15)<<phucap;
	cout<<setw(15)<<hsl;
	cout<<setw(15)<<baohiem;
	cout<<setw(20)<<tinhluong()<<endl;
}
void tieude(){
	cout<<setw(15)<<"ma can bo";
	cout<<setw(15)<<"ma dv";
	cout<<setw(15)<<"ho ten";
	cout<<setw(15)<<"ngay sinh";
	cout<<setw(15)<<"phu cap";
	cout<<setw(15)<<"hsl";
	cout<<setw(15)<<"bao hiem";
	cout<<setw(20)<<"Luong"<<endl;
}
void tinhluong_tren(Canbo *cb, int n){
	double tongluong =0;
	for(int i=0 ; i<n ; i++){
		if(cb[i].hsl>3.5){
			tongluong+= cb[i].tinhluong();
		}
	}
	for(int i=0; i<n ; i++){
		cb[i].xuat();
	}
}
void sua(Canbo *cb , int n,const char *macbmoi){
	bool check = false;
	cout<<"nhap thong tin can bo moi:";
	for(int i=0  ; i<n ; i++){
		if(strcmpi(cb[i].macanbo,macbmoi)==0){
			check = true;
			break;
		}
	}
	if(check){
		cout<<"ma can bo da tim thay:";
		for(int i=0 ;i< n ; i++){
			if(strcmpi(cb[i].macanbo,macbmoi)==0){
				strcpy(cb[i].macanbo , macbmoi) ;
				cb[i].nhap();	
			}
		}	
	}
	else{
		cout<<"ko tim thay thong tin can bo nay:"<<endl;
	}
	tieude();
	for(int i=0 ; i<n ; i++){
		cb[i].xuat();
	}
}
int main(){
	Canbo *cb;
	int n;
	cout<<"nhap vcap danh sach ban bo :"; cin>>n;
	cb = new Canbo[n];
	for(int i=0 ; i< n ; i++){
		cout<<"nhap can bo thu "<<i+1<<endl;
		cb[i].nhap();
	}
	cout<<"------------------------------Danh sach can bo vua nhap la-----------------------------"<<endl;
	for(int i=0 ; i<n ; i++){
		cb[i].xuat();
	}
	cout<<"tong luong nhung can bo co hsl > 3.5"<<endl;
	tinhluong_tren(cb,n);
	sua(cb,n,"cb2");
	return 0;
}
