#include <iostream>
using namespace std;

class Printer{
	
	public:
		string kind;
		Printer(string kind) :kind(kind){
			cout<<"Printer classs"<<endl;
			
		}
};


class Scanner{
	public:
		string kind;
		Scanner(string kind) : kind(kind){
			cout<<"Scanner classs"<<endl;
		}
};

class Device :public Printer,public Scanner{

	public:
		Device(string kind,string kind1) :Printer(kind),Scanner(kind1){
		cout<<"Device class"<<endl;
		
	//scope belirlenmelidir
		cout<<Printer::kind<<endl;
		cout<<Scanner::kind<<endl;
	}
};




int main(){
	
	Device device("xprinter","yscanner");
	cout<<device.Printer::kind<<endl;
	
}
