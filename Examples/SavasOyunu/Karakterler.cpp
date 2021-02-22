#include <iostream>
using namespace std;




class Karakter{
	string ad;
	int  numara;
	public:
	static int karakterSayisi;
	protected:
	int guc;
	int dayaniklilik;
	public:
		Karakter(string  ad="default"){	
				karakterSayisi++;
				this->ad=ad;
				this->numara =1000+karakterSayisi;
				this->guc =100;
				this->dayaniklilik =100;
				cout<<ad<<" karakteri olusturuldu."<<endl;
			
				}
				Karakter(Karakter & k){	
				this->ad=k.getAd();
				this->numara=k.getNo();
				this->guc =k.getGuc();
				this->dayaniklilik =k.getDayaniklilik();
				}
		
		void setAd(string ad){
			this->ad=ad;
		}
		
		void setNumara(int numara){
			this->numara =numara;
		}
	
		void setGuc(int guc){
			this->guc=guc;
		}
		
		void setDayaniklilik(int daya){
			this->dayaniklilik =daya;
		}
		
		string getAd(){
			return ad;
		}
		
		int  getNo(){
			return numara;
		}
		 int getGuc(){
			return guc;
		}
		
		 int  getDayaniklilik(){
			return dayaniklilik;
		}
	
	virtual	int Saldir(){
				return (guc*10)/100;
			}
		
	virtual	int Savun(){
				return (dayaniklilik*10)/100;
			}
		
		static int getKarakterSayisi(){
			return karakterSayisi;
		}
		
	~Karakter(){
		karakterSayisi--;
	}
	
	
	
};

 int Karakter::karakterSayisi=0;

class Sovalye:public Karakter{

		 	Item* itemTakimi[3];
		
			public:
				Sovalye():Karakter("Sovalye"){
				this->setGuc(500);
				this->setDayaniklilik(350);
				itemTakimi[0]=new Kalkan();
				itemTakimi[1]=new Kilic();
				itemTakimi[2]=new Dizlik();
				
					this->guc+=itemTakimi[0]->getSaldiriGucu();
					this->guc+=itemTakimi[1]->getSaldiriGucu();
					this->guc+=itemTakimi[2]->getSaldiriGucu();
					this->dayaniklilik+=itemTakimi[0]->getSavunmaGucu();
					this->dayaniklilik+=itemTakimi[1]->getSavunmaGucu();
					this->dayaniklilik+=itemTakimi[2]->getSavunmaGucu();
				}
				
				Sovalye(Sovalye & s):Karakter(s){
				this->setGuc(s.getGuc());
				this->setDayaniklilik(s.getDayaniklilik());
				this->itemTakimi[0]=s.itemTakimi[0];
				this->itemTakimi[1]=s.itemTakimi[1];
				this->itemTakimi[2]=s.itemTakimi[2];

				}
			
				
				int Saldir(){
					return (guc*15)/100;
				}
		
				int Savun(){
					return (dayaniklilik*10)/100;
				}

};

class Atli:public Karakter{

		 	Item* itemTakimi[3];
		
			public:
				Atli():Karakter("Atli"){
				this->setGuc(600);
				this->setDayaniklilik(300);
				itemTakimi[0]=new At();
				itemTakimi[1]=new Mizrak();
				itemTakimi[2]=new Migfer();
				this->guc+=itemTakimi[0]->getSaldiriGucu();
				this->guc+=itemTakimi[1]->getSaldiriGucu();
				this->guc+=itemTakimi[2]->getSaldiriGucu();
				this->dayaniklilik+=itemTakimi[0]->getSavunmaGucu();
				this->dayaniklilik+=itemTakimi[1]->getSavunmaGucu();
				this->dayaniklilik+=itemTakimi[2]->getSavunmaGucu();
				}
				
				Atli(Atli & s):Karakter(s){
				this->setGuc(s.getGuc());
				this->setDayaniklilik(s.getDayaniklilik());
				this->itemTakimi[0]=s.itemTakimi[0];
				this->itemTakimi[1]=s.itemTakimi[1];
				this->itemTakimi[2]=s.itemTakimi[2];

				}
			
				int Saldir(){
					return (guc*20)/100;
				}
		
				int Savun(){
					return (dayaniklilik*5)/100;
				}

};

