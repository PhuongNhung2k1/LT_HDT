#include<bits/stdc++.h>
using namespace std;
class PERSON{
	protected:
		char hoten[20];
		char ngaysinh[20];
		char quequan[30];
		
};
class KYSU : public PERSON{
	private:
		char nganh[20];
		int namTN;
	public:
//		void nhap(){
//			cout<<"\n nhap ho ten:"; fflush(stdin); gets(hoten);
//			cout<<"\n nhap ngay sinh:"; fflush(stdin); gets(ngaysinh);
//			cout<<"\n nhap que quan:"; fflush(stdin); gets(quequan);
//			cout<<"\n nhap nganh:"; fflush(stdin); gets(nganh);
//			cout<<"\n nhap nam tot nghiep:";cin>>namTN;
//		}
//		void xuat(){
//			cout<<setw(10)<<"hoten"<<setw(20)<<"ngaysinh"<<setw(15)<<"quequan"<<setw(10)<<"nganh"<<setw(10)<<"namTN"<<endl;
//			cout<<setw(10)<<hoten<<setw(20)<<ngaysinh<<setw(15)<<quequan<<setw(10)<<nganh<<setw(10)<<namTN<<endl;
//		}
		friend istream &operator >>(istream &x, KYSU &y);
		friend ostream &operator <<(ostream &x, KYSU &y);
};

int main(){
	KYSU ks;
	int n;
	cout<<"\nnhap vao danh sach cac ki su:"; cin>>n;
	for(int i=0 ; i< n ; i++){
		cin>>ks;
	}
	cout<<"\n Danh sach cac ki su vua nhap la:"<<endl;
	for(int i=0 ; i< n ; i++){
		cout<<ks;
	}
	return 0;
}
