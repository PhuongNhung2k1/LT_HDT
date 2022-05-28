#include<bits/stdc++.h>
using namespace std;
class Diem{
	private:
		float x,y,z;
	public:
		Diem(){
			x=y=z=0;
		}
		Diem(float a,float b, float c){
			x = a;
			y = b;
			z = c;
		}
		Diem operator +(Diem d);
		Diem operator -(Diem d);
		friend istream &operator >>(istream &is, Diem &d);
		void xuat();
};
Diem Diem ::operator+(Diem d){
	Diem k;
	k.x = x+ d.x;
	k.y = y +d.y;
	k.z = z+ d.z;
    return k;
}
Diem Diem ::operator-(Diem d){
	Diem k;
	k.x = x - d.x;
	k.y = y - d.y;
	k.z = z - d.z;
    return k;
}
istream &operator >>(istream &is, Diem &d){
	cout<<"\n nhap toa do x:"; is>>d.x;
	cout<<"\n nhap toa do y:"; is>>d.y;
	cout<<"\n nhap toa do z:"; is>>d.z;
	return is;
}
void Diem ::xuat(){
	
	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
int main(){
	Diem a(7,8,9.5),b,t,h;
	cin>>b;
	t = a+b;
	h = a-b;
	cout<"\n toa do diem b vua nhap:";
	b.xuat();
	cout<<"\t tong 2 diem :";
	t.xuat();cout<<endl;
	cout<<"\t hieu 2 diem :";
	h.xuat();
	cout<<endl;
	return 0;
}
