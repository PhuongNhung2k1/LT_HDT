#include <iostream>

using namespace std;
class matran{
	private:
		int m,n;
		double **a;
	public:
		friend istream &operator >>(istream &is, matran &x);
		friend ostream &operator >>(ostream &os, matran x);
		matran operator-();
		matran operator+(matran x);
		matran operator-(matran x);
		
};
istream &operator >>(istream &is, matran &x){
	cout<<"nhap so dong:";is>>x.m;
	cout<<"nhap so cot:"; is>>x.n;
	x.a = new double*[x.m];
	for(int i=0 ; i< x.n; i++){
		x.a[i]= new double [x.n];
	}
	for(int i=0; i<x.n ; i++){
		for(int j=0; j<x.n; j++){
			cout<<"a["<<i<<"]["<<j<<"]=";
			is>>x.a[i][j];
		}
	}
	return is;
}
ostream &operator >>(ostream &os, matran x){
	for(int i=0 ;i<x.m; i++){
		for(int j=0 ; j< x.n ; j++){
			os<<x.a[i][j];
		}
	}
	return os;
}
matran matran ::operator-(){
	for(int i=0 ; i<this->m;i++){
		for(int j=0; j<this->n;j++){
			this->a[i][j]= -this->a[i][j];
    	}
	} 
	return *this; 
}
matran matran ::operator+(matran x){
	matran tong;
	if(m!= x.m&&n!=x.n ){
		return *this;
	}
	tong.m = m+x.m;
	tong.n = n +x.n;
	tong.a = new double*[tong.m];
	for(int i=0 ; i<tong.m; i++){
		tong.a[i] = new double[tong.n];
	}
	for(int i=0; i<tong.m ; i++){
		for(int j=0 ; j<tong.n; j++){
			tong.a[i][j] = a[i][j]+tong.a[i][j];
		}
	}
	return tong;
}
matran matran ::operator-(matran x){
	matran h;
	if(m!= x.m&&n!=x.n ){
		return *this;
	}
	h.m = m+x.m;
	h.n = n +x.n;
	h.a = new double*[h.m];
	for(int i=0 ; i<h.m; i++){
		h.a[i] = new double[h.n];
	}
	for(int i=0; i<h.m ; i++){
		for(int j=0 ; j<h.n; j++){
			h.a[i][j] = a[i][j]-h.a[i][j];
		}
	}
	return h;
}

/*class Matrix{
  private:
    int m, n;
    double **a;
  public:
    Matrix operator-();
    Matrix operator+(Matrix x);
    Matrix operator-(Matrix x);
    friend istream& operator>>(istream &is, Matrix &x);
    friend ostream& operator<<(ostream &os, Matrix x);
};

istream& operator>>(istream &is, Matrix &x){
  cout << "Nhap so dong: ";
  is >> x.m;
  cout << "Nhap so cot: ";
  is >> x.n;
  x.a = new double*[x.m];
  for(int i = 0; i < x.m; i++){
    x.a[i] = new double[x.n];
  }
  for(int i = 0; i < x.m; i++){
    for(int j = 0; j < x.n; j++){
      cout << "Nhap a[" << i << "][" << j << "] = ";
      is >> x.a[i][j];
    }
  }
  return is;
}

ostream& operator<<(ostream &os, Matrix x){
  for(int i = 0; i < x.m; i++){
    for(int j = 0; j < x.n; j++){
      os << x.a[i][j] << " ";
    }
    os << endl;
  }
  return os;
}

Matrix Matrix::operator-(){
  for(int i = 0; i < this->m; i++){
    for(int j = 0; j < this->n; j++){
      this->a[i][j] = -this->a[i][j];
    }
  }
  return *this;
}

Matrix Matrix::operator+(Matrix x){
  Matrix tong;
  if(this->m != x.m && this->n != x.n){
    return *this;// neu so dong, cot 2 ma tran khong bang nhau thi tra ve ma tran thu nhat
  }
  tong.m = this->m;
  tong.n = this->n;
  tong.a = new double*[tong.m];
  for(int i = 0; i < tong.m; i++){
    tong.a[i] = new double[tong.n];
  }
  for(int i = 0; i < tong.m; i++){
    for(int j = 0; j < tong.n; j++){
      tong.a[i][j] = this->a[i][j] + x.a[i][j];
    }
  }
  return tong;
}

Matrix Matrix::operator-(Matrix x){
  Matrix hieu;
  if(this->m != x.m && this->n != x.n){
    return *this;// neu so dong, cot 2 ma tran khong bang nhau thi tra ve ma tran thu nhat
  }
  hieu.m = this->m;
  hieu.n = this->n;
  hieu.a = new double*[hieu.m];
  for(int i = 0; i < hieu.m; i++){
    hieu.a[i] = new double[hieu.n];
  }
  for(int i = 0; i < hieu.m; i++){
    for(int j = 0; j < hieu.n; j++){
      hieu.a[i][j] = this->a[i][j] - x.a[i][j];
    }
  }
  return hieu;
}
*/
int main(){
  matran p, q, mt1, mt2, mt3, mt4;
  cout << "Nhap ma tran P" << endl;
  cin >> p;
  cout << "Nhap ma tran Q" << endl;
  cin >> q;
  mt1 = -p;
  mt2 = -q;
  cout << "Ma tran P sau khi doi dau: " << endl;
  cout << mt1 << endl;
  cout << "Ma tran Q sau khi doi dau: " << endl;
  cout << mt2 << endl;
  mt3 = mt1 + mt2;
  mt4 = mt1 - mt2;
  cout << "Tong hai ma tran" << endl << mt3 << endl;
  cout << "Hieu hai ma tran" << endl << mt4 << endl;
  return 0;
}

