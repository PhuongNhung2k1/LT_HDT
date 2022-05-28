#include<bits/stdc++.h>
using namespace std;
int giaithua(int n){
	if(n==0||n==1)
	return 1;
	return n*giaithua(n-1);
}
int tinh(int n){
	if(n==0||n==1){
		return 2;
	}
	return n*tinh(giaithua(n));		
}
int main(){
	cout<<"GT :"<<2*tinh(3);
	return 0;
}
