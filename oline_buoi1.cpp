#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
class DN;
class Date{
private:
	int ngay;
	int thang;
	int nam;
public:
	void nhap();
	void xuat();
	friend void in_tp(DN a[], int n);
	friend class DN;
};
class Diachi{
	private:
		char dienthoai[12];
		char phuong[20];
		char quan[20];
		char thanhpho[20];
	friend void in_tp(DN a[], int n);
	friend class DN;
};
class DN{
	private:
		int maDn;
		char tenDn[20];
		Date ngaytl;
		Diachi dc;
		char giamdoc[20];
		long Doanhthu;
	public:
		void nhap();
		void xuat();
	//friend void in_tp(DN a[], int n);
	friend void tong_dt2015(DN a[], int n);
	friend class Diachi;
};
void Date::nhap(){
	cout<<" nhap ngay:"; cin>>ngay;
	cout<<" nhap thang:"; cin>>thang;
	cout<<" nhap nam :"; cin>>nam;
}
void Date::xuat(){
	cout<<" ngay "<<ngay;
	cout<<" thang "<<thang;
	cout<<" nam "<<nam<<endl;
}
void DN::nhap(){
	cout<<" ma DN :";
	cin>>maDn;
	cout<<" ten DN :";
	fflush(stdin);
	gets(tenDn);
	cout<<" ngay thang nam thanh lap:";
	ngaytl.nhap();
	cout<<" dien thoai ";
	fflush(stdin);
	gets(dc.dienthoai);
	cout<<" phuong ";
	fflush(stdin);
	gets(dc.phuong);
	cout<<" quan ";
	fflush(stdin);
	gets(dc.quan);
	cout<<" nhap thanh pho ";
	fflush(stdin);
	gets(dc.thanhpho);
	cout<<" giam doc ";
	fflush(stdin);
	gets(giamdoc);
	cout<" doanh thu";
	cin>>Doanhthu;
}
void tieude(){
	cout<<setw(10)<<" Ma DN ";
	cout<<setw(15)<<" Ten DN ";
	cout<<setw(15)<<" ngay ";
	cout<<setw(15)<<" thang ";
	cout<<setw(15)<<" nam "<<endl;
}
void DN::xuat(){
	cout<<setw(10)<<maDn;
	cout<<setw(10)<<tenDn;
	ngaytl.xuat();
	cout<<setw(10)<<dc.dienthoai<<setw(10)<<dc.phuong<<setw(10)<<dc.quan<<setw(10)<<dc.thanhpho<<endl;
	cout<<setw(10)<<giamdoc<<setw(10)<<Doanhthu<<endl;
}
// in doanh nghiep co thanh pho o ha noi;
void in_tp(DN a[], int n){
	for(int i=0 ; i<n ; i++){
		if(strcmpi(a[i].Diachi.thanhpho," HaNoi")==0)
		a[i].xuat();
	}
}
int main(){
	DN dn1[20];
	int n;
	cout<<" nhap so luong doanh nghiep:";
	cin>>n;
	for( int i=0 ; i<n ; i++){
		cout<<" doang nghiep thu "<<i+1<<endl;
		dn1[i].nhap();
	}
	cout<<" Danh sach doanh nghiep vua nhap la:"<<endl;
	for(int i=0 ; i<n ; i++){
		dn1[i].xuat();
	}
	//tieude();

	return 0;
}
