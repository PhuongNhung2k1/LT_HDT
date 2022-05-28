#include<bits/stdc++.h>
using namespace std;
class student;
class school;
class person{
	protected:
		char ten[20];
		int tuoi;
	public:
		void nhap(){
			cout<<"nhap ten hieu truong:";
			fflush(stdin); gets(ten);
			cout<<"nhap tuoi hieu truong:"; cin>>tuoi;
		}
		void xuat(){
			cout<<ten<<endl;
			cout<<tuoi<<endl;
		}
	friend class school;
//	friend void timkiem(student *sv,const char *tentr, int n);
};
class school{
	private:
		char tentruong[20];
		char dc[30];
		person hieutruong;
	public:
		friend class student;
		friend void timkiem(student *sv,const char *tentr, int n);
};
class student:public person{
	private:
		char lop[10];
		char nganh[20];
		school truong;
	public:
		void nhap();
		void xuat();
	friend	class school;
	friend void timkiem(student *sv,const char *tentr, int n);
	friend void chen(student *sv, int &n, int k);
};
void student::nhap(){
	cout<<"nhap thong tin hieu truong:"<<endl;
	truong.hieutruong.nhap();
	cout<<"nhap ten truong:"; fflush(stdin); gets(truong.tentruong);
	cout<<"nhap dc truong:"; fflush(stdin); gets(truong.dc);
	cout<<"nhap ten lop:";fflush(stdin); gets(lop);
	cout<<"nhap ten nganh:"<<endl; fflush(stdin); gets(nganh);
}
void tieude(){
	cout<<"ten :"<<endl;
	cout<<"tuoi :"<<endl;
	cout<<setw(15)<<"ten truong";
	cout<<setw(15)<<"dia chi ";
	cout<<setw(15)<<"ten lop";
	cout<<setw(15)<<"ten nganh"<<endl;
}
void student::xuat(){
	truong.hieutruong.xuat();
	cout<<setw(15)<<truong.tentruong;
	cout<<setw(15)<<truong.dc;
	cout<<setw(15)<<lop;
	cout<<setw(15)<<nganh;
}
// dau ra ten truong co ten "DHCNHN"
void timkiem(student *sv,const char *tentr, int n){
	bool check = false;
	for(int i =0 ; i<n; i++){
		if(strcmp(sv[i].truong.tentruong,tentr)==0){
			check = true;
			break;
		}
	}
	if(check){
		for(int i=0 ; i< n; i++){
			if(strcmp(sv[i].truong.tentruong,tentr)==0){
				sv[i].xuat();
			}
		}
	}
}
// chen 1 sv moi vao 
void chen(student *sv, int &n, int k){
	sv = (student *)realloc(sv, n+1);
	student moi;
	cout<<"nhap vao thong tin sv moi:";
	moi.nhap();
	for(int i=n-1 ; i>k ; i--){
		sv[i+1]=sv[i];
	}
		sv[k] = moi;
	n++;
	for(int i=0 ; i<n ; i++){
	sv[i].xuat();
 }
}
int main(){
	student *sv;
	int n;
	cout<<"nhap vao ds sv:";
	cin>>n;
	sv = new student[n];
	for(int i=0 ;i<n ; i++){
		cout<<"nhap sv thu"<<i+1<<endl;
		sv[i].nhap();
	}
	cout<<"danh sach sv vua nhap"<<endl;
	tieude();
	for(int i=0 ; i<n ; i++){
		sv[i].xuat();
	}
	cout<<"tim kiem"<<endl;
	timkiem(sv,"DHCNHN",n);
	int k;
	cout<<" nhap vao vt can chen:";
	cin>>k;
	cout<<" sv sau khi chen them"<<endl;
	chen(sv,n,k);
	return 0;
}
