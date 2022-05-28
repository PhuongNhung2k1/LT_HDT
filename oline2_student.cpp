#include<bits/stdc++.h>
using namespace std;
class Person{
	protected:
		char name[20];
		int birth;
		char address[30];
	public:
		void nhap();
		void xuat();
	
};
class School{
	private:
		char name[20];
		int Date;
	public:
		friend class Paculty;
};
class Paculty{
	private:
		char Name[20];
		int date;
		School x;
	public:
		void nhap(){
			cout<<"\n nhap ten :"; fflush(stdin); gets(Name);
			cout<<"\n ngay :"; cin>>date;
			cout<<"\n ten truong:"; fflush(stdin); gets(x.name);
			cout<<"\n ngay tlap:"; cin>>x.Date;
		}
		void xuat(){
			cout<<setw(10)<<Name<<setw(20)<<date<<setw(10)<<x.name<<setw(20)<<x.Date;
		}
	friend class Student;
	
};
class Student:public Person{
	private:
		Paculty y;
		char Class[20];
		long score;
	public:
		void nhap(){
			y.nhap();
			cout<<"\n sinh vien lop:"; fflush(stdin); gets(Class);
			cout<<"\n Diem :"; cin>>score;
		}
		
		void xuat(){
			cout<<setw(10)<<"Name"<<setw(20)<<"date"<<setw(10)<<"name"<<setw(20)<<"Date"<<setw(20)<<"Lop"<<setw(15)<<"Diem"<<endl;
			y.xuat();
			cout<<setw(20)<<Class<<setw(15)<<score<<endl;
		}
	friend void sua(Student x, int n);
};

int main(){
	Student st1;
	st1.nhap();
	st1.xuat();
	return 0;
}
