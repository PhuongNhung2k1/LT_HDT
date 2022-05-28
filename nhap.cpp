#include<bits/stdc++.h>
using namespace std;
class Sothuc{
	private:
		float thuc, ao;
	public:
		Sothuc(){
			thuc = 0.0;
			ao = 0.0;
		}
		Sothuc(float a, float b){
			thuc = a;
			ao = b;
		}
		Sothuc operator -(){
			Sothuc z;
			z.thuc = - thuc;
			z.ao = -ao;
		}
		void xuat(){
			cout<<thuc<<"+"<<ao<<"i"<<endl;
		}
};
int main(){
	Sothuc p(3,4),q;
	p.xuat();
	p=-p;
	p.xuat();
	q.xuat();
	return 0;
}
