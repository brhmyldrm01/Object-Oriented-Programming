#include <iostream>
using namespace std;


double div(int a,int b){
	if(b==0)
	throw 101;
	return a/b;
}


void control(int age){
	if(age<18)
	throw age;
	if(age>65)
	throw "yasli";
	else
	cout<<"pass"<<endl;
}


void controlname(string name){
	if(name=="")
	throw name;
	else
	cout<<"pass"<<endl;
}



int main(){
	/*
	int age=18;
try{
	if(age>=18){
		cout<<"pass"<<endl;
	}
	else{
		throw age;
	}	
}
	catch(int a){
		cout<<"error "<<a <<endl;
	}*/
	
	
	
	
	//div
	/*
	try{
		cout<<div(3,4)<<endl;
		div(5,0);	
	}
	catch(int err){
		cout <<"Divisin by zero error!!! "<<err<<endl;
	}*/
	
	
	//control
	/*
	try{
		controlAge(10);
	
	}
	catch(int age){
		cout<<"errror age "<<age<<endl;
	}*/	
	
	
	
	try{
			controlname("");
	}
	catch(string){
		cout<<"gecersiz isim"<<endl;
	}
	
	

	
	
	
	
	
}
