#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	float *a;
	cout<<"nhap vao so phan tu cua mang:"; cin>>n;
	a  = new float[n] ;
	for(int i=0 ; i< n ; i++){
		cout<<"\t nhap a["<<i<<"]=";
		cin>>a[i];
	}
	cout<<"mang duowc nhap la:"<<endl;
	for(int i=0 ; i< n ; i++){
		cout<<a[i]<<" ";
	}
	// sap xep mang  A giam dan
//	cout<<"day duoc sap xep :";
//	for(int i = 0 ; i< n-1; i ++){
//		for ( int j = i + 1 ; i< n ; j++){
//			if(a[i] < a[j]){
//				int tam = a[i];
//				a[i] = a[j];
//				a[j] = tam;
//			}
//		}
//	}
//	
//	cout<<"mang duowc sap xep theo chieu giam dan la:"<<endl;
//	for(int i=0 ; i< n ; i++){
//		cout<<a[i]<<" ";
//	}
	int dem = 0;
	for (int i = 0 ; i< n-1 ; i++){
		for(int j = i+1; j< n; j++){
			if(a[i]+a[j] < 20){
			
				dem ++;
			}
		}
	}
	cout<<"cam "<<dem <<"phan tu de tong  < 20"<<endl;
}
