#include <iostream>
using namespace std;

class sekil{
	public:
	int y;
	int x;
	
	//pure virtual fonk. (abstraction)
	virtual	int alan()=0; 
};


class kare:public sekil{
	public:
	int alan(){return x*y;}	
};


class dikdortgen:public sekil{
	public:
	int alan(){return x*y;}
};



int main(){

	sekil *yeni=new kare();
	yeni->x=5;
	yeni->y=5;
	
	cout<<yeni->alan()<<endl;

	return 0;
}
