#include <iostream>
using namespace std;


template <class T>
T topla(T a,T b ){
	return a+b;
}

template<class T=int,class A=int ,int n=0>
class Mat{
	T degisken1;
	A degisken2;
	T arr[n];
	public:
	Mat(T a,A b){
			degisken1=a;
			degisken2=b;
			for(int i=0;i<n;i++){
				arr[i]=i;
			}
	}
	
	T getDeg1(){
		return degisken1;
	}
	
	A getDeg2(){
		return degisken2;
	}
	
	void getArray(){
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
	}
	
	
	
	
	
	
};

class AA{
	public:
	 template <class C>
	 void fonksiyon (C deger);
};


template <class C>
 void AA::fonksiyon(C deger){
cout<<deger<<endl;
}



template < typename C>
void fonk(C deger){
	cout<< deger<<endl;
}

int main(){

	int a=2;
	int b=5;
	float x=4.56;
	float y=5.8;

cout<<	topla(a,b)<<endl;
cout<<	topla(x,y)<<endl;
	Mat<float,int,5> mat(a,x);
	
	cout<<mat.getDeg1()<<endl;
	cout<<mat.getDeg2()<<endl;
	mat.getArray() ;
cout<<endl;

	AA aa;
	aa.fonksiyon("Ali");
	
	fonk("ali");
	fonk(44);

}
