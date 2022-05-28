//#include<bits/stdc++.h>
//using namespace std;
//class ARRAY{
//	private:
//		int n;
//		int *a;
//	public:
//		ARRAY(){
//			n = 1;
//		}
//		~ARRAY(){
//			n = 0;
//		}
//		friend istream &operator >>(istream &is, ARRAY &x);
//		friend ostream &operator <<(ostream &os, ARRAY x);
//		ARRAY operator --();
//		int operator+();
//		 int operator ++();
//		bool operator<<(ARRAY x);
//		
//};
//istream &operator >>(istream &is, ARRAY &x){
// 	cout<<"nhap so luong phan tu:"<<endl;
// 	is>>x.n;
// 	x.a = new int[x.n];
// 		for(int i=0; i<x.n ;i++){
// 			cout<<"a["<<i<<"]=";
// 			is>>x.a[i];
//		 }
//	return is;
// } 
//ostream &operator <<(ostream &os, ARRAY x){
// 	for(int i=0 ; i<x.n; i++){
// 		os<<x.a[i]<<"  ";
//	 }
//	 return os;
// }
//
//ARRAY ARRAY:: operator --(){
// 	for(int i=0 ;i<n-1; i++){
// 		for(int j =i+1; j<n ; j++){
// 			if(a[i]<a[j]){
// 				int tam = a[i];
// 				a[i]= a[j];
// 				a[j]= tam;
//			 }
//		 }
//	 }
//	 return *this;
// }
//ARRAY::operator+(){
//	int tong=0;
//	for(int i =0 ; i< n ; i++){
//		if(a[i]>0 &&a[i]%2==0){
//			tong += a[i];
//		}
//	}
//	return tong;
//}
//ARRAY::dem(){
//	int phantu = 0;
//	for(int i=0 ; i<n ; i++){
//		if(a[i]%2!=0){
//			phantu ++;
//		}
//	}
//	return phantu;
//}
//int main(){
//	ARRAY m1,m2;
//	cout<<"nhap mang thu nhat :";
//	cin>>m1;
//	cout<<"nhap mang thu hai :";
//	cin>>m2;
//	ofstream f("array.txt",ios::out);
//	f<<"\nhai mang vua nhap la:"<<endl;
//	f<<m1<<endl<<m2<<endl;
//	f.close();
//	ofstream f2("array.txt",ios::out);
//	f2<<"\nmang thu nhat sau khi sap xep giam la:"<<endl;
//	f2<<--m1<<endl;
//	f2<<"\nmang hai nhat sau khi sap xep giam la:"<<endl;
//	f2<<--m2<<endl;
//	f2.close();
//	cout<<"Tong cac phan tu chan duong trong mang 1:"<<+m1<<endl;
//	cout<<"Tong cac phan tu chan duong trong mang 2:"<<+m2;
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
class ARRAY{
	private:
		int n;
		int *a;
	public:
		ARRAY(){
			n = 2;
			a[n];
		}
		~ARRAY(){
			n = 0;
			a[n];
		}
		friend istream &operator >>(istream &is, ARRAY &x);
		friend ostream &operator <<(ostream &os, ARRAY x);
		ARRAY operator --();
		int operator++();
		bool operator<<(ARRAY x);
		
};
istream &operator >>(istream &is, ARRAY &x){
 	cout<<"nhap so luong phan tu:"<<endl;
 	is>>x.n;
 	x.a = new int[x.n];
 		for(int i=0; i<x.n ;i++){
 			cout<<"a["<<i<<"]=";
 			is>>x.a[i];
		 }
	return is;
 } 
ostream &operator <<(ostream &os, ARRAY x){
 	for(int i=0 ; i<x.n; i++){
 		os<<x.a[i]<<"  ";
	 }
	 return os;
 }

ARRAY ARRAY:: operator --(){
 	for(int i=0 ;i<n-1; i++){
 		for(int j =i+1; j<n ; j++){
 			if(a[i]<a[j]){
 				int tam = a[i];
 				a[i]= a[j];
 				a[j]= tam;
			 }
		 }
	 }
	 return *this;
 }
ARRAY::operator++(){
	int tong=0;
	for(int i =0 ; i< n ; i++){
		if(a[i]>0 &&a[i]%2==0){
			tong += a[i];
		}
	}
	return tong;
}

int main(){
	ARRAY m1,m2;
	cout<<"nhap mang thu nhat :";
	cin>>m1;
	cout<<"nhap mang thu hai :";
	cin>>m2;
	ofstream f("array.txt",ios::out);
	f<<"\nhai mang vua nhap la:"<<endl;
	f<<m1<<endl<<m2<<endl;
	f.close();
	ofstream f2("array.txt",ios::out);
	f2<<"\nmang thu nhat sau khi sap xep giam la:"<<endl;
	f2<<--m1<<endl;
	f2<<"\nmang hai nhat sau khi sap xep giam la:"<<endl;
	f2<<--m2<<endl;
	f2.close();
	cout<<"Tong cac phan tu chan duong trong mang 1:"<<++m1<<endl;
	cout<<"Tong cac phan tu chan duong trong mang 2:"<<++m2;
	return 0;
}
