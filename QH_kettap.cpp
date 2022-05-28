#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class HangHoa{
	private :
		int mahang;
		char tenhang[20];
		long tientra;
		long chieucao;
	public:
		void nhap();
		void xuat();
		
};
void HangHoa::nhap(){
	cout<<" ma hang:";
	cin>>mahang;
	cout<<" nhap ten hang:";
	fflush(stdin);
	gets(tenhang);
	cout<<" ten tra:"<<endl;
	cin>>tientra;
}
void HangHoa::xuat(){
	cout<<" ma hang "<<mahang;
	cout<<" ten hang "<<tenhang;
	cout<<" tien tra "<<tientra<<endl;
}
class Phieumuahang{
	private:
		int maphieu;
		char tenkhach[20];
		int soloaihang;
		HangHoa dshang[];
		long tongtienhang;
		int n;
		friend class HangHoa;
	public:
		void Nhap();
		void Xuat();
		float getchieucao(){
			return chieucao;
		}
		void setchieucao(float d){
			h=d;
		}
};
void Phieumuahang::Nhap(){
	cout<<" nhap ma phieu:";
	cin>>maphieu;
	cout<<" ten kh:";
	fflush(stdin);
	gets(tenkhach);
	cout<<" so loai hang:";
	cin>>soloaihang;
	cout<<" nhap vao so luong hang hoa:";
	cin>>n;
	for(int i=0 ;i <n ; i++){
		cout<<" hang hoa thu "<<i+1<<endl;
		dshang[i].nhap();
	}
}
void Phieumuahang::Xuat(){
	cout<<" ma phieu "<<maphieu;
	cout<<" ten KH"<<tenkhach;
	cout<<" soluong hang hoa"<<soloaihang;
	cout<<" ---------DANH SACH HANG HOA VUA NHAP LA --------";
	for(int i=0 ; i<n ; i++){
		dshang[i].xuat();
	}
}

int main(){
	Phieumuahang Pm;
	Pm.Nhap();
	Pm.Xuat();
	cout<<" chieu cao la:"<<getchieucao(1.75);
	return 0;
}
