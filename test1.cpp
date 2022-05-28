#include<bits/stdc++.h>
using namespace std;
class Maytinh{
	private:
		char mamay[10];
		char tenmay[20];
		float tocdo;
		char Hangsx[20];
		char Dcsx[30];
	public:
		friend class Phongmay;
		friend void sapxep_theoten(Maytinh x[], int n);
		friend void tim_nsx_Hanoi(Maytinh x[], int n);
};
class Phongmay{
	private:
		char tenpm[20];
		char Nguoiql[20];
		Maytinh *x;
		int n;
	public:
		void nhap();
		void xuat();
	friend void sapxep_theoten(Maytinh x[], int n);
	friend void tim_nsx_Hanoi(Maytinh x[], int n);
};
void Phongmay::nhap(){
	cout<<"\t Nhap ten pm :"; fflush(stdin); gets(tenpm);
	cout<<"\t Nhap ten nguoi quan ly:"; fflush(stdin); gets(Nguoiql);
	cout<<"\t nhap vao so luong may tinh:"; cin>>n;
	x = new Maytinh[n];
	for(int i=0; i<n ; i++){
		cout<<"\n nhap may tinh thu "<<i+1<<endl;
		cout<<"\t Nhap ma may :"; fflush(stdin); gets(x[i].mamay);
		cout<<"\t Nhap ten may :"; fflush(stdin); gets(x[i].tenmay);
		cout<<"\t toc do:"; cin>>x[i].tocdo;
		cout<<"\t Nhap hang sx :"; fflush(stdin); gets(x[i].Hangsx);
		cout<<"\t Nhap dia chi sx :"; fflush(stdin); gets(x[i].Dcsx);
	}	
}
void tieude(){
cout<<setw(30)<<"ma may"<<setw(15)<<"ten may"<<setw(15)<<"tocdo"<<setw(20)<<"Hangsx"<<setw(20)<<"Dcsx"<<endl;
}
void sapxep_theoten(Maytinh x[], int n){
	for(int i=0; i<n-1 ; i++){
		for(int j=i+1; j<n ; j++){
			if(stricmp(x[i].tenmay,x[j].tenmay)>0)
				{
					Maytinh temp = x[i];
					x[i] = x[j];
					x[j]= temp;
				}
		}
	}
	for(int i=0 ; i<n ; i++){
		cout<<setw(30)<<x[i].mamay;
		cout<<setw(15)<<x[i].tenmay;
		cout<<setw(15)<<x[i].tocdo;
		cout<<setw(20)<<x[i].Hangsx;
		cout<<setw(20)<<x[i].Dcsx<<endl;
	}
}
void Phongmay::xuat(){
	cout<<setw(10)<<"ten pm"<<setw(20)<<"Nguoiql"<<endl;
	cout<<setw(10)<<tenpm<<setw(20)<<Nguoiql<<endl;
	tieude();
	for(int i=0; i<n ; i++){
		cout<<"May thu"<<i+1<<endl;
		cout<<setw(30)<<x[i].mamay;
		cout<<setw(15)<<x[i].tenmay;
		cout<<setw(15)<<x[i].tocdo;
		cout<<setw(20)<<x[i].Hangsx;
		cout<<setw(20)<<x[i].Dcsx<<endl;
	}
}
void tim_nsx_Hanoi(Maytinh x[], int n){
	for(int i=0 ; i<n ; i++){
	if(stricmp(x[i].Dcsx,"Ha noi")==0){
		cout<<setw(30)<<x[i].mamay;
		cout<<setw(15)<<x[i].tenmay;
		cout<<setw(15)<<x[i].tocdo;
		cout<<setw(20)<<x[i].Hangsx;
		cout<<setw(20)<<x[i].Dcsx<<endl;
 		}
	}
}

int main(){
	Phongmay pm1;
	pm1.nhap();
	Maytinh *mt1;
	int n;
	mt1 = new Maytinh[n];
	cout<<"-------------------------Thong tin phong may vua nhap-------------------------"<<endl;
	pm1.xuat();
	cout<<"-------------------------Thong tin phong may sau khi duoc sap xep-------------------------"<<endl;
	sapxep_theoten(mt1,n);
	tim_nsx_Hanoi(mt1,n);
	return 0;
}
