#include<bits/stdc++.h>
using namespace std;
class htg {
	private:
		float a, b, c;
	public:
		float chuvi();
		friend istream& operator >>(istream &is, htg &x);
		friend ostream& operator <<(ostream &os, htg x);
};
float htg::chuvi(){
	return a*b*c;
}
istream& operator >>(istream &is, htg &x){
	cout<<"nhap chieu dai 3 canh tam giac:"<<endl;
	cout<<"a="; is>>x.a;
	cout<<"b="; is>>x.b;
	cout<<"c="; is>>x.c;
	return is;
}
ostream& operator <<(ostream &os, htg x){
	os<<"\n 3 canh tam giac :"<<endl;
	os<< x.a <<" "<< x.b <<" "<<x.c<<endl;
	os<<"CHU VI TAM GIAC:"<<x.chuvi()<<endl;
	return os;
}
int main(){
	htg P,Q;
	cout<<"nhap thong tin tam giac P:"; cin>>P;
	cout<<"nhap thong tin tam giac Q:"; cin>>Q;
	ofstream f("INOUT.txt",ios::out);
	f<<"thong tin tam giac P"<<P<<endl;
	f<<"thong tin tam giac Q"<<Q<<endl;
	f.close();
	ifstream f2("INOUT.txt",ios::in);
	char s[200];
	while(!f2.eof()){
		f2.getline(s,200);
		cout<<s<<endl;
	}
	f2.close();
	return 0;
}
