#include <iostream>
using namespace std;
class Product{
	double price;
	int productId;
	string name;
	int stock;
	
	public :
		static int productNumber;
		Product(double price=0,int stock=0,string name="empty"){
			productNumber++;
			this->name=name;
			this->productId=1000+productNumber;
			this->stock=stock;
			this->price=price;
		}
		Product(Product&p){
			this->price=p.price;
			this->productId=p.productId;
			this->name=p.name;
			this->stock=p.stock;
		}
		
		int getProductId(){
			return productId;
		}
		int getStock(){
			return stock;
		}
		string getProductName(){
			return this->name;
		}
		double getPrice(){
			return price;
		}
		void setProductId(int id){
			this->productId=id;
		}
		void setProductName(string name){
			this->name=name;
		}
		void setStock(int stock){
			this->stock=stock;
		}
		void setPrice(double price){
			this->price=price;
		}

	~Product(){
		productNumber--;
	}
};

int Product::productNumber=0;
