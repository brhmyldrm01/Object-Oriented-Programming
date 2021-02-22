#include <iostream>
using namespace std;

class Order { 
	int orderId;
	Customer customer;
	string address;
	
			public:
		static int orderNumber;
		Order(string address,Customer customer ){
			this->orderId=1000+orderNumber;
			this->address=address;
			this->customer=customer;
		}
		
		int getOrderId()
		{
			return this->orderId;
		}
		
		void setAddress(string ad){
			this->address=address;
		}
		
		
		void pay(double fee){
			int result=customer.withdrawFromWallet(fee);
			if(result==-1)
			cout<<"Insufficient balance --> "<<customer.getBalance()<<endl;
			else if(result==1)
			cout<<"Payment succesful. Current balance is --> "<<customer.getBalance()<<endl; 	
		}
		
		
		int ordered(){
		if(customer.getNumber()<=0){
			cout<<"The cart is empty"<<endl;
			return 0;
		}
		if(customer.getBalance()<customer.getTotal()){
			cout<<"insufficient balance. Order cancelled"<<endl;
			return 0;
		}
		else{
			this->pay(customer.getTotal());
			customer.clearCart();
			cout<<"The Order is given succesfully";
			return 1;
		}
		
		
		}
		
		
		
		~Order(){
			orderNumber--;
		}
};

int Order::orderNumber=0;
