#include <iostream>
using namespace std;

class Wallet{
	double balance;	
	public:
	int withdraw(double amount){
			if(balance==0||amount>balance){
				return -1;
			}
			else{
				this->balance-=amount;	
			}
			return 1;
			}
		
		int deposit(double amount){
			if(amount<0){
				return -1;
			}
			else{
				balance+=amount;
			}
			return 1;
			}
			
	public :
		Wallet (){
			balance=0;
		}
		Wallet(Wallet &w){
			this->balance=w.balance;
			
		}
		  
		double getBalance(){
			return balance;
		}
		
	friend class Customer;
};

