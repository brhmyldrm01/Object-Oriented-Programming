#include <iostream>
using namespace std;




 class Fruit {
	private:
		string color;
		int size;
	public :
		Fruit(string color){
			this->color=color;
			
		}
		void setSize(int sz){
			size=sz;
			
		}
		void setColor(string color){
		this->color=color;
	}	
	string getColor() {
	return color;
	}
	
	};


int main(){
	
	//Obje const olarak tanimlandigindan memberlar daha sonra degistirilemez
	const Fruit fruit("green");
	//HATA---> fruit.setColor("red");
	// HATA --->fruit.setSize(5);
	//const objeden deger alabilmek icin fonksiyonun const olmasi gerekir. Bu yuzden asagidaki satir hata verir.
	cout<<fruit.getColor()<<endl;
	
	
	
	return 0;
}
