#include<bits/stdc++.h>
using namespace std;
class PS
{
	double TS,MS;
public:
	PS(){
		TS=MS=0.0;
	}
	PS(double a, double b){
		TS = a;
		MS = b;
	}
	PS operator*(PS y);
	double operator--();
	friend istream& operator>>(istream& x, PS& y);
	friend ostream& operator<<(ostream& x, PS y);
 };

istream& operator>>(istream& x, PS& y)
{
	cout<<"Nhap Tu So: "; x>>y.TS;
	cout<<"Nhap Mau So: "; x>>y.MS;
	return x;
}
ostream& operator<<(ostream& x, PS y)
{
	x<<y.TS<<"/"<<y.MS;
	return x;
}
PS PS::operator*(PS y)
{
	PS tg;
	tg.TS = TS * y.TS;
	tg.MS = MS * y.MS;
	return tg;
}
double PS::operator--()
{
	return TS/MS;
}
int main()
{
	PS a,b,tich;
	double  gt;
	cout<<"Nhap phan so thu nhat: "<<endl; cin>>a;
	cout<<"Nhap phan so thu hai: "<<endl; cin>>b;
	tich=a*b;
	ofstream f("D:\phanso.txt", ios::out);
	f<<a<<" * "<<b<<" = "<<tich<<endl;
	f<<"Gia tri phan so :"<<--tich<<endl;
	f.close();
}
