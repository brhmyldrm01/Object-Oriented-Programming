#include <iostream>
using namespace std;


class myclass{
	public:
	int size;
	int *p;

	public:
		
		myclass(myclass&my ){
			this->size=my.size;
			
			//Copy constructor ile dizi kopyalama
			this->p=new int[size];
			for(int i=0;i<size;i++){
				this->p[i]=my.p[i];
			}
		}

		myclass(int sz){
			p=new int[sz];
			if(!p) exit(1);
			size=sz;
			for(int i=0;i<size;i++){
				p[i]=2*i;
			}
		}
		~myclass(){
			delete [] p;
		}
		int* get(int i){return &p[i];
		}
			int getSize(){return size;
		}
	
		
};

	void show(myclass& a){
			cout<<"array : "; for(int i=0;i<a.getSize();i++)cout<<a.get(i)<<" ";cout<<endl;}


int main(){
	myclass obj1(5);
	show(obj1);
	myclass obj2=obj1;
	show(obj2);
	

}



