#include<bits/stdc++.h>
using namespace std;
void nhap(int &n,float &a){
	float x;
	do{
		printf("nhap vao so nguyen duong n:"); scanf("%d",&n);
		printf("nhap vao so thuc a:"); scanf("%f",&a);
	}while(n<0 && a <0);
	printf("nhap vao so thuc x:"); scanf("%f",&x);
}
float tinh(int &n ,float &a ,float &x){
	float  y = 0;
	for(int i = 1 ; i<= n ; i++){
		y += (a+pow(x,i))/i;
	}
	float p = sqrt(a) + y;
	return p;
}
int main(){
	int n ;
	float a,x;
	nhap(n,a);
    printf("gia tri cua bieu thuc Y = %.3f",tinh(n,a, x));
	return 0;
}
