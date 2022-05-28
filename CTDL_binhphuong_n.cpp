#include<bits/stdc++.h>
using namespace std;
long long giaithua(int n){
	if(n==0)
	return 1;
	return giaithua(n-1)*n;
}
bool SNT(int a){
	if(a<=2)
	return true;
	if(a<20){
		for(int i=2; i<a/2; i++)
		if(a%i==0) return false;
		return true;
	}
	return true;
}
long tonggt(int x[], int n){
	long s=0;
	for(int i=0 ; i<n ; i++){
		if(SNT(x[i]))
		s+=giaithua(x[i]);
	}
	return s;
}
int main(){
	int *x;
	int n;
	cout<<"nhap soluong:"; cin>>n;
	
	cout<<"nhap mang x:";
	cin>>x[i];
	return 0;
}
