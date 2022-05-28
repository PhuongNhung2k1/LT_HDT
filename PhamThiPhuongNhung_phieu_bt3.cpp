#include<bits/stdc++.h>
using namespace std;
class Phanso{
	private:
		float tu, mau;
	public:
		Phanso(){
			tu = mau =0;
		}
		Phanso(float x, float y){
			tu = x;
			mau = y;
		}
		Phanso operator*(Phanso a);
		float operator ++();
	friend istream& operator >>(istream& x, Phanso& y);
	friend ostream& operator <<(ostream& x, Phanso y);
};
Phanso Phanso::operator *(Phanso a){
	Phanso k;
	k.tu = tu *a.tu;
	k.mau = mau*a.mau;
	return k;
}
istream& operator >>(istream& x, Phanso& y){
	cout<<"\n nhap vao tu so:"; x>>y.tu;
	cout<<"\n nhap vao mau so:"; x>>y.mau;
}
ostream& operator <<(ostream& x, Phanso y){
	x<<y.tu<<"/"<<y.mau<<endl;
}
float Phanso::operator ++(){
	return tu/mau;
}
int main(){
	Phanso m,n,p;
    cin>>m;
    cin>>n;
	p = m*n;
	FILE *f;
	f = fopen("D:\\hocfile\\Phanso.txt","w");
	cout<<"\n tich cua hai phan so la: ";
	cout<<++p;
	fprintf(f,"%.3f",p);
	fclose(f);
	return 0;
}
