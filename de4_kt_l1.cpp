#include<bits/stdc++.h>
using namespace std;
class Banhkeo;
class Date{
	private:
		int day, month, year;
	public:
		friend class Banhkeo;
		friend void xapxep_tang_nam(Banhkeo *bk, int n);
};
class Nhasx{
	private:
		char tennsx[20];
		char dcnsx[30];
	public:
		friend class Hanghoa;
		friend class Banhkeo;
	friend void in_banhkeo_trangan(Banhkeo *bk, int n, const char *tensx);
};
class Hanghoa{
	protected:
		char tenH[20];
		Nhasx NSX;
		int dongia;
	public:
		void nhap();
		void xuat();
	friend class Banhkeo;
	friend void in_banhkeo_trangan(Banhkeo *bk, int n, const char *tensx);
};

void Hanghoa::nhap(){
	cout<<"\t nhap ten hang:"; fflush(stdin); gets(tenH);
	cout<<"\t nhap ten NSX:"; fflush(stdin); gets(NSX.tennsx);
	cout<<"\t nhap dia chi nsx:"; fflush(stdin); gets(NSX.dcnsx);
	cout<<"\t don gia:"; cin>>dongia;
}
void Hanghoa::xuat(){
	cout<<setw(10)<<tenH;
	cout<<setw(20)<<NSX.tennsx;
	cout<<setw(10)<<NSX.dcnsx;
	cout<<setw(20)<<dongia<<endl;
}
class Banhkeo:public Hanghoa{
	private:
		int kt;
		Date ngaynhap;
	public:
		void nhap(){
			cout<<"\t nhap kich thuoc:"; cin>>kt;
			cout<<"\t nhap ngay:"; cin>>ngaynhap.day;
			cout<<"\t thang "; cin>>ngaynhap.month;
			cout<<"\t nam :"; cin>>ngaynhap.year;
			Hanghoa::nhap();
		}
		void xuat(){
			cout<<setw(10)<<kt;
			cout<<setw(20)<<ngaynhap.day<<"/"<<ngaynhap.month<<"/"<<ngaynhap.year;
			Hanghoa::xuat();
		}
	friend void in_banhkeo_trangan(Banhkeo *bk, int n, const char *tensx);
	friend void xapxep_tang_nam(Banhkeo *bk, int n);
};
void tieude(){
	cout<<setw(10)<<"kt";
	cout<<setw(20)<<"ngaynhap";
	cout<<setw(10)<<"tenH";
	cout<<setw(20)<<"tennsx";
	cout<<setw(10)<<"dcnsx";
	cout<<setw(20)<<"dongia"<<endl;
	
}
void in_banhkeo_trangan(Banhkeo *bk, int n, const char *tensx){
	bool check = false;
	for(int i=0 ; i<n; i++){
		if(strcmpi(bk[i].NSX.tennsx,tensx)==0){
			check = true;
			break;
		}
	}
		if(check){
			cout<<"\n ten nsx"<<tensx<<" can tim"<<endl;
			tieude();
			for(int i=0 ; i<n ; i++){
				if(strcmpi(bk[i].NSX.tennsx,tensx)==0)
				bk[i].xuat();
			}
		}
		else
		cout<<"\n ko tim thay hang can tim"<<endl;	
}
void xapxep_tang_nam(Banhkeo *bk, int n){
	for(int i=0;i<n ; i++){
		for(int j=n-1;j>i ;j--){
			if(bk[i].ngaynhap.year>bk[j].ngaynhap.year)
			{
				Banhkeo tam = bk[i];
				bk[i]= bk[j];
				bk[j]= tam;
			}
		}
	}
	for(int i=0 ;i<n ; i++){
		bk[i].xuat();
	}
}
int main(){
	Banhkeo *bk1;
	int n;
	cout<<"\n nhap danh sach banh keo:"; cin>>n;
	bk1= new Banhkeo[n];
	for(int i=0; i<n ; i++){
		cout<<"|n nhap banh keo thu "<<i+1<<endl;
		bk1[i].nhap();
	}
	cout<<"--------------------------- danh sach banh keo vua nhap --------------------------"<<endl;
	tieude();
	for(int i=0 ;i<n ; i++){
		bk1[i].xuat();
	}
	in_banhkeo_trangan(bk1,n,"Trang An");
	xapxep_tang_nam(bk1,n);
	return 0;
}
