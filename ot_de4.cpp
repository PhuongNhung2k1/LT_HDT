#include<bits/stdc++.h>
using namespace std;
class NSX;
class Tivi;
class Date{
	private:
		int ngay, thang, nam;
	public:
		void nhap(){
			cout<<"nhap ngay:"; cin>>ngay;
			cout<<"nhap thang:"; cin>>thang;
			cout<<"nhap nam:"; cin>>nam;
		}
		void xuat(){
			cout<<setw(10)<<ngay<<"/"<<thang<<"/"<<nam<<endl;
		}
	friend class Tivi;
	friend void timngaynhap(Tivi *tv, int n);
};
void tieude(){
	cout<<setw(15)<<"Ten hang";
	cout<<setw(10)<<"Ten nsx";
	cout<<setw(10)<<"DC NSX";
	cout<<setw(15)<<"Dongia";
	cout<<setw(15)<<"kichthuoc";
	cout<<setw(10)<<"Ngay sx"<<endl;
}
class NSX{
	private:
		char tennsx[20];
		char dchi[20];
	public:
		void nhap(){
			cout<<"\nnhap ten nsx:"; fflush(stdin); gets(tennsx);
			cout<<"\n doa chi nsx:"; fflush(stdin); gets(dchi);
		}
		void xuat(){
			cout<<setw(10)<<tennsx;
			cout<<setw(10)<<dchi;
		}
	friend class Hang;
};
class Hang{
	protected:
		char tenhang[20];
		NSX x;
		float dongia;
	public:
		void nhap();
		void xuat();
		Hang();
	friend class NSX;
};
void Hang::nhap(){
	cout<<"nhap ten hang:"; fflush(stdin); gets(tenhang);
	x.nhap();
	cout<<"don gia:"; cin>>dongia;
}
void Hang::xuat(){
	cout<<setw(15)<<tenhang;
	x.xuat();
	cout<<setw(15)<<dongia;
}

Hang::Hang(){
	strcpy(tenhang," ");
	strcpy(x.tennsx," ");
	strcpy(x.dchi," ");
	dongia = 0;
}
class Tivi:public Hang{
	private:
		float kichthuoc;
		Date ngaynhap;
	public:
		void nhap();
		void xuat();
	Tivi();
	friend void timngaynhap(Tivi *tv, int n);
	friend void sxgiam_dongia(Tivi *tv, int n);
	friend void xoa_LG(Tivi *tv , int n);
};
void Tivi::nhap(){
	Hang::nhap();
	cout<<"nhap kt:"; cin>>kichthuoc;
	ngaynhap.nhap();
}
void Tivi::xuat(){
	Hang::xuat();
	cout<<setw(15)<<kichthuoc;
	ngaynhap.xuat();
}
Tivi::Tivi(){
	kichthuoc =0;
	ngaynhap.ngay = ngaynhap.thang =ngaynhap.nam =0;
}
void timngaynhap(Tivi *tv, int n){
	for(int i=0 ; i<n ; i++){
		if(tv[i].ngaynhap.ngay==5 &&tv[i].ngaynhap.nam == 2019){
			tv[i].xuat();
		}
	}
}
void sxgiam_dongia(Tivi *tv, int n){
	for(int i=0 ; i<n-1 ; i++){
		for(int j=i+1; j<n ; j++){
			if(tv[i].dongia < tv[j].dongia){
				swap(tv[i],tv[j]);
			}
		}
	}
	for(int i=0 ; i<n ; i++){
		tv[i].xuat();
	}
}
void xoa_LG(Tivi *tv , int n){
	for(int i=0 ; i<n ; i++){
		if(strcmpi(tv[i].tenhang ,"LG")==0){
			tv[i]= tv[i+1];
		}
		n--;
	}
	for(int i=0 ; i<n ; i++){
		tv[i].xuat();
	}
}
int main(){
	Tivi *tv1;
	int n;
	cout<<"nhap vao so luong tivi:";
	cin>>n;
	tv1 = new Tivi[n];
	for(int i=0 ; i< n ; i++){
		cout<<"nhap thong tin tivi thu "<<i+1<<endl;
		tv1[i].nhap();
	}
	cout<<"-------------------Danh Sach Cac Tivi Vua Nhap--------------------------"<<endl;
	tieude();
	for(int i=0 ; i< n ; i++){
		tv1[i].xuat();
	}
	cout<<"-------------------danh sach tivi duoc nhap ngay 05/2019-------------------"<<endl;
	timngaynhap(tv1,n);
	cout<<"-------------------danh sach tv sap xep giam theo don gia-------------------"<<endl;
	sxgiam_dongia(tv1,n);
	cout<<"-------------------danh sach tv sau khi xoa hang LG-------------------"<<endl;
	xoa_LG(tv1, n);
	return 0;
}
