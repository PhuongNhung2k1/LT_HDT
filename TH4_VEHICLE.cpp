#include<bits/stdc++.h>
using namespace std;
class Vehicle{
	protected:
		char nhanhieu[20];
		int Namsx;
		char Hang[20];
};
class OTO:public Vehicle{
	private:
		int sochongoi;
		float dungtich;
	public:
		void nhap(){
			cout<<"\t Nhap nhan hieu:";
			fflush(stdin);
			gets(nhanhieu);
			cout<<"\t Nhap Nam sn xuat:"; cin>>Namsx;
			cout<<"\t Nhap hang san xuat:";
			fflush(stdin);
			gets(Hang);
			cout<<"\t Nhap so cho ngoi:"; cin>>sochongoi;
			cout<<"\t Nhap dung tich:"; cin>>dungtich;
		}
		void xuat(){
			cout<<setw(10)<<nhanhieu<<setw(15)<<Namsx<<setw(15)<<Hang<<setw(15)<<dungtich<<endl;
		}
		friend void inxe_toyota(OTO ot[], int n, const char *hangsx);
		friend void sapxep_ten(OTO ot[], int n);
		friend chen_oto(OTO ot[], int n, int k, const char *otmoi);
		friend void xoa_nhanhieu_oto(OTO ot[], int n, const char *nhanhieu);
		friend void xoa(int x[], int &n, int k);
};
void tieude_oto(){
		cout<<setw(10)<<"nhanhieu"<<setw(15)<<"Namsx"<<setw(15)<<"Hang"<<setw(15)<<"dung tich"<<endl;
}
class MOTO:public Vehicle{
	private:
		long phankhoi;
	public:
		void nhap(){
			cout<<"\t Nhap nhan hieu:";
			fflush(stdin);
			gets(nhanhieu);
			cout<<"\t Nhap Nam sn xuat:"; cin>>Namsx;
			cout<<"\t Nhap hang san xuat:";
			fflush(stdin);
			gets(Hang);
			cout<<"\t Nhap phan khoi:"; cin>>phankhoi;
		}
		void xuat(){
					cout<<setw(10)<<"nhanhieu"<<setw(15)<<"Namsx"<<setw(15)<<"Hang"<<setw(15)<<"phan khoi"<<endl;

			cout<<setw(10)<<nhanhieu<<setw(15)<<Namsx<<setw(15)<<Hang<<setw(15)<<phankhoi<<endl;

		}
};
// in ra hang xe co ten la toyota
void inxe_toyota(OTO ot[], int n, const char *hangsx){
	bool check = false;
	for(int i=0 ; i<n ; i++){
		if(strcmpi(ot[i].Hang,hangsx)==0){
			check = true;
			break;
		}
	}
	if(check){
		for(int i=0 ; i<n ; i++){
		if(strcmpi(ot[i].Hang,hangsx)==0){
			ot[i].xuat();
	             }
           }
       }
    else 
    cout<<"\n khong tim thay hang xe ban can tim :<"<<endl;
}
// sap xep oto theo thu tu ten
void sapxep_ten(OTO ot[], int n){
	for(int i=0 ; i<n-1 ; i++){
		for(int j=n-1;j>i;j--){
			if(strcmpi(ot[i].nhanhieu,ot[j].nhanhieu)> 0){
				swap(ot[i],ot[j]);
			}
		}
	}
	for(int i=0 ; i<n ; i++){
		ot[i].xuat();
	}
	
}
// them moi 1 oto vao danh sach 
//void chen_oto(OTO ot[], int n, int k, const char *otmoi){
//	cout<<"\n nhap vao ten oto moi:"; fflush(stdin); gets(otmoi);
//	if(k>0 &&k <n-1){
//		for(int i=n-1 ; i>k-1 ; i--){
//			ot[i] = ot[i-1];
//			strcpy(ot[i],otomoi);
//		}
//	}
//}
void xoa(int x[], int &n, int k){
	if(k>0||k<n){
		for(int i=k ; i<n-1; i++){
		x[i]= x[i+1];
	}
	n--;
	}
}
void xoa_nhanhieu_oto(OTO ot[], int n, const char *nhanhieu){
	bool check = false;
	int k;
	for(int i=0 ; i<n ; i++){
		if(strcmpi(ot[i].nhanhieu,nhanhieu)==0){
			check = true;
			k =1;
		}
	}
	if(check){
		for(int i=k ; i<n ; i++){
			if(strcmpi(ot[i].nhanhieu,nhanhieu)==0){
				ot[i]= ot[i+1];
				i--;
			}
			n--;
		}
	}
	tieude_oto();
	for(int i=0 ; i<n ; i++){
		ot[i].xuat();
	}
}
//void chen(int x[], int &n , int k,double x){
//	for(int i=n-1; i>k ; i--){
//		x[i] = x[i-1];
//	}
//	x[k-1]=x;
//	n++;
//}
void chen(OTO *ot ,int &n, int k){
	ot =(OTO *)realloc (ot,n+1);
	OTO oto;
	cout<<"\n nhapvao thong tin oto moi:";
	oto.nhap();
	for(int i=n-1 ; i>=k-1; i--){
		ot[i+1]= ot[i];
	}
	ot[k-1] = oto;
	n++;
	
}
void Danhsach_oto(OTO *ot, int n){
	tieude_oto();
	for(int i=0 ; i<n ; i++){
		ot[i].xuat();
		cout<<endl;
	}
}
int main(){
	OTO *ot;
	int n;
	MOTO mt;
	cout<<"\n Nhap danh sach xe to :"; cin>>n;
	ot = new OTO[n];
	for(int i=0 ; i<n ; i++){
		cout<<"\n nhap o to thu"<<i+1<<endl;
		ot[i].nhap();
	}
	cout<<"\n Nhap thong tin xe mo to:"<<endl;
	mt.nhap();
	cout<<"===================Thong tin xe oto:================="<<endl;
	tieude_oto();
	for(int i=0 ; i<n ; i++){
		ot[i].xuat();
	}
	cout<<"===================Thong tin xe moto:================="<<endl;
	mt.xuat();
//	cout<<"\n hang xe vua tim la:"<<endl;
//	inxe_toyota(ot,n,"Toyota");
//	cout<<"\n ten nhan hieu oto duocxep theo ten tu dien la:"<<endl;
//	tieude_oto();
//	sapxep_ten(ot,n);
//	cout<<"\n sau khi xoa oto:"<<endl;
//	xoa_nhanhieu_oto(ot,n,"vision");
	int k;
	cout<<"\nnhap vitri can chen:"; cin>>k;
	chen(ot,n,k);
	Danhsach_oto(ot,n);
	return 0;
}
