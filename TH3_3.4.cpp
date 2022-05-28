#include<bits/stdc++.h>
using namespace std;
class PTB2{
	private:
		float a, b, c;
	public: 
		void nhap();
		void xuat();
		void giai();
	PTB2(){
		a=b=c=0;
	}
	PTB2(float x, float y, float z){
		a = x;
		b = y ;
	    c = z;
	}
};
void PTB2::nhap(){
	cout<<"\n nhap vao he so cua ptb2:"<<endl;
	cout<<"\t a ="; cin>>a;
	cout<<"\t b ="; cin>>b;
	cout<<"\t c ="; cin>>c;
}
void PTB2::xuat(){
	cout<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
}
void PTB2::giai(){
	if(a==0){
		if(b==0){
			if(c==0)
			cout<<"pt vo so nghiem:";
			else{
				cout<<"pt vo nghiem:"<<endl;
			}
		}
		else{
			cout<<"\n nghiem cua pt la:"<<-c/b<<endl;
		}
	}
	else{
		double delta = b*b-4*a*c;
		if(delta<0){
			cout<<"\n pt vo nghiem:";
		}
		else if(delta ==0){
			cout<<"\n pt co nghiem kep x1 = x2 ="<<-b/2*a<<endl;
		}
		else{
			cout<<"\n pt co hai nghiem phan biet :"<<endl;
			cout<<"x1 = "<<(-b+sqrt(delta)/2*a)<<endl;
			cout<<"x2 = "<<(-b-sqrt(delta)/2*a)<<endl;
		}
	}
}
int main(){
	PTB2 p(-2,3,5),q;
	cout<<"giai phuong trih:";
	p.xuat();
	p.giai();
	q.nhap();
	cout<<"giai phuong trinh:";
	q.xuat();
	q.giai();
	
	return 0;
}
