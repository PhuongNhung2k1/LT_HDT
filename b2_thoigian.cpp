#include<bits/stdc++.h>
using namespace std;
class thoigian{
	private:
		float gio, phut, giay;
	public:
		thoigian(){
			gio=phut=giay=0.0;
		}
		thoigian(float g , float p ,float q){
			gio = g;
			phut = p;
			giay = q;
		}
		friend istream &operator >>(istream &is, thoigian &t);
		friend ostream &operator <<(ostream &os, thoigian t);
		thoigian operator +(thoigian t);
		thoigian operator -(thoigian t);
		
};
istream &operator >>(istream &is, thoigian &t){
	cout<<"nhap so gio ";is>>t.gio;
	cout<<"nhap so phut";is>>t.phut;
	cout<<"nhap so giay ";is>>t.giay;
	return is;
}
ostream &operator <<(ostream &os, thoigian t){
	cout<<"thoi gian:";
	os<<t.gio<<":"<<t.phut<<":"<<t.giay<<endl;
	return os;
}
thoigian thoigian::operator +(thoigian t){
	thoigian tong;
	tong.gio = gio+t.gio;
	tong.phut = phut +t.phut;
	tong.giay = giay +t.giay;
	return tong;
}
thoigian thoigian::operator -(thoigian t){
	thoigian hieu;
	hieu.gio = gio-t.gio;
	hieu.phut = phut -t.phut;
	hieu.giay = giay -t.giay;
	return hieu;
}
int main(){
	thoigian P(12,4.5,20), Q,tong,thuong;
	cout<<"\nnhap tgian:";
	cin>>Q;
	tong= P+Q;
	thuong = P-Q;
	cout<<"tong tgian:"<<tong<<endl;
	cout<<"thuong tgian:"<<thuong<<endl;
	return 0;
}
