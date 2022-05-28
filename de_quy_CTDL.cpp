#include<bits/stdc++.h>
using namespace std;
int f(int n){
	if(n==0)
	return 1;
	else 
	return pow(f(n-1),2) +1;
}
int main(){
	cout<<f(5);
}
