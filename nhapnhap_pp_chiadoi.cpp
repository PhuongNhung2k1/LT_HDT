#include<bits/stdc++.h>
#define epsi 0.01 
using namespace std;
float f(float x){
	float e = x*x*x - 4*x + 2;
	return e;
}

int main(){
	float a[20],m,m2, b[20],u,v,x1, ss,fm;
	float x[20];
	int i = 0;
	cout<<"nhap khoang li nghiem :"; cin>>a[i];   cin>>b[i];
	do {
		m = (a[i]+b[i])/2;
	if(f(m)>  0 )  {
		a[i+1] = m;
		b[i+1] = b[i];
		m = (a[i+1] +b[i+1])/2;
	}else {
	b[i+1] = m;
	a[i+1] = a[i];
		m = (a[i+1] +b[i+1])/2;
	}	
	ss = fabs(b[i] - a[i])/2;
	x1 = m;
	i = i+1;
	if(i> 100){
			cout<<"bai toan khong hoi tu:"<<endl;
			exit(1);
		}else ;
	}while(ss > epsi);
	cout<<"\nnghiem cua pt :"<<x1<<"+-"<<ss<<endl;
	return 0;
}
