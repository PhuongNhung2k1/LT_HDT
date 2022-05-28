#include<bits/stdc++.h>

using namespace std;

class Nguoi{
	protected:
		char hoten[20];
		char ngaysinh[20];
		char quequan[20];
	public:
		void nhap(){
			cout<< "Nhap ho ten: "; fflush(stdin); gets(hoten);
			cout<< "Nhap ngay sinh: "; fflush(stdin); gets(ngaysinh);
			cout<< "Nhap que quan: "; fflush(stdin); gets(quequan);
		}
		void xuat(){
			cout<< hoten << setw(10) << ngaysinh << setw(20) << quequan << setw(20);
		}
};
 class Sv:public Nguoi{
 	private:
 		char masv[15];
 		char nganh[20];
 		int khoa;
 	public:
 		void nhap(){
 			Nguoi::nhap();
 			cout<< "Nhap ma sv: "; fflush(stdin); gets(masv);
 			cout<< "Nhap nganh: "; fflush(stdin); gets(nganh);
 			cout<< "Nhap khoa: "; cin>> khoa;
		 }
		void xuat(){
			Nguoi::xuat();
			cout<< masv << setw(10) << nganh << setw(20) << khoa << setw(20);
		}
	friend class lophoc;
	friend void inkhoa(Sv x[], int n);
	friend void sapxep(Sv x[], int n);
 };
 class lophoc{
 	char malh[20];
 	char tenlh[20];
 	char ngaymo[20];
 	Sv *x;
 	int n;
 	char giaovien[20];
 	
 	public:
 		void nhap(){
 			cout<< "Nhap ma lop: "; fflush(stdin); gets(malh);
 			cout<< "Nhap ten lop: "; fflush(stdin); gets(tenlh);
 			cout<< "Nhap ngay mo: "; fflush(stdin); gets(ngaymo);
 			cout<< "Nhap so sv: "; cin>> n;
 			Sv *x=new Sv[n];
 			for(int i=0; i<n; i++){
 				cout<< "Nhap Thong Tin Sinh Vien Thu " << i+1 << endl;
 				x[i].nhap();
			}
			cout<< "Nhap ten gia vien: "; fflush(stdin); gets(giaovien);
		}
		void xuat(){
		 	cout<< malh << setw(20) << tenlh << setw(20) << ngaymo << setw(20);
		 	for(int i=0; i<n; i++){
		 		x[i].xuat();
			}
			cout<< giaovien;
		 }
	friend void inkhoa(Sv x[], int n);
	friend void sapxep(Sv x[], int n);
};
 void inkhoa(Sv x[], int n){
 	
 	for(int i=0 ; i<n ; i++){
 		if(x[i].khoa ==11){
 			x[i].xuat();
		 }
	 }
 }
 void sapxep(Sv x[], int n){
 	for(int i=0 ; i< n-1 ; i++){
 		for(int j=i+1; j<n ; j++){
 			if(x[i].khoa > x[i].khoa){
 				Sv tempt = x[i];
 				x[i] = x[j];
 				x[j]= tempt;
			 }
		 }
	 }
	 for(int i=0 ; i<n ; i++){
	 	 x[i].xuat();
	 }
 }
 int main(){
 	lophoc tt;
 	cout<<"Nhap thong tin cua 1 lop hoc:" << endl;
 	tt.nhap();
 	cout<<"Thong tin cua lop hoc vua nhap la:"<<endl<<endl;
	cout<<"malh"<<setw(10)<<"tenlh"<<setw(20)<<"ngaymo";
	cout<<setw(10)<<"hoten"<<setw(20)<<"ngaysinh"<<setw(20)<<"quequan";
	cout<<setw(10)<<"masv"<<setw(20)<<"nganhhoc"<<setw(20)<<"khoahoc";
	cout<<setw(10)<<"giaovien"<<endl;
 	tt.xuat();
 }
