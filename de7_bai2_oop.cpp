#include<bits/stdc++.h>
using namespace std;
class Matran{
	private:
		int n,m;
	public:
		friend istream &operator>>(istream &is, Matran &x);
		friend ostream &operator <<(ostream &os,Matran x);
		Matran operator -();
		Matran operator +();
};
istream &operator>>(istream &is, Matran &x){
	cout<<"\n nhap n:"; is>>x.n;
	cout<<"\n nhap m:"; is>>x.m;
	for(int i=0 ; i<x.n ; i++){
		for(int j=0 ; j<x.m; j++){
			cout<<"\t x["<<i<<"]"<<"["<<j<<"]=";
			is>>x[i][j];
		}
	}
}
int main(){
	return 0;
}
