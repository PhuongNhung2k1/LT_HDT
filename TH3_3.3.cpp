#include<bits/stdc++.h>
using namespace std;
class Hang;
class Date{
	private:
		int day, month, year;
	friend class Hang;
	friend void in_hang_2017(Hang *x, int n);
};
class Hang{
	private:
		char mahang[10];
		char Tenhang[20];
		Date ngaysx;
	public:
		void nhap();
		void xuat();
	friend void in_hang_2017(Hang *x, int n);
};
void Hang::nhap(){
	cout<<"\t nhap ma hang :"; fflush(stdin); gets(mahang);
	cout<<"\t nhap ten hang :"; fflush(stdin); gets(Tenhang);
	cout<<"\t nhap ngay sx :"; cin>>ngaysx.day;
	cout<<"\t thang :"; cin>>ngaysx.month;
	cout<<"\t nam :"; cin>>ngaysx.year;
}
void Hang::xuat(){
	cout<<setw(10)<<mahang<<setw(20)<<Tenhang<<setw(20)<<ngaysx.day<<"/"<<ngaysx.month<<"/"<<ngaysx.year<<endl;
}
void in_hang_2017(Hang *x, int n){
	for(int i=0 ; i<n ; i++){
		if(x[i].ngaysx.year == 2017){
			x[i].xuat();
		}
	}
}
int main(){
	Hang *h1;
	int n;
	cout<<"\n nhap so luong mat hang:"; cin>>n;
	h1 = new Hang[20];
	for(int i=0 ; i< n ; i++){
		cout<<"\n nhap mat hang thu"<<i+1<<endl;
			h1[i].nhap();
	}
	cout<<"\n thong tin cac mat hang da duoc nhap la:"<<endl;
	cout<<setw(10)<<"ma hang"<<setw(20)<<"Ten hang"<<setw(20)<<"ngay sx"<<endl;
	for(int i=0 ; i<n ; i++){
		h1[i].xuat();
	}
	cout<<"\n mat hang san xuat vao nam 2017 "<<endl;
	in_hang_2017(h1,n);
	return 0;
}
