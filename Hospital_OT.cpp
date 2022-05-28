#include<bits/stdc++.h>
using namespace std;
class Benhvien{
	private:
		char tenbv[20];
		char dc[20];
		char gd[20];
	public:
		friend class Benhnhan;
};
class Benhnhan;
class Nguoi{
	protected:
		char hoten[20];
		int tuoi;
	public:
		nhap(){
			cout<<"nhap ho ten:"; fflush(stdin) ;gets(hoten);
			cout<<"nhap tuoi:"; cin>>tuoi;
		}
		xuat(){
			cout<<setw(20)<<hoten;
			cout<<setw(20)<<tuoi;
		}
	friend class Benhvien;
	friend void in_bn_30(Benhnhan *x, int n);
	friend void xoabn(Benhnhan *x, int n);
	friend void chenbn(Benhnhan *x, int &n, int k);
};
class Benhnhan:public Nguoi{
	private:
	int ma;
	char tiensu[20];
	char chuandoan[20];
	 Benhvien x; 
	public:
		void nhap(){
			Nguoi::nhap();
			cout<<"mabn:"; cin>>ma;
			cout<<"tien su:"; fflush(stdin); gets(tiensu);
			cout<<"ten benh vien:"; fflush(stdin); gets(x.tenbv);
			cout<<"dia chi:"; fflush(stdin); gets(x.dc);
			cout<<"giam doc:"; fflush(stdin); gets(x.gd);
		}
		void xuat(){
			Nguoi::xuat();
			cout<<setw(20)<<ma;
			cout<<setw(20)<<tiensu;
			cout<<setw(20)<<x.tenbv;
			cout<<setw(20)<<x.dc;
			cout<<setw(20)<<x.gd<<endl;
		}
		friend void in_bn_30(Benhnhan *x, int n);
		friend void sua_bn(Benhnhan *x, int n);
		friend void xoabn(Benhnhan *x, int n);
		friend void chenbn(Benhnhan *x, int &n, int k);
};
void tieude(){
	        cout<<setw(20)<<"ten :";
			cout<<setw(20)<<"tuoi:";
			cout<<setw(20)<<"mabn:";
			cout<<setw(20)<<"tien su:";
			cout<<setw(20)<<"ten benh vien:";
			cout<<setw(20)<<"dia chi:";
			cout<<setw(20)<<"giam doc:"<<endl;
}
void in_bn_30(Benhnhan *x, int n){
	for(int i=0 ; i<n ; i++){
		if(x[i].tuoi >30){
			x[i].xuat();
		}
	}
}
void sua_bn(Benhnhan *x, int n){
	for(int i=0 ; i<n ; i++){
		if(x[i].ma==1){
			x[i].tuoi = 20;
		}
	}
	for(int i=0 ; i<n ; i++){
		x[i].xuat();
	}
}
void xoabn(Benhnhan *x, int n){
	for(int i=0 ; i<n ;i++){
		if(strcmp(x[i].hoten,"lan")==0){
			x[i] = x[i+1];
		}
		n--;
	}
	for(int i=0 ;i<n ; i++){
		x[i].xuat();
	}
}
void chenbn(Benhnhan *x, int &n, int k){
	x = (Benhnhan *) realloc(x, n + 1);// cap phat lai bo nho dong
  Benhnhan bnmoi;
  cout << "Nhap thong tin sach moi" << endl;
  bnmoi.nhap();
  for(int i = n - 1; i >= k - 1; i--){
    x[i + 1] = x[i];
  }
  x[k - 1] = bnmoi;
  n++;
  for(int i=0 ;i<n ; i++){
		x[i].xuat();
	}
}
int main(){
	Benhnhan *bn;
	int n;
	cout<<"nhap vao so banh nhan:"; cin>>n;
	bn = new Benhnhan[n];
	for(int i=0 ;i< n ; i++){
		cout<<"benh nhan thu"<<i+1<<endl;
			bn[i].nhap();
	}
	cout<<"DANH SACH BENH NHAN VUA NHAP LA:"<<endl;
	tieude();
	for(int i=0 ;i< n ; i++){
			bn[i].xuat();
	}
	cout<<"benh nhan lon hon 30 tuoi:"<<endl;
	 in_bn_30(bn,n);
//	 cout<<"benh nhan sau khi duoc cap nhat :"<<endl;
//	 sua_bn(bn,n);
//	 cout<<"benh nhan sau khi xoa :"<<endl;
//	 xoabn(bn,n);
	int k;
	cout<<"nhap vao vi tri can chen:";cin>>k;
	 cout<<"benh nhan sau khi uoc chen vao :"<<endl;
	 chenbn(bn,n,k);
	return 0;
}
