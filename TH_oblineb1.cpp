#include<bits/stdc++.h>
using namespace std;
class Date{
	private:
		int day;
		int month;
		int year;
	friend class Nhanvien;
};
class Phongban{
	private:
		char mapb[10];
		char tenpb[20];
		char truongphong[20];
		int sonv;
	public:
	friend class Nhanvien;
};
class Nhanvien{
	private:
		char manv[10];
		char tennv[20];
		Date ngaysinh;
		Phongban phong;
	public:
		void nhap();
		void xuat();
	friend void innv(Nhanvien a[],int n);
	friend void xoanv(Nhanvien a[], int n);
};
void Nhanvien::nhap(){
	cout<<"\nManv"; fflush(stdin);
	gets(manv);
	cout<<"\n Ten nv :";  fflush(stdin);
	gets(tennv);
	cout<<"\nngay sinh :"; cin>>ngaysinh.day;
	cout<<"\nthang sinh :"; cin>>ngaysinh.month;
	cout<<"\nnam sinh :"; cin>>ngaysinh.year;
	cout<<"\nma pb :";  fflush(stdin);
	gets(phong.mapb);
	cout<<"\nten pb :";  fflush(stdin);
	gets(phong.tenpb);
	cout<<"\ntruong phong :";  fflush(stdin);
	gets(phong.truongphong);
	cout<<"\n so nhanvien:";
	cin>>phong.sonv;
}
void tieude(){
	cout<<setw(10)<<"Ma NV";
	cout<<setw(10)<<"ten NV";
	cout<<setw(10)<<"ngay sinh";
	cout<<setw(10)<<"Ma phong ban";
	cout<<setw(10)<<"ten phongban";
	cout<<setw(10)<<"truong phong";
	cout<<setw(10)<<"so NV";
}
void Nhanvien::xuat(){
	cout<<setw(10)<<manv;
	cout<<setw(10)<<tennv;
	cout<<setw(10)<<ngaysinh.day<<"/"<<ngaysinh.month<<"/"<<ngaysinh.year;
	cout<<setw(10)<<phong.mapb;
	cout<<setw(10)<<phong.tenpb;
	cout<<setw(10)<<phong.truongphong;
	cout<<setw(10)<<phong.sonv;
}
void innv(Nhanvien a[],int n){
	for(int i=0; i<n ;i++){
		if(stricmp(a[i].phong.tenpb,"Tai chinh")==0)
		a[i].nhap();
	}
}
int main(){
	Nhanvien nv1[20];
	int n;
	cout<<"\n nhap vao ds sinh vien:";
	cin>>n;
	for(int i=0;i<n ; i++){
		cout<<"nhan vien thu "<<i+1<<endl;
		nv1[i].nhap();
	}
	cout<<"\n Danh sach sinh vien vua nhap la:"<<endl;
	tieude();
	for(int i=0;i<n ; i++){
		nv1[i].xuat();
	}
	return 0;
}
