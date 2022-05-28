#include<bits/stdc++.h>
using namespace std;
class SachGK;
class IDsach;
class Tacgia{
	private:
		char tentg[20];
		char diachi[30];
	public:
		friend class SachGK;
};
class NXB{
	private:
		char tennxb[20];
		char dcnxb[30];
	public:
		friend class SachGK;
	friend void hienthi_GD(SachGK *sach, int n, const char *nxb);
	friend void tim_sach(SachGK *sach, int n, const char *ts);
};
class IDsach{
	protected:
		char tensach[20];
		char masach[10];
	public:
		void nhap(){
			cout<<"\t nhap ten sach:"; fflush(stdin); gets(tensach);
			cout<<"\t nhap ma sach :"; fflush(stdin); gets(masach);
		}
		void xuat(){
			cout<<setw(25)<<tensach;
			cout<<setw(15)<<masach<<endl;	
		}
};
class SachGK:public IDsach{
	private:
		Tacgia x;
		NXB y;
	public:
		void nhap();
		void xuat();
	friend void hienthi_GD(SachGK *sach, int n, const char *nxb);
	friend void tim_sach(SachGK *sach, int n, const char *ts);
	friend void them_sach(SachGK *sach, int &n, int k);
};
void SachGK ::nhap(){
	IDsach::nhap();
	cout<<"\t nhap ten tgia:"; fflush(stdin); gets(x.tentg);
	cout<<"\t dia chi tgia:"; fflush(stdin); gets(x.diachi);
	cout<<"\t nhap ten NXB :"; fflush(stdin); gets(y.tennxb);
	cout<<"\t nhap dia chi NXB:"; fflush(stdin); gets(y.dcnxb);
}
void tieude(){
	cout<<setw(10)<<"ten tg";
	cout<<setw(20)<<"dia chi";
	cout<<setw(20)<<"ten nxb";
	cout<<setw(15)<<"dc nxb";
	cout<<setw(25)<<"ten sach";
	cout<<setw(15)<<"ma sach";
}
void SachGK::xuat(){
	IDsach::xuat();
	cout<<setw(10)<<x.tentg;
	cout<<setw(20)<<x.diachi;
	cout<<setw(20)<<y.tennxb;
	cout<<setw(15)<<y.dcnxb;
	
}
void danhsach_sgk(	SachGK *sgk, int n){
	tieude();
	for(int i=0 ; i<n ; i++){
		sgk[i].xuat();
		cout<<endl;
	}
	
}
void them_sach(SachGK *sach, int &n, int k){
	sach = (SachGK*) realloc(sach, n+1);
	SachGK sgk;
	cout<<"\n nhap thong tin sach moi:";
	sgk.nhap();
	for(int i=n-1 ; i>k-1 ; i--){
		sach[i]= sach[i-1];
	}
	sach[k-1]= sgk;
	n++;
}
void hienthi_GD(SachGK *sach, int n, const char *nxb){
	bool check = false;
	for(int i=0 ;i< n;i++){
		if(strcmpi(sach[i].y.tennxb,nxb) ==0){
			check = true;
			break;
		}
	}
	cout<<endl;
	if(check){
		cout<<"--------------------sach giao khoa cua NXB"<<nxb<<"--------------------"<<endl;
		tieude();
		for(int i=0 ;i< n;i++){
		if(strcmpi(sach[i].y.tennxb,nxb)==0){
			sach[i].xuat();
		  }
	   }
	}
	else
	cout<<"\n khong tim thay sach cua nxb"<<nxb<<endl;
}
void tim_sach(SachGK *sach, int n, const char *ts){
		bool check = false;
	for(int i=0 ;i< n;i++){
		if(strcmpi(sach[i].tensach,ts) ==0){
			check = true;
			break;
		}
	}
	cout<<endl;
	if(check){
		cout<<"--------------------sach giao khoa cua NXB"<<ts<<"--------------------"<<endl;
		tieude();
		for(int i=0 ;i< n;i++){
		if(strcmpi(sach[i].tensach,ts)==0){
			sach[i].xuat();
		  }
	   }
	}
	else
	cout<<"\n khong tim thay sach "<<ts<<endl;
}
int main(){
	SachGK *sgk;
	int n;
	cout<<"\n nhap vao so sach gk:"; cin>>n;
	sgk = new SachGK[n];
	for(int i=0 ; i<n; i++){
		cout<<"\n nhap sach gk thu"<<i+1<<endl;
		sgk[i].nhap();
	}
	cout<<"\n so sach gk vua nhap:"<<endl; 
	tieude();
	for(int i=0 ; i<n; i++){
		sgk[i].xuat();
	}
	hienthi_GD(sgk, n,"Giao duc");
	tim_sach(sgk,n,"LTHDT");
	int k;
	cout<<"\n nhap vao vi tri can them:"; cin>>k;
	them_sach(sgk,n, k);
	danhsach_sgk(sgk,n);
	return 0;
}
