#include <iostream>
using namespace std;

	class Customer{
	int customerId;
	string mail;
	string name;
	Wallet wallet;
	Cart cart;

	public:
		static int customerNumber;
		Customer(){
		}
		Customer(string name,string mail){
			customerNumber++;
			customerId=1000+customerNumber;
			this->name=name;
			this->mail=mail;
		}
		
		Customer(Customer &customer){
			this->wallet=customer.wallet;
			this->cart=customer.cart;
			this->customerId=customer.customerId;
			this->mail=customer.mail;
			this->name=customer.name;
		}
		~Customer(){
			customerNumber--;
		}
		
		
		int getCustomerId(){
			return this->customerId;
		}
		
		string getMail(){
			return this->mail;
		}
		string getName(){
			return this->name;
		}
		
		void setCustomerId(int id){
			this->customerId=id;
		}
		
		void setMail(string mail){
			this->mail=mail;
		}
		void setName(string name){
		this->name=name;
		}
		
		void addProduct(Product*product){
			int seq=cart.add(product);
			if(seq==-1)
			cout<<"The cart is full or stock is insufficient"<<endl;
			else
			cout<<seq<<" .product is added to cart. "<<endl ;
		}
		
		void removeProduct(Product*product){
			int result=cart.remove(product);
			if(result==-1)
			cout<<"The cart is empty"<<endl;
			else if(result==-2)
			cout<<"Product isn't finded in the cart."<<endl;
			if(result==1)
			cout<<"Product is removed from the cart"<<endl;
		}
		void cartToString(){
			cart.toString();
		}
		
		void depositToWallet(double amount){
			int result=wallet.deposit(amount);
			if(result==1)
			cout<<amount<<" tl deposited to your wallet. Your balance is  "<<wallet.getBalance()<<" tl."<<endl;
			else if(result==-1)
			cout<<amount <<" amount is invalid"<<endl;
		}
		
		int withdrawFromWallet(double fee){
			int result=wallet.withdraw(fee);
			if(result==-1)
			cout<<"Insufficient balance --> "<<wallet.getBalance()<<endl;
			else if(result==1)
			cout<<"Withdrawal is successful. Current balance is --> "<<wallet.getBalance()<<" tl"<<endl; 
			return result;	
		}

		void showBalance(){
			cout<<"Current balance ->"<< this->wallet.getBalance()<<" tl"<<endl;
		}		
		
			double getBalance(){
			return wallet.getBalance();
		}	
		
		int getNumber(){
		return	cart.getNumber();
		}
		void clearCart(){
			this->cart.clear();
		}
		
		double getTotal(){
			return cart.getTotal();
		}
	

	};
	
 int Customer::customerNumber=0;

