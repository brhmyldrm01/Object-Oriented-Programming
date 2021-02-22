#include <iostream>
using namespace std;


class Animal{
	private:
		string name;
		int weight;
		int height;
		
	public:static int numberOfAnimals;
	
	public:
		void setName(string name){this->name=name;}
	
		void setHeight(int height){this->height=height;}
	
		void setWeight(int weight){this->weight=weight;}
	
		string getName(){return name;}
	
		int getWeight(){return weight;}
	
		int getHeight(){return height;}
	
		Animal();
	
		Animal(string name,int weight,int height);
	
		void setAll(string name,int height,int weight);
	
		void toString();	
	
		~Animal();
	
	static int getNumberOfAnimals(){return numberOfAnimals;}
};


void Animal::setAll(string name,int height,int weight){
	this->name=name;
	this->height=height;
	this->weight=weight;
	
}


Animal::Animal(string name,int height,int weight){
	this->name=name;
	this->height=height;
	this->weight=weight;
	Animal::numberOfAnimals++;
}
Animal::Animal(){
	this->name="default";
	this->height=0;
	this->weight=0;
	Animal::numberOfAnimals++;
}


Animal::~Animal(){
    cout << "Animal " << this -> name << " destroyed\n"<<endl;
	}

void Animal::toString(){
	 cout << this -> name << " is " <<  this -> height <<
            " cms tall and " << this -> weight <<
            " kgs in weight"<<endl;
}

int Animal::numberOfAnimals=0;



class Dog:public Animal{
	private:
		string sound="woof";
	
	public:
	void getSound(){
			cout << "The dog " << this->getName() << " says " <<this->sound <<endl;
		}
		Dog():Animal(){};
		Dog(string,int,int,string);
		void toString();
		~Dog(){
			cout<<"Dog Destroyed"<<endl;
			}
};

Dog::Dog(string name,int height,int weight,string sound):Animal(name,height,weight){
	this->sound=sound;
}

void Dog::toString(){
	cout << this -> getName() << " is " << this -> getHeight() << 
            " cms tall, " << this -> getWeight() << 
            " kgs in weight and says " << this -> sound <<endl;
}




int main(){

Animal ibo ;
ibo.toString();
ibo.setHeight(50);
ibo.setWeight(25);
ibo.setName("ibo");
ibo.toString() ;

Animal blabla("blabla",56,10);
blabla.toString() ;

cout<<"Number of Animals::"<<Animal::getNumberOfAnimals()<<endl;

Animal any;
any.setAll("Any",32,1);
any.toString();

cout<<"Number of Animals::"<<Animal::getNumberOfAnimals()<<endl;

Dog tom;
tom.toString();
tom.setAll("tom",100,15);
tom.toString();

Dog spot("spot",25,5,"hav");
spot.toString();

tom.getSound();
spot.getSound();


	
}
