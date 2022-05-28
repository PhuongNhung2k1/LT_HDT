#include<iostream>
#include<iomanip>
using namespace std;
class Date{
	private:
		int day,month , year;
	public:
		void nhap();
		void xuat();
	friend class Nhansu;
};
class Nhansu{
	private:
		char mans[10];
		char hoten[30];
		Date NS;
	public:
		void nhap();
		void xuat();
};
void Date::nhap(){
	cout<<"\nnhap ngay:";  cin>>day;
	cout<<"\nnhap thang";  cin >>month;
	cout<<"\nnhap nam";  cin>>year;
}
void Date::xuat(){
	cout<<day<<setw(15)<<month<<setw(15)<<year<<setw(20);
}
void Nhansu::nhap(){
	cout<<"\nnhap ngay thang nam :";
	NS.nhap();
	cout<<" Ma nhan su:";
	fflush(stdin);
	gets(mans);
	cout<<" Ho ten:";
	fflush(stdin);
	gets(hoten);	
}
void tieude(){
	cout<<" Ngay "<<setw(15);
	cout<<" thang "<<setw(15);
	cout<<" Nam "<<setw(20);
	cout<<" ma ns "<<setw(15);
	cout<<" ho ten ns "<<endl;
}
void Nhansu::xuat(){
	NS.xuat();
	cout<<mans<<setw(20)<<hoten<<setw(15)<<endl;
}
int main(){
	Nhansu ns1;
	ns1.nhap();
	cout<<" Thong tin cac nhan su"<<endl;
	tieude();
	ns1.xuat();
	return 0;
}
