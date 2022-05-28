#include<bits/stdc++.h>
using namespace std;
int tong(int n){
	if(n==1)
	return 1;
	return tong(n-1)+ n*n;
}
int main(){
	cout<<tong(3);
	return 0;
}
