#include<bits/stdc++.h>
using namespace std;
class HCN{
	private:
		float cd,cr,cao;
	public:
		HCN(float x, float y, float z){
		cd=	x;
		cr=y;
		cao= z;
		}
		HCN operator +(int d);
		friend ostream &operator <<(ostream &x, HCN y);
};
ostream &operator <<(ostream &x, HCN y){
	x<<y.cd*y.cr*y.cao<<endl;
}
HCN HCN ::operator +(int d){
	cd = cd+d;
	cr = cr+ d;
	cao = cao +d;
	return *this;
}
int main(){
	HCN a(3,3.5,2);
	cout<<"dien tich hinh hop cn:"<<a;
	int d;
	cout<<"\n nhap d:"; cin>>d;
	HCN sau =  a+d;
	cout<<"\ndt hcn sau khi +"<<d<<" la "<<sau<<endl;
	
	return 0;
}
