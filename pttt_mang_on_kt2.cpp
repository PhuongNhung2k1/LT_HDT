#include<bits/stdc++.h>
using namespace std;
class mang{
	private:
		int n;
		double *a;
	public:
		friend istream &operator >>(istream &is,mang &y);
		friend ostream &operator <<(ostream &os,mang y);
};
istream &operator >>(istream &is,mang &y){
	cout<<"nhap vao so luong phan tu:";
	is>>y.n;
	
	for(int i=0 ; i<y.n ; i++){
		cout<<"a["<<i<<"]=";
		is>>y.a[i];
	}
	return is;
}
ostream &operator <<(ostream &os,mang y){
	for(int i=0 ; i<y.n ; i++){
		os<<y.a[i]<<"  ";
	}
}
int main(){
	mang a,b,tong, hieu;
	cout<<"nhap ma tran:";
	return 0;
}
