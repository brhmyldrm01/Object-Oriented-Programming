#include <iostream>
using namespace std;








class Urun{
	private :
		double price;
		 string title;
		 public:
		 bool pack[2]= {false,false};
	public:
	virtual	void packing(){
			pack[0]=true;
			cout<<"any can"<<endl;
			
		}
		
		Urun(double price,string title){
			this->price=price;
			this->title=title;
		}
		void setPrice(double d){this->price=d;}
		double getPrice()const{return price;}	
		string getTitle()const{return title;}
		Urun(Urun&u){
			title=u.getTitle();
			price=u.getPrice();
		};
		
		
		
		virtual int getUretimBil()=0;
		virtual int getSatisBil()=0;
	
};

class Yiyecek:public Urun{
	private:
		double kg;
	public:
	/*
		void packing(){
			pack[0]=true;
			pack[1]=true;
			cout<<"Food can "<<endl;		}*/
		Yiyecek(double price=0.0,string title="Yiyecek",double kg=0.0):Urun(price,title),kg(kg){}
		double getKg()const{return kg;	}
		void setKg(double kg){this->kg=kg;}
		int  getUretimBil(){
			cout<<"Urununuz bir "<<Urun::getTitle()<<" 'dir.' Agirligi "<< kg <<" kilogramdir."<<endl;
		}
		int  getSatisBil(){
			cout<<"Urununuz bir "<<Urun::getTitle()<<" 'dir. Ucreti "<<Urun::getPrice()<<" tl'dir. "<< kg <<" kilogramdir."<<endl;
		}
		Yiyecek(Yiyecek&y): Urun(y) {kg=y.getKg();}
	


};


class Icecek:public Urun{
		private:
		double ml;
	public:
			void packing(){
			pack[0]=true;
			pack[1]=true;
			cout<<"beverage can"<<endl;		}
		Icecek (double price=0.0,string title="Yiyecek",double ml=0.0) :Urun(price,title), ml(ml){}
		double getMl()const{return ml;	}
		void setMl(double ml){this->ml=ml;}
	
	int  getUretimBil(){
			cout<<"Urununuz bir "<<Urun::getTitle()<<" 'dir.' Miktari "<< ml <<" mililitredir."<<endl;
		}
	int  getSatisBil(){
			cout<<"Urununuz bir "<<Urun::getTitle()<<" 'dir. Ucreti "<<Urun::getPrice()<<" tl'dir. "<< ml <<" mililitredir."<<endl;
		}
		Icecek(Icecek&I): Urun(I) {ml=I.getMl();}
	
};



int main(){
	Yiyecek elma;
	elma.getUretimBil();
	elma.getSatisBil();
	elma.packing();
	Icecek kola;
	kola.packing();
	
}



