#include <iostream>
using namespace std;


class Nesne{
	public:
		int a;
		int b;
	public:
	Nesne(){a=0;}
	Nesne(int a){this->a=a;}
	
	
	//Operator Overloading(+,-,*,/,(),[],--,++)	
	
	Nesne operator+(const Nesne )const;
	Nesne operator+(const int  &)const;
	void operator()()const;
	int  operator ++(int);//veerilen parametre ile postfix(x++) oldugu belirlendi verilþmese prefix(++x) olarak kullanma analamýna gelirdi. 
	void Print(){cout<<this->a<<endl;}
	friend ostream &operator<<( ostream &output, const Nesne &N ){ 
         output << "a : " << N.a << " b: " << N.b;
         return output;            
      }

      friend istream &operator>>( istream  &input, Nesne &N ){ 
         input >> N.a >> N.b;
         return input;            
      }
	
};

Nesne Nesne::operator+(const Nesne n)const{
	Nesne temp;
	 temp.a=this->a+n.a;
	 return temp;
}




void Nesne::operator()()const{
	cout<<this->a<<endl<<this->a<<endl;

}

// ++ operatorunu cagýran nesnenýn karesini alacak sekilde overload edildi.
int Nesne::operator++(int){
		return (this->a)*(this->a);
}

Nesne Nesne::operator+(const int& x)const{
	Nesne temp;
	 temp.a=this->a+x;
	 return temp;
}





int main(){
	
	Nesne n1(4);
	Nesne n2(5);
	
	
	(n1+50).Print();
	n1.Print();
	

	n1.operator+(n2); //	(n1+n2).Print();
	n1.Print();
	n2.Print();
	
	
	n2();

	//++ operatorunu nesne classý için overload ettik ve bu operator ile nesne icerisndeki defgern karesi alýnýr hale geldi
	cout<<n2++<<endl;

	cin>>n2;
	cout<<n2<<endl;	
	
}



