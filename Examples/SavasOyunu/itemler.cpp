#include <iostream>
using namespace std;

class Item{
	private:
		string itemAd;
		int seviye;
		string tur;
		int savunmaGucu;
		int saldiriGucu;
		public:
			Item(string ad="default",int seviye=1,string tur="belirsiz"){
				this->itemAd=ad;
				this->seviye=seviye;
				this->tur=tur;
				
			}
			int getSaldiriGucu(){
				return this->saldiriGucu;
			}
			int getSavunmaGucu(){
				return this->savunmaGucu;
			}
		
			int getSeviye(){
				return this->seviye;
			}
			string getItemAd(){
				return this->itemAd;
			}
			void setItemAd(string ad){
				this->itemAd=ad;
			}
			
			void setSeviye(int seviye){
				this->seviye=seviye;
			}

			void setSaldiriGucu(int saldiri){
				this->saldiriGucu=saldiri;
			}
			void setSavunmaGucu(int savunma){
				this->savunmaGucu=savunma;
			}			
		
};

class Kalkan:public Item{
	public:
		Kalkan(int seviye=1):Item("Kalkan",seviye,"savunma"){
			this->setSaldiriGucu(seviye*1); 
			this->setSavunmaGucu(seviye*50); 
		}
		
	
};

class Kilic:public Item{

	public:
		Kilic(int seviye=1):Item("Kilic",seviye,"saldiri"){
			this->setSaldiriGucu(seviye*50);
			this->setSavunmaGucu(seviye*1);
		}
		
};

class Dizlik:public Item{
		public:
		Dizlik(int seviye=1):Item("Dizlik",seviye,"savunma"){
			this->setSaldiriGucu(seviye*1);
			this->setSavunmaGucu(seviye*20);
		}
		
};


class At:public Item{
		public:
		At(int seviye=1):Item("At",seviye,"Binek"){
			this->setSaldiriGucu(seviye*5);
			this->setSavunmaGucu(seviye*15);
		}
		
};



class Migfer:public Item{
		public:
		Migfer(int seviye=1):Item("Migfer",seviye,"Savunma"){
			this->setSaldiriGucu(seviye*1);
			this->setSavunmaGucu(seviye*15);
		}
		
};

class Mizrak:public Item{
		public:
		Mizrak(int seviye=1):Item("Mizrak",seviye,"Saldiri"){
			this->setSaldiriGucu(seviye*20);
			this->setSavunmaGucu(seviye*1);
		}
};





