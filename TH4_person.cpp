#include<bits/stdc++.h>
using namespace std;
class Person{
	protected:
		char hoten[30];
		int ngaysinh;
		char quequan[30];
};
class KYSU:public Person{
	private:
		char Nganh[20];
		int Namtn;
	public:
		void nhap();
		void xuat();
	friend int in_ks_theonamtn(KYSU x[], int n);
};
void KYSU::nhap(){
	cout<<"\t nhap ho ten:"; fflush(stdin); gets(hoten);
	cout<<"\t Ngay sinh:"; cin>>ngaysinh;
	cout<<"\t Nhap que quan:"; fflush(stdin); gets(quequan);
	cout<<"\t Nhap nganh:"; fflush(stdin); gets(Nganh);
	cout<<"\t Nam tot nghiep:"; cin>>Namtn;
}
void KYSU::xuat(){
	cout<<setw(10)<<hoten<<setw(20)<<ngaysinh<<setw(20)<<quequan<<setw(20)<<Nganh<<setw(20)<<Namtn<<endl;
}
int in_ks_theonamtn(KYSU x[], int n){
	int max = 2021- x[0].Namtn;
	for(int i=1 ; i<n-1 ; i++){
		for(int j=i+1;j<n ;j++){
			if((2021- x[i].Namtn )< 2021-x[j].Namtn)
			x[i].xuat();
			}
		}
	}
int main(){
	KYSU *ks1;
	int n;
	cout<<"\n Nhap vao so luong ky su:"; cin>>n;
	ks1 = new KYSU[n];
	for(int i=0 ; i<n ; i++){
		ks1[i].nhap();
	}
	cout<<"\n thong tin cac ky su vua duoc nhap :"<<endl;
	cout<<setw(10)<<"ho ten"<<setw(20)<<"ngay sinh"<<setw(20)<<"que quan"<<setw(20)<<"Nganh"<<setw(20)<<"Namtn"<<endl;
		for(int i=0 ; i<n ; i++){
		ks1[i].xuat();
	}
	cout<<"\n ky su tot nghiep gan day nhat:"<<endl;
	in_ks_theonamtn(ks1,n);
	return 0;
}
