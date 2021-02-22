#include <iostream>
using namespace std;

class Cart{
	Product* products[3];
	double total;
	int seq;
	bool control; 
	
	int add(Product * product){
		if(seq<3 && product->getStock()>=0){
			this->products[seq]=product;
			total+=(product)->getPrice();
			seq++;
			return seq;
			}
		else{
			return -1;
		}
	}
	public:
	int getNumber(){
		return seq;
	}
	int getTotal(){
		return total;
	}
	int remove(Product * product){
		if(seq==0){
			return -1;
		}
		int i=0;
		for(i=0;i<seq;i++){
			if(products[i]==product){
				this->seq--;
				this->total-=product->getPrice();
			for(int a=i;a<seq;a++){
			products[a]=products[a+1];
			}
				return 1;
			}
		}
		return -2;
		
	
	}
	void clear(){
		delete[] products;
	}
	
	
	public:
		Cart(){
			for(int i=0;i<3;i++){
				products[i]=NULL;
			}
			total=0;
			control=false;
			seq=0;
		}
			Cart(Cart & cart){
			for(int i=0;i<3;i++){
			this->products[i]=cart.products[i];		
			}
		this->seq=cart.seq;
		this->control=cart.control;
		this->total=cart.total;
		}
		
		~Cart(){
			delete[] ((Cart*)this)->Cart::products;
		}
		void toString(){
			cout<<"****CART****"<<endl;
			for(int i=0;i<seq;i++){
				cout<<products[i]->getProductName()<<" ";
			}
			cout<<endl;
			cout<<"total : "<<this->total<<endl<<"*****************************"<<endl;
		}
		
		
		friend class Customer;
};

