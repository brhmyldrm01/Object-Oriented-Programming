#include <iostream>
using namespace std;
#include <stdlib.h>   
#include <time.h> 
#include <cstdlib> 

class Arena{
	Karakter* savasci1;
	Karakter* savasci2;

	public:	
	Arena(Karakter &k1,Karakter& k2 ){
		cout<<"Arena olusturuldu"<<endl;
		this->savasci1=&k1;
		this->savasci2=&k2;
		cout<<"Savascilar yerlerini aldilar"<<endl;
	}
	

	void Savas(){	
		 srand(time(NULL));
		int s1_day=savasci1->getDayaniklilik();
		int s2_day=savasci2->getDayaniklilik();
		int temp=0;
		int sira=0;
		while(s1_day>0 && s2_day>0){
			 sira= (rand() % 2 )+ 1;
			 temp=0;
				if(sira==1){
				temp=((savasci1->Saldir()-savasci2->Savun())>0 ? savasci1->Saldir()-savasci2->Savun() : (-10*(savasci1->Saldir()-savasci2->Savun()))/100);
				cout<<"1.vurdu"<<temp<<endl;
			
				s2_day-=temp;	
				cout<<"kalan"<<s2_day<<endl;
			}
			if(sira==2){ 
				
				temp=((savasci2->Saldir()-savasci1->Savun())>0 ? savasci2->Saldir()-savasci1->Savun() : (-10*(savasci2->Saldir()-savasci1->Savun()))/100 );
				cout<<"2.vurdu"<<temp<<endl;
				s1_day-=temp;
				cout<<"kalan"<<s1_day<<endl;

			}
		}
		if(s1_day>0){
	
			cout<<"KAZANAN::" << savasci1->getAd() << "KALAN CANI::"<<s1_day<<endl; 
			cout<<"KAYBEDEN::" << savasci2->getAd() << "KALAN CANI::"<<s2_day<<endl;
			cout<<"SAVAS BITTI"<<endl;
		}
		if(s2_day>0){
	
			cout<<"KAZANAN::" << savasci2->getAd() << "KALAN CANI::"<<s2_day<<endl; 
			cout<<"KAYBEDEN::" << savasci1->getAd() << "KALAN CANI::"<<s1_day<<endl;
			cout<<"SAVAS BITTI"<<endl;
		}
	}

	
	
	
	
	
	
	
};



