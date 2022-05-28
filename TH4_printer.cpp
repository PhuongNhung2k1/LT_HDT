#include<bits/stdc++.h>
using namespace std;
class Printer{
	protected:
		float trongluong;
		char hangsx[20];
		int Namsx;
		double tocdo;
};
class Dotprinter:public Printer{
	private:
		long matdokim;
	public:
		void nhap(){
			cout<<"\t nhap trong luong:"; cin>>trongluong;
			cout<<"\t hang san xuat:"; fflush(stdin); gets(hangsx);
			cout<<"\t Nam san xuat: "; cin>>Namsx;
			cout<<"\t Toc do :"; cin>>tocdo;
			cout<<"\t Mat do kim:";  cin>>matdokim;
		}
		void xuat(){
			cout<<setw(10)<<trongluong<<setw(15)<<hangsx<<setw(15)<<Namsx<<setw(15)<<tocdo<<setw(20)<<matdokim<<endl;
		}
};
void tieude2(){
	cout<<setw(10)<<"trong luong"<<setw(15)<<"hangsx"<<setw(15)<<"Namsx"<<setw(15)<<"toc do"<<setw(20)<<"do phan giai"<<endl;
}
void tieude1(){
	cout<<setw(10)<<"trong luong"<<setw(15)<<"hangsx"<<setw(15)<<"Namsx"<<setw(15)<<"toc do"<<setw(20)<<"matdokim"<<endl;
}
class Laserprinter:public Printer{
	private:
		long dophangiai;
	public:
	void nhap(){
			cout<<"\t nhap trong luong:"; cin>>trongluong;
			cout<<"\t hang san xuat:"; fflush(stdin); gets(hangsx);
			cout<<"\t Nam san xuat: "; cin>>Namsx;
			cout<<"\t Toc do :"; cin>>tocdo;
			cout<<"\t Do phan giai:";  cin>>dophangiai;
		}
		void xuat(){
			cout<<setw(10)<<trongluong<<setw(15)<<hangsx<<setw(15)<<Namsx<<setw(15)<<tocdo<<setw(20)<<dophangiai<<endl;
		}
};

int main(){
	Dotprinter Dp;
	Laserprinter Lp;
	cout<<"\n nhap vao thong tin may in kim :"<<endl;
	Dp.nhap();
	cout<<"\n nhap vao thong tin may in laser :"<<endl;
	Lp.nhap();
	cout<<"\t Thong tin may in kim:"<<endl;
	tieude1();
	Dp.xuat();
	cout<<"\t Thong tin may in laser:"<<endl;
	tieude2();
	Lp.xuat();
	
}
	
