#include<bits/stdc++.h>
using namespace std;


void Insert(int a[], int n, int vt){
	int x;
	cout<<"nhap vao gia tri can chen:"; cin>>x;
	for(int i = n-1 ; i>= vt -1; i--){
		a[i+1 ] = a[i];
	}
	a[vt-1] =x;
	n++;
}
int main(){
	int *a, n, k;
	cout<<"Nhap vao so phan tu cua mang:"; cin>>n;
	a = new int[n];
	for(int i = 0 ; i< n ; i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	cout<<"Nhap vao vi tri can chen:";
	cin>>k;
	Insert(a,n,k);
	for(int i = 0 ; i< n ; i++){
		cout<<a[i]<<"\t";
	}
	return 0;
}
