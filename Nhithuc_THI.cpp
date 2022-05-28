#include<bits/stdc++.h>
using namespace std;
class Nhithuc{
	private:
		float a,b;
	public:
		Nhithuc(){
			a=b =1;
		}
		Nhithuc(float x, float y){
			a = x;
			b = y;
		}
		~Nhithuc(){
			a = b =0;
	    }
		friend istream &operator>>(istream &is, Nhithuc &x);
		friend ostream &operator<<(ostream &os, Nhithuc x);
		Nhithuc operator - ();
};
istream &operator>>(istream &is, Nhithuc &x){
	
	cout<<"\n nhap he so a:"; is>>x.a;
	cout<<"\n nhap he so b:"; is>>x.b;
	return is;
}
ostream &operator<<(ostream &os, Nhithuc x){
	os<<x.a<<"x ";
	if(x.b < 0){
		os<<x.b<<" = 0";
	}
	else {
		os<<" + "<<x.b<<" = 0";
	}
	return os;
}
Nhithuc Nhithuc::operator - (){
	a = -a;
	b = -b;
	return *this;
}

int main(){
	Nhithuc a(2,3.5),c;
	Nhithuc b;
	cin>>b;
	c = -b;
	cout<<"Nhi thuc b sau khi doi dau:";
	cout<<c;
	return 0;
}
