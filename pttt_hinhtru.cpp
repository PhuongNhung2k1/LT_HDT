#include<bits/stdc++.h>
using namespace std;
class Htru{
	private:
		double dai, rong, cao;
	public:
		friend istream &operator>>(istream &is, Htru &x);
		friend ostream &operator<<(ostream &os, Htru x);
		float thetich();
		Htru operator + (Htru x);
		Htru operator - (Htru x);
};
 istream &operator>>(istream &is, Htru &x){
 	cout<<"nhap chieu dai:"; is>>x.dai;
 	cout<<"nhap chieu rong:"; is>>x.rong;
 	cout<<"nhap chieu cao:"; is>>x.cao;
 	return is;
 }
 float Htru::thetich(){
 	return dai*rong*cao;
 }
ostream &operator<<(ostream &os, Htru x){
	os<<"the tich hinh tru:"<<x.thetich()<<endl;
}
Htru Htru ::operator + (Htru x){
	Htru k;
	k.dai = dai + x.dai;
	k.rong = rong +x.rong;
	k.cao = dai + x.cao;
	return k;
}
Htru Htru ::operator - (Htru x){
	Htru k;
	k.dai = dai - x.dai;
	k.rong = rong -x.rong;
	k.cao = dai - x.cao;
	return k;
}
int main(){
	Htru a,b,tong,hieu;
	cout<<"\n nhap thong tin hinh tru a"<<endl;
	cin>>a;
	cout<<"\n nhap thong tin hinh tru a"<<endl;
	cin>>b;
	tong = a+b;
	hieu = a-b;
	cout<<"tong 2 hinh :"<<tong<<endl;
	cout<<"hieu 2 hinh :"<<hieu<<endl;
	cout<<"the tich tong hinh tru :"<<tong.thetich()<<endl;
	cout<<"the tich hieu hinh tru:"<<hieu.thetich()<<endl;
	return 0;
}
