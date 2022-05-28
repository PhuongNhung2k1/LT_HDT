#include<bits/stdc++.h>
using namespace std;
class LopHoc;
class Nguoi{
	protected:
		char hoten[20];
		char ngaysinh[20];
		char quequan[30];
	public:
		void nhap(){
	cout<<"\n nhap ho ten:"; fflush(stdin);
	gets(hoten);
	cout<<"\n nhapngay sinh:"; fflush(stdin);
	gets(ngaysinh);
	cout<<"\n nhap que quan:"; fflush(stdin);
	gets(quequan);
		}
		void xuat(){
					cout<<setw(10)<<hoten<<setw(10)<<ngaysinh<<setw(10)<<quequan;	

		}
};
class Sinhvien:public Nguoi{
	private:
		char masv[10];
		char nganhhoc[20];
		int khoahoc;
	public:
		void nhap(){
	cout<<"\n nhap ma sv:"; fflush(stdin);
	gets(masv);
	cout<<"\n nhap nganh hoc:"; fflush(stdin);
	gets(nganhhoc);
	cout<<"\n nhap khoa hoc:"; cin>>khoahoc;
		}
		void xuat(){
	cout<<setw(20)<<masv<<setw(15)<<nganhhoc<<setw(10)<<khoahoc;

		}
 		friend class LopHoc;
};
class LopHoc{
	private:
		char malh[10];
		char tenlh[20];
		char ngaymo[20];
		Sinhvien *x;
		int n;
		char giaovien[20];
	public:
		void nhap(){
	
	Nguoi::nhap();
	
		}
		void xuat(){
		Nguoi::xuat();
		}
};
void LopHoc::nhap(){
	cout<<"\n nhap ma lop:"; fflush(stdin);
	gets(malh);
	cout<<"\n nhap ten lop:"; fflush(stdin);
	gets(tenlh);
	cout<<"\n nhap ngay mo:"; fflush(stdin);
	gets(ngaymo);
	cout<<"\n nhap vao so luong sv:"; cin>>n;
	Sinhvien *x = new Sinhvien[n];
	for(int i=0; i<n ; i++){
		cout<<"\n nhap thong tin sv thu "<<i+1<<endl;
		x[i].nhap();
	}
	cout<<"\n nhap vao ten gv:";
	fflush(stdin);
	gets(giaovien);
	
}
void tieude(){
	cout<<setw(10)<<"malh"<<setw(10)<<"tenlh"<<setw(10)<<"ngaymo";
	cout<<setw(20)<<"masv"<<setw(15)<<"nganhhoc"<<setw(10)<<"khoahoc";
	cout<<setw(10)<<"hoten"<<setw(10)<<"ngaysinh"<<setw(10)<<"quequan";
	cout<<setw(20)<<"giaovien"<<endl;
}
void LopHoc::xuat(){
	cout<<setw(10)<<malh<<setw(10)<<tenlh<<setw(10)<<ngaymo;
	for(int i=0; i<n ;i++){
		x[i].xuat();
	}
	cout<<setw(20)<<giaovien<<endl;
}
int main(){
	LopHoc lh;
	cout<<"\n nhap thong tin cua 1 lop hoc:";
	lh.nhap();
	cout<<"\n thong tin cua lop hoc vua nhap la:"<<endl;
	lh.xuat();
	return 0;
}
