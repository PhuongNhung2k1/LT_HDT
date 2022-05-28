#include<bits/stdc++.h>
using namespace std;
class Matran{
	private:
		int m, n;
		double **a;
	public:
		friend istream& operator>>(istream &is, Matran &x);
		friend ostream& operator<<(ostream &os, Matran x);
		Matran operator +(Matran x);
		Matran operator -(Matran x);
		Matran operator -();
		friend double chuyenvi(Matran x);
};
istream& operator>>(istream &is, Matran &x){
	cout<<" nhap so dong:"; is>>x.m;
	cout<<" nhap so cot:"; is>>x.n;
	x.a = new double*[x.m];
	for(int i=0; i<x.m; i++){
		x.a[i] = new double[x.n];
	}
	for(int i=0 ; i<x.m ;i++){
		for(int j=0; j<x.n; j++){
			cout<<"\ta["<<i<<"]["<<j<<"]=";
			is>>x.a[i][j];
		}
	}
	return is;
}
ostream& operator<<(ostream &os, Matran x){
	for(int i=0 ; i<x.m ;i++){
		for(int j=0 ; j<x.n; j++){
			os<<x.a[i][j]<<"  ";
		}
		os<<endl;
	}
	return os;
}
Matran Matran:: operator -(){
	for(int i=0 ;i<m ; i++){
		for(int j=0 ; j<n ; j++){
		a[i][j] = -this->a[i][j] ;
		}
	}
return *this;
}
Matran Matran:: operator +(Matran x){
	Matran tong;
	tong.m =m;
	tong.n= n;
	tong.a = new double*[tong.m];
	for(int i=0 ; i<tong.m; i++){
		tong.a[i] = new  double[tong.n];
	}
	for(int i=0 ;i<tong.m ; i++){
		for(int j=0 ; j<tong.n ; j++){
			tong.a[i][j] = this->a[i][j] + x.a[i][j];
		}
	}
	return tong;
}
Matran Matran:: operator -(Matran x){
	Matran hieu;
	hieu.m =m;
	hieu.n= n;
	hieu.a = new double*[hieu.m];
	for(int i=0 ; i<hieu.m; i++){
		hieu.a[i] = new  double[hieu.n];
	}
	for(int i=0 ;i<hieu.m ; i++){
		for(int j=0 ; j<hieu.n ; j++){
			hieu.a[i][j] = this->a[i][j] + x.a[i][j];
		}
	}
	return hieu;
}
double Matran::chuyenvi(Matran x){
	x.m = this->m;
	x.n = this->n;
	x.a = new double*[x.n];
	for(int j =0 ; j< x.n ; j++){
		x.a[j]= new double[x.m];
	}
	for(int j=0 ;j<x.n ; j++){
		for(int i=0 ; i<x.m ;i++){
			cout<<x.a[i][j];
		}
		cout<<endl;
	}
	return *this;
}
int main(){
	Matran a,b,mtt,mth,c,d;
	cout<<"\tnhap ma tran A:";cin>>a;
	cout<<"\t nhap ma tran B:";cin>>b;
	 c= -a;
	 d = -b;
	cout<<"\n ma tran sau khi doi dau:"<<endl;
	cout<<c<<endl<<d<<endl;
	mtt= c+d;
	mth =c -d;
	cout<<"\ttong 2 ma tran:"<<endl<<mtt<<endl;
	cout<<"\thieu 2 ma tran:"<<endl<<mth<<endl;
	return 0;
}
