#include<malloc.h>
#incldue<iomanip>
#include<string.h>
#include<iostream>
using namespace std;
struct SV{
	char hoten[30];
	int tuoi;
	double diemtb;
};
struct List{
	int count;
	SV *e;
};
// ktao ds rong
void create (List &L){
	L.e = NULL; // e laf con tro ko cos bo nho
	L.count = -1;
	
}
// ham kiem tra 
bool emty(List L){
	return L.count == -1;
}
// them 1pt vao cuoi ds;--> Mang dong -> luon thanh cong
void add(List &L,SV e){
	if(emty(L)){
		L.e = new SV[1];
	}
	else{
		L.e = (SV *) realloc(L.e,(L.count + 2)*sizeof(SV)// cap phat them ptu
	}
	L.count ++;
	L.e[L.count] = elem;// them 1pt vao cuoi ds;
}
// ham ktao ttin cho 1 sv;
SV init(const char *ht, int tuoi, double dtk){
	SV sv;
	strcpy(sv.hoten, ht);
	sv.tuoi= tuoi;
	sv.diemtk = dtk;
	return sv;
}
void display(SV sv){
	printf("%d-20s %10d %10.21f\n". sv.hoten,sv.tuoi,sv.diemtk);
}
void init_list(List &L){
	creat(L);// ds rong chua ds dv moi
	add(L,init("Phuong Nhung",20,9.5));
	add(L, init("lan Anh", 20, 8));
	add(L, init("Hello wprd", 20, 7));
}
// hien thi ds;
void display_List(List L){
	for(int i=0 ; I<= L.count ; i++){
		display(L.e[i]);
	}
}

int main(){
	List L;
	init_list(l);
	return 0;
}
