#include<bits/stdc++.h>
using namespace std;
class TruongDH;
class Truong{
	protected:
		int matruong;
		char tentruong[20];
	public:
		void nhap();
		void xuat();
		friend void sx(TruongDH *x, int n);
			friend void in_ck(TruongDH *x,const char*tenk, int n);
};
class Khoa{
	private:
	int makhoa;
	char tenk[20];
	char truongk[20];
	public:
		friend class TruongDH;
		friend void in_ck(TruongDH *x,const char*tenk, int n);
		friend void sx(TruongDH *x, int n);
};
class Ban{
	private:
		int mab;
		char tenb[20];
		char ngaytl[20];
	public:
		friend class TruongDH;
};
class TruongDH:public Truong{
	private:
		int sokhoa;
		Khoa *x;
		int soban;
		Ban *y;
	public:
		void nhap();
		void xuat();
		friend void in_ck(TruongDH *x,const char*tenk, int n);
		friend void sx(TruongDH *x, int n);
};
void TruongDH ::nhap(){
	cout<<"nhap matruong:"; cin>>matruong;
	cout<<"nhap ten truong:";fflush(stdin); gets(tentruong);
	cout<<"nhap so khoa:"; cin>>sokhoa;
	x = new Khoa[sokhoa];
	for(int i=0 ; i<sokhoa ; i++){
		cout<<"nhap khoa thu"<<i+1<<endl;
		cout<<setw(20)<<"nhap ma khoa:"; cin>>x[i].makhoa;
		cout<<setw(20)<<"ten khoa:"; cin>>x[i].tenk;
		cout<<setw(20)<<"truong khoa:"; cin>>x[i].truongk;
	}
		cout<<"nhap so ban:"; cin>>soban;
	y = new Ban[soban];
	for(int i=0 ; i<soban ; i++){
		cout<<"nhap ban thu "<<i+1<<endl;
		cout<<setw(20)<<"nhap ma ban:"; cin>>y[i].mab;
		cout<<setw(20)<<"ten ban:"; cin>>y[i].tenb;
		cout<<setw(20)<<"ngay tl:"; cin>>y[i].ngaytl;
	}
}
void tieude(){
	cout<<setw(20)<<" ma khoa:";
	cout<<setw(20)<<"ten khoa:";
	cout<<setw(20)<<"truong khoa:";
	cout<<setw(20)<<" ma ban:"; 
	cout<<setw(20)<<"ten ban:";
	cout<<setw(20)<<"ngay tl:"<<endl;
}
 void in_ck(TruongDH *dh,const char*tenk, int n){
 bool check = false;
 for(int i=0 ;i<n ; i++){
 	if(strcmpi(dh[i].tenk,tenk)==0){
 		check = true;
 		break;
	 }
 }
 if(check){
 	cout<<" khoa co khi duopx iun ra:"<<endl;
 	tieude();
 	for(int i=0 ;i<n ; i++){
 	if(strcmpi(dh[i].tenk,tenk)==0){
 		dh[i].xuat();
	 }
 }
 }
}
void TruongDH ::xuat(){

	cout<<"ma truong:"<<matruong<<endl;
	cout<<"ten truong:"<<tentruong<<endl;
//		tieude();
	for(int i=0 ; i<sokhoa ; i++){
		cout<<setw(10)<<i+1<<endl;
		cout<<setw(20)<<x[i].makhoa;
		cout<<setw(20)<<x[i].tenk;
		cout<<setw(20)<<x[i].truongk;
	}
	for(int i=0 ; i<soban ; i++){
		cout<<setw(20)<<y[i].mab;
		cout<<setw(20)<<y[i].tenb;
		cout<<setw(20)<<y[i].ngaytl<<endl;
	}
}
void sx(TruongDH *x, int n){
	for(int i=0 ; i< n-1 ; i++){
		for(int j=i+1 ; j<n ; j++){
			if(strcmpi(x[i].tentruong,x[j].tentruong)<0){
			swap(x[i], x[j]);
			}
		}
	}
	for(int i=0 ; i<n ; i++){
		x[i].xuat();
	}
}
int main(){
	TruongDH *trg1;
	int n;
	cout<<"nhap ds truong dai hoc:";
	cin>>n;
	trg1 = new TruongDH[n];
	for(int i=0;i<n ; i++){
		trg1[i].nhap();
	}
	cout<<"danh sach truong dai hoc vua nhap :"<<endl;
	tieude();
	for(int i=0;i<n ; i++){
		trg1[i].xuat();
	}
	cout<<" truong sau khi sx :"<<endl;
	sx(trg1,n);
	in_ck(trg1,"CK",n);
	return 0;
}
