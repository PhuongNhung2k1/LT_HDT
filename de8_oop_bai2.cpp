#include<bits/stdc++.h>
using namespace std;
class PTB2{
	private:
		float a,b,c;
	public:
		PTB2 operator +(PTB2 x);
		PTB2 operator -(PTB2 x);
		PTB2 operator -();
		PTB2(){
			a=b=c=0;
		}
	 PTB2(float x, float y, float z){
		a = x;
		b = y;
		c = z;
		}
		friend ostream &operator <<(ostream &os, PTB2 x);
};
PTB2 PTB2::operator -(PTB2 x){
	PTB2 k;
	k.a = a - x.a;
	k.b = b - x.b;
	k.c = c - x.c;
	return k;
}
PTB2 PTB2::operator +(PTB2 x){
	PTB2 k;
	k.a = a + x.a;
	k.b = b + x.b;
	k.c = c + x.c;
	return k;
}
PTB2 PTB2::operator -(){
	PTB2 k;
	k.a = -a ;
	k.b = -b ;
	k.c = -c ;
	return k;
}
ostream &operator <<(ostream &os, PTB2 x){
	os<<x.a<<"x^2 ";
	if(x.b<0){
		os<<x.b<<"x ";
	}else
	os<<" + "<<x.b<<"x";
		if(x.c<0){
		os<<x.c<<" = 0";
	}else
	os<<" + "<<x.c<<" = 0";
}
int main(){
	PTB2 a(2,-4,5.5),b(1.5,2.5,8),t,h,c;
	cout<<"PTB2 a:"<<a<<endl;
	c= -a;
	t= a+b;
	h = a-b;
	ofstream f("ptb2.txt",ios::out);
	f<<"\t PTB2 sau khi doi dau:"<<c<<endl;
	f<<"\t tong 2 PTB2 :"<<t<<endl;
	f<<"\t hieu 2 PTB2 :"<<h<<endl;
	f.close();
	return 0;
}
