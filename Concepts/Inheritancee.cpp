#include <iostream>
using namespace std;


class Citizen{
	private:
		string id;
		int age;
		string name;
		string surname;
	public :
		Citizen(string,string,string,int);
		void setId(string);
		void setName(string);
		void setSurname(string);
		void setAge(int);
		string getName();
		string getId();
		string getSurname();
		int getAge();
		void toString()const;
		};

 Citizen::Citizen(string name,string surname,string id,int age){
		this->age=age;
		this->name=name;
		this->surname=surname;
		this->id=id;
}

int  Citizen::getAge(){return age;}
string Citizen::getName(){return name;}
string Citizen::getSurname(){return surname;}
string Citizen::getId(){return id;  }
void Citizen::setAge(int age){this->age=age;}
void Citizen::setSurname(string surname){this->surname=surname;}
void Citizen::setName(string name){this->name=name;}
void Citizen::setId(string id){this->id=id;}


void Citizen::toString()const{
	cout<<"id::"<<id<<endl<<"name::"<<name<<endl<<"surname::"<<surname<<endl<<"age::"<<age<<endl<<endl;
}




class Employee:public Citizen{
	private:
		int salary;
	public:
		Employee(string name,string surname,string id,int age,int salary):salary(salary),Citizen(name,surname,id,age){		}		
		int getSalary(){return salary;}
		void setSalary(int salary){this->salary=salary;}
		void toString();
};
void Employee::toString(){
	cout<<"id::"<<this->getId()<<endl<<"name::"<<this->getName()<<endl<<"surname::"<<this->getSurname()<<endl<<"age::"<<this->getAge()<<endl<<"Salary::"<<salary<<endl<<endl;
}

int main(){
	
	
	Citizen ctzn1("Ibrahim","Yildirim","12345678900",19);
	ctzn1.toString();
	
	Employee emp("Ali","Atabak","11111111111",20,5000);
	emp.toString();
	
}
