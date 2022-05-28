#include<bits/stdc++.h>
using namespace std;
class PS{
	private:
		float tu;
		float mau;
	public:
//		PS(float a, float b){
//		tu=a;
//		mau=b;
//       }
		void nhap();
		void xuat();
	//PS operator *(PS B);
	PS operator +(PS b);
	float PS operator ++();
};
void PS::nhap(){
	cout<<"\n nhap tu so: "; cin>>tu;
	cout<<"\nnhap mau so :"; cin>>mau;
}
void PS::xuat(){
	cout<<tu<<"/"<<mau<<endl;
}
//PS PS:: operator * (PS B){
//	PS k;
//	k.tu = tu*B.tu;
//	k.mau = mau*B.mau;
//	return k;
//}
PS PS ::operator +(PS b){
	PS k;
	k.tu = tu*b.mau + mau*b.tu;
	k.mau = mau*b.mau;
	return k;
}
float PS::operator ++(){
	return  tu/mau;
}
int main(){
    PS M,N;
    M.nhap();
    M.nhap();
    PS P= M +N;
    P.xuat();
    cout<<"\n gtps :"<<++P;
	return 0;
}
