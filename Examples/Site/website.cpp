#include <iostream>
#include <C:\Users\ibrah\Desktop\oop\Site\Product.cpp>
#include <C:\Users\ibrah\Desktop\oop\Site\Wallet.cpp>
#include <C:\Users\ibrah\Desktop\oop\Site\Cart.cpp>
#include <C:\Users\ibrah\Desktop\oop\Site\Customer.cpp>
#include <C:\Users\ibrah\Desktop\oop\Site\Order.cpp>
using namespace std;




int main(){
	Customer customer("ibrahim","ibrahim@gmail.com");
	Product product(10.2,10,"apple");
	Product product_1(55.0,22,"phone");
	Product product_2(202.3,3,"shoe");
	
	customer.addProduct(&product_2);
	customer.addProduct(&product);
	customer.addProduct(&product_1);
	
	customer.cartToString();
	
	customer.removeProduct(&product_1);
	
	customer.cartToString();
	
	customer.removeProduct(&product);
	
	customer.cartToString();
	
	customer.showBalance();
	
	customer.withdrawFromWallet(100);
	customer.depositToWallet(200);
	customer.showBalance();
	
	customer.withdrawFromWallet(1000);
	customer.showBalance();
	customer.depositToWallet(200);
	
	Order order1("ankara",customer);
	order1.ordered();
	
	customer.cartToString();
	return 0; 
	
	

}
