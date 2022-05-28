#include<iostream>
using namespace std;
class SoPhuc{
	private:
		float PThuc,PAo;
	public:
		SoPhuc(float a,float b)
		{
			PThuc=a;
			PAo=b;
		}
		SoPhuc(){
			PThuc=0.0;
			PAo=0.0;
		
		}
	SoPhuc operator-() {
            SoPhuc z;
            z.PAo = -PAo;
            z.PThuc = -PThuc;
            return z;
    }
  void xuat(){
  	cout<<PThuc<<"+"<<PAo<<"i"<<endl;
  }
};
int main(){

SoPhuc x(3,4);
x.xuat();
x=-x;
x.xuat();
return 0;
}
