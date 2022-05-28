#include<bits/stdc++.h>
using namespace std;
class Diem{
	private:
		float x,y,z;
	public:
		Diem(){
			x = y = z = 0;
		}
		Diem(float a, float b, float c){
			x = a;
			y = b;
			z = c;
		}
		Diem operator +(Diem b);
		Diem operator -(Diem b);
		friend istream &operator >> (istream &is, Diem &b);
		friend ostream &operator <<(ostream &os, Diem b);
};
istream &operator >> (istream &is, Diem &b){
	cout<<" nhap vao toa do x:"; is>>b.x;
	cout<<" nhap vao toa do y:"; is>>b.y;
	cout<<" nhap vao toa do z:"; is>>b.z;
	return is;
}
ostream &operator <<(ostream &os, Diem b){
	os<<"("<<b.x<<","<<b.y<<" ,"<<b.z<<")"<<endl;
	return os;
}
Diem Diem :: operator +(Diem b){
	Diem k;
	k.x = x + b.x;
	k.y = y + b.y;
	k.z = z + b.z;
	return k;
}
Diem Diem :: operator -(Diem b){
	Diem k;
	k.x = x - b.x;
	k.y = y - b.y;
	k.z = z - b.z;
	return k;
}
int main(){
	Diem A(2.5,3,1.5) , B,tong, hieu;
	cout<<"nhap gia tri diem B:";
	cin>>B;
	tong = A+B;
	hieu = A-B;
	cout<<"Tong hai diem :"<<"A"<<A<<", B"<<B<<tong<<endl;
	cout<<"Hieu 2 diem:"<<"A"<<A<<", B"<<B<<hieu<<endl;
	return 0;
}
