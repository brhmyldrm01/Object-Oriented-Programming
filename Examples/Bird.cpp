#include <iostream>
using namespace std;
	
	class Bird{
		private:
			string kind;
			string color;
			int age;
			
			public:
				Bird(const Bird &bird){
					kind=bird.kind;
					color=bird.color;
					age=bird.age;
				}
				
				Bird(string knd,string clr,int a){
					this->kind=knd;
					this->age=a;
					this->color=clr;
					cout<<"You  have created a bird."<<endl;
				}
				
				Bird(){
					kind="null";
					color="null";
					age=-1;
					cout<<"You  have created a bird."<<endl;
				}
				
				
				int getAge(){
					return (*this).age;
				}
				
				string getKind(){
					return (*this).kind;
				}
						
				string getColor(){
					return (*this).color;
				}
				
				void setAge(int a){
					age=a;
				}
				
				void setKind(string knd ){
					kind=knd;
				}
				
				void setColor(string clr ){
					color=clr;
				}
				
				void singing(){
					int key=-1;
					if(kind=="Muhabbet kusu"){
						key=0;
					}
					else if(kind=="Kanarya"){
						key=1;
					}
					else if(kind=="Bulbul"){
						key=2;
					}
					
					switch(key){
					
						case 0:
							cout<<"Lik lik lik lik "<<endl;
							break;
						case 1:
							cout<<"Vik vik vik vik"<<endl;
							break;
						case 2:
							cout<<"Cik cik cik cik"<<endl;
						break;
						default:
							cout<<"Bilinmeyen tur"<<endl;
							break;
							}
								
				}
				
	};
	
	
	
	int main(){
		
		Bird bird("Muhabbet","White",2);
		bird.singing();
		cout<<bird.getAge()<<endl;
		cout<<bird.getKind()<<endl;
		cout<<bird.getColor()<<endl;
		bird.setColor("Black");
		cout<<bird.getColor()<<endl;
		
		Bird bird0;
		cout<<bird0.getAge()<<endl;
		cout<<bird0.getKind()<<endl;
		cout<<bird0.getColor()<<endl;
	
		
		
		
		
		
		
		
	}
