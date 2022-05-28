#include<bits/stdc++.h>
using namespace std;
class ARRAY{
	private:
		int *value;
		int n;
	public:
		ARRAY(){
			n=0;
		}
		ARRAY(int m){
			m = n;
		}
		~ARRAY();
	void nhap();
	void xuat();
};
void ARRAY::nhap(){
	cout<<"\n nhap vao so phan tu cua mang:"; cin>>n;
	value = new int[n];
	for(int i=0 ; i<n ; i++){
		cout<<"\tvalue["<<i<<"]=";
		cin>>value[i];
	}
}
void ARRAY::xuat(){
	for(int i=0 ; i< n; i++){
	cout<<value[i]<<"  ";
	}
}
ARRAY::~ARRAY(){
	cout<<"\n day la ham huy:";
}
int main(){
	ARRAY a;
	a.nhap();
	a.xuat();
	
	return 0;
}
