#include<bits/stdc++.h>
using namespace std;
class Hinhtron{
	private:
		float r;
	public:
		Hinhtron(){
			r =0;
		}
		Hinhtron(float bk){
			r = bk;
		}
		float dientich();
		Hinhtron operator +(Hinhtron a);
		Hinhtron operator - (Hinhtron a);
		//Hinhtron operator < ();
	    friend ostream& operator <<(ostream& x, Hinhtron y);
	    void xuat();
};
float Hinhtron::dientich(){
	return 2*M_PI*r;
}
Hinhtron Hinhtron :: operator +(Hinhtron a){
	Hinhtron b;
	b.r = r + a.r;
	return b;
}
Hinhtron Hinhtron :: operator -(Hinhtron a){
	Hinhtron b;
	b.r = r - a.r;
	return b;
}
ostream& operator<< (ostream& x, Hinhtron &y){
	cout<<"dien tich hinh tron :";
	x<<y.dientich();
	
}
void Hinhtron::xuat(){
	cout<<r;
}
int main(){
	Hinhtron m(2.5), n(1.25),p;
	p = m +n;
	cout<<" dien tich hinh tron co ban kinh:"<<endl;
	p.xuat();
	cout<<"la:"<<p.dientich();
	return 0;
}
