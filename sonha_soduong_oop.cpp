#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
class Student;
class Diachi{
	private:
		int sonha[20];
		int soduong[20];
		char tentp[30];
	friend class Student;
	friend void timtheosonha(Student *x, int n);
};
class Student{
	private:
		char Masv[20];
		char hoten[25];
		Diachi dc;
	public:
		void nhap();
		void xuat();
	friend void sapxep(Student *x, int  n);
	friend void timtheosonha(Student *x, int n);
};
void Student::nhap(){
	cout<<"\nnhap msv:"; fflush(stdin); gets(Masv);
	cout<<"\nnhap ho ten :"; fflush(stdin); gets(hoten);
	cout<<"\nnhap so nha:"; 
	cin >>dc.sonha;
	cout<<"\nnhap so duong:";
	cin >>dc.soduong;
	cout<<"\nnhap ten thanh pho:"; fflush(stdin); gets(dc.tentp);
}
void Student ::xuat(){
	cout<<setw(10)<<Masv<<setw(20)<<hoten<<setw(15)<<dc.sonha<<setw(10)<<dc.soduong<<setw(20)<<dc.tentp<<endl;
}
void sapxep(Student x[], int  n){
	for(int i=0 ; i< n; i++){
		for(int j=i+1;j< n-1;j++)
		{
		if(stricmp(x[i].hoten , x[j].hoten)>0)
		swap(x[i],x[j]);
		}
	}
	for(int i=0 ; i< n ; i++){
		x[i].xuat();
	}
}
void timtheosonha(Student x[], int n){
	for(int i=0 ; i< n ; i++){
		if(x[i].dc.sonha < 100||x[i].dc.soduong>40||(stricmp(x[i].dc.tentp,"Da Nang")==0)){
			x[i].xuat();
		}
	}
}
int main(){
	Student *st1;
	int n;
	cout<<"\n nhap danh sach sinh vien:"; cin>>n;
	st1 = new Student[n];
	for(int i=0 ;i<n ; i++){
		cout<<"\n nhap sv thu "<<i+1<<endl;
		st1[i].nhap();
	}
	cout<<"\n Thong tin sinh vien vua duoc nhap la:"<<endl;
	cout<<setw(10)<<"Masv"<<setw(20)<<"hoten"<<setw(15)<<"sonha"<<setw(10)<<"soduong"<<setw(20)<<"tentp"<<endl;
	for(int i=0 ; i< n ; i++){
		st1[i].xuat();
	}
	cout<<"sv sau khi xep la:";
	sapxep(st1,5);
	return 0;
}
