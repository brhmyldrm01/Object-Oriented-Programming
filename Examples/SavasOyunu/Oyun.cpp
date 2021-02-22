#include <iostream>
#include <C:\Users\ibrah\Desktop\oop\SavasOyunu\itemler.cpp>
#include <C:\Users\ibrah\Desktop\oop\SavasOyunu\Karakterler.cpp>
#include <C:\Users\ibrah\Desktop\oop\SavasOyunu\Arena.cpp>
using namespace std;

int main(){

	
	Sovalye sovalye;
	cout<<sovalye.getNo()<<endl;
	cout<<sovalye.getDayaniklilik()<<endl; 
	cout<<sovalye.getGuc()<<endl; 
	cout<<sovalye.Saldir()<<endl; 
	cout<<sovalye.Savun()<<endl; 
		
		Atli atli;
	cout<<atli.getNo()<<endl;
	cout<<atli.getDayaniklilik()<<endl; 
	cout<<atli.getGuc()<<endl; 
	cout<<atli.Saldir()<<endl; 
	cout<<atli.Savun()<<endl; 
	
	Arena arena(sovalye,atli);
	arena.Savas();
	
	
	Karakter karakter;
	
		
	
	}
