#include<bits/stdc++.h>
using namespace std;
int UCLN(int a, int b){
	if(a%b==0)
	return b;
	return UCLN(b,a%b);
}
int BCNN(int a, int b){
	return(a*b)/UCLN(a,b);
}
int main(){
	cout<<BCNN(12,18);
return 0;
}
