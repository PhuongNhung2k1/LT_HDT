#include<bits/stdc++.h>
using namespace std;

class Donvi{
	private:
		char madv[10];
		char tendv[20];
		char diachi[20];
		char truongdv[20];
	public:
		friend class BangTKTS;
};
class Taisan{
	private:
		char mats[10];
		char tents[20];
		char dvt[10];
		float giatri;
	public:
		void nhap();
		void xuat();
	friend class BangTKTS;
};

class BangTKTS{
	private:
		char ngaylap[20];
		char nguoilap[20];
		Donvi y;
		Taisan *x;
		int n;
	public:
		void nhap();
		void xuat();
};
void Taisan::nhap(){
	cout<<"Ma ts: "; fflush(stdin) ; gets(mats);
	cout<<"Ten ts: "; fflush(stdin) ; gets(tents);
	cout<<"Don vi tinh: "; fflush(stdin) ; gets(dvt);
	cout<<"gia tri: "<<endl; cin>>giatri;
}
void Taisan ::xuat(){
	cout<<setw(25)<<mats;
	cout<<setw(25)<<tents;
	cout<<setw(25)<<dvt;
	cout<<setw(25)<<giatri<<endl;
}
void tieude(){
	cout<<setw(25)<<"ma ts";
	cout<<setw(25)<<"ten ts";
	cout<<setw(25)<<"dvt";
	cout<<setw(25)<<"gia tri"<<endl;
}
void BangTKTS::nhap(){
	cout<<"ngay lap:" ; fflush(stdin); gets(ngaylap);
	cout<<"Nguoi lap: "; fflush(stdin); gets(nguoilap);
	cout<<"Ma dv :"; fflush(stdin); gets(y.madv);
	cout<<"Ten dv :"; fflush(stdin); gets(y.tendv);
	cout<<"Dia chi dv :"; fflush(stdin); gets(y.diachi);
	cout<<"Truong dv :"; fflush(stdin); gets(y.truongdv);
	cout<<"nhap vao so luong tai san:"; cin>>n;
	x = new Taisan[n];
	for(int i=0 ; i<n ; i++){
		cout<<"\n Tai san thu "<<i+1<<endl;
		x[i].nhap();
	}
}
void BangTKTS::xuat(){
	cout<<"ngay lap:"<<ngaylap;
	cout<<setw(25)<<"Nguoi lap:"<<nguoilap<<endl;
	cout<<"Ma dv :"<<y.madv;
	cout<<setw(25)<<y.tendv<<endl;
	cout<<"Dia chi dv:"<<y.diachi;
	cout<<setw(25)<<y.truongdv<<endl;
	for(int i=0 ; i<n ; i++){
		x[i].xuat();
	}
	float tongtb =0;
	for(int i=0 ; i< n ; i++){
		tongtb += x[i].giatri;
	}
	cout<<setw(260)<<"Tong tai san:"<<tongtb<<endl;
}
int main(){
	BangTKTS tkts;
	cout<<"Thong ke tai san:"<<endl;
	tkts.nhap();
	cout<<"----------------Thong tin bang thong ke ts vua nhap-----------------"<<endl;
	tkts.xuat();
	return 0;
}

