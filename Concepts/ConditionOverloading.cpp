#include <iostream>
using  namespace std;

class Apple{
public:		int size;
		
		public:
			Apple(int a){
				size=a;
			}
			
			bool operator >(Apple a){
				if(size>a.size){
					return true;
				}
				else{
					return false;
				}
			}
			
			bool operator <(Apple a){
				if(size<a.size){
					return true;
				}
				else{
					return false;
				}
			}
			bool operator ==(Apple a){
				if(size==a.size){
					return true;
				}
				else{
					return false;
				}
			}
			
				Apple operator &&(Apple a){
				if(size==5&&a.size==5){
					size=10;
					return *this;
				}
				else{
					size=0;
					return *this;
				}
			}
			
			int getSize(){
				return size;
			}
			void setSize(int size){
				this->size=size;
			}
					
			     friend ostream & operator << (ostream &out, const Apple &a); 
  				  friend istream & operator >> (istream &in,  Apple &c); 
			
		
};


ostream & operator << (ostream& out, const Apple&a) {
	out<<a.size*5<<endl;
	return out;
}

istream & operator >> (istream& in,  Apple&a){

	in	>>a.size;
	return in;	
}

int main(){
	
	
	Apple apple1(6);
	Apple apple2(5);
	
	if(apple1>apple2)
		cout<<"apple1>apple2:::"<<(apple1>apple2)<<endl;
	
	if(apple1<apple2)
		cout<<"apple1<apple2:::"<<(apple1<apple2)<<endl;
	
	if(apple1==apple2)
		cout<<"apple1==apple2:::"<<(apple1==apple2)<<endl;
	
	cout<<"&& overloading:::"<<(apple1&&apple2).getSize()<<endl;
	
	
	Apple apple3(9);
	cout<< apple3;
	cin >>apple3;
	cout<<"Apple size::"<<apple3.getSize()<<endl;
	
	
}
