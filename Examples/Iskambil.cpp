#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

//seriler
#define kupa (0)
#define sinek (1)
#define maca (2)
#define karo (3)

//degerler
#define as (0)
#define vale (10)
#define kiz (11)
#define kral (12)



class Kart{
	private:
		int seri;
		int deger;
	public:
	Kart(int seri=kupa,int deger=2):seri(seri),deger(deger){}
	int getSeri()const{return seri;}	
	int  getDeger()const{return deger;}
	void yazdir(){
		switch(seri){
			case kupa:
				cout<<"Kupa ";
				break;
			case sinek:
				cout<<"Sinek ";
				break;
			case maca:
				cout<<"Maca ";
				break;
			case karo:
				cout<<"Karo ";
				break;
			
		}
		
		switch(deger){
			case as:
				cout<<"As ";
				break;
			case vale:
				cout<<"Vale ";
				break;
			case kiz:
				cout<<"Kiz ";
				break;
			case kral:
				cout<<"Kral ";
				break;
				default:
				cout<<deger<<endl;	
		}		
		cout<<endl;
	}

	
};


class Deste {
		Kart kartlar[52];
		public:
			Deste(){
				for(int i=0;i<52;i++){
					kartlar[i]=Kart(i/13,i%13);
				}
			}
			
			void yazdir(){
				for(int i=0;i<52;i++){
					kartlar[i].yazdir();
				}
			}
			
			void karistir(){
				Kart temp;
				for(int i=0;i<50;i++){
					int x=rand()%52;
					int y=rand()%52;
					temp=kartlar[x];
					kartlar[x]=kartlar[y];
					kartlar[y]=temp; 				}
			}
		
	};




int main(){
	srand(time(0));
	
	Kart k(sinek,vale);
	k.yazdir();
	
	Kart k1(2,11);
	k1.yazdir();
	
	
	Deste deste;
	
	deste.yazdir();
	
	cout<<"Karistirdik.."<<endl<<endl;
	deste.karistir();
	deste.yazdir();
}


