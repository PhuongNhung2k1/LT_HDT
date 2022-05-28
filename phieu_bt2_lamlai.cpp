#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	protected:
		char hoten[20];
		char ngaysinh[20];
		char quequan[30];
	public:
	void nhap();
	void xuat();	
	friend class Lophoc;
};
class Sinhvien:public Nguoi{
	private:
		char masv[10];
		char Nganh[10];
		int khoahoc;
	public:
		void nhap()
		{
			cout<<"\n ma sv:"; fflush(stdin); 
			gets(masv);
			cout<<"\n ten sv:"; fflush(stdin); 
			gets(hoten);
			cout<<"n ngay sinh:"; fflush(stdin);
			gets(ngaysinh);
			cout<<"\n nganh hoc :"; fflush(stdin);
			gets(Nganh);
			cout<<"\n Que quan :"; fflush(stdin);
			gets(quequan);
			cout<<"\n Khoa :"; cin>>khoahoc;
			
		}
		void xuat(){
			cout<<setw(10)<<"masv"<<setw(15)<<"hoten"<<setw(20)<<"ngaysinh"<<setw(10)<<"Nganh"<<setw(10)<<"quequan"<<setw(20)<<"khoa"<<endl;
			cout<<setw(10)<<masv<<setw(15)<<hoten<<setw(20)<<ngaysinh<<setw(10)<<Nganh<<setw(10)<<quequan<<setw(20)<<khoahoc<<endl;
		}
	friend  class Lophoc;
};
class Lophoc{
	private:
		char malh[10];
		char tenlh[20];
		char ngaymo;
		Sinhvien *x;
		int n;
		char giaovien[20];
	public:
		void nhap(){
			cout<<"\n ma lop hoc:"; fflush(stdin);
			gets(malh);
			cout<<"\n nhap vao so sinhvien trong lop:";
			cin>>n;
			x =new Sinhvien[n];
			for(int i=0 ;i<n ; i++){
				cout<<"\n nhap thong tin sinh vien thu"<<i+1<<endl;
				x[i].nhap();
			}
		}
		void xuat(){
			cout<<malh;
			for(int i=0; i< n ; i++){
				x[i].xuat();
			}
		}
};
int main(){
	Lophoc lh1;
	lh1.nhap();
	cout<<"\n thong tin lop hoc vua nhap la:"<<endl;
	lh1.xuat();
	return 0;
}
