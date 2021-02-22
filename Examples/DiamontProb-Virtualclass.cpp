#include <iostream>
using namespace std;


class A{
	public:
	A(){
		cout<<"A "<<endl;
	}
};




class B:virtual public A{
	public:	
	B(){
	cout<<"B "<<endl;
	}
	
	
};




class C:virtual public A{
		public:
	C(){
			cout<<"C " <<endl;
	}

};


class D:public B,public C{
	public:
	D(){
	cout<<"D  "<<endl;	
	}
	
	
};


int main(){
	
	A a;
	cout<<endl;
	B b;
	cout<<endl;
	C c;
	cout<<endl;
	D d;
	
}
