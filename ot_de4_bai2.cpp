#include<bits/stdc++.h>
using namespace std;
class Box{
	private:
		float chieudai, chieurong,chieucao;
	public:
		Box(){
			chieudai=chieurong=chieucao=0;
		}
		Box(float x, float y,float z){
			chieudai = x;
			chieurong =y;
			chieucao =z;
		}
		friend istream &operator >>(istream &is,Box &x);
		friend ostream &operator <<(ostream &os, Box x);
		float thetich();
		Box operator + (Box x);
		//them de
		Box operator > (Box x);
		Box operator < (Box x);
		Box operator - (Box x);
};
istream &operator >>(istream &is,Box &x){
	cout<<"chieu dai:"; is>>x.chieudai;
	cout<<"chieu rong:"; is>>x.chieurong;
	cout<<"chieu cao:"; is>>x.chieucao;
	return is;
}
float Box::thetich(){
	return chieudai*chieurong*chieucao;
}
ostream &operator <<(ostream &os, Box x){
	os<<"do dai 3 canh cua Box :"<<x.chieudai<<" "<<x.chieurong<<" "<<x.chieucao<<endl;
	os<<x.thetich();
	return os;
}
Box Box:: operator +(Box x){
        cout<< thetich() + x.thetich();
}
Box Box:: operator - (Box x){
	 cout<< thetich() - x.thetich();
}
Box Box::operator > (Box x){
	if(thetich() > x.thetich()){
		cout<<"Box1 > box2";
	}
	return *this;
}
Box Box::operator < (Box x){
	if(thetich()< x.thetich()){
		cout<<"Box1 < box2";
	}
	return *this;
}
int main(){
	Box bo1, bo2;
	cout<<"nhap so lieu bo1:"<<endl;
	cin>>bo1;
	cout<<"nhap so lieu bo2:"<<endl;
	cin>>bo2;
	cout<<"tong hai the tich:"<<bo1.thetich() +bo2.thetich()<<endl;
	cout<<"hieu the tich:"<<abs(bo1.thetich() - bo2.thetich())<<endl;
	bo1>bo2;
	bo1<bo2;
	return 0;
}
