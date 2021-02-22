#include <iostream> 
using namespace std;



//Recursive olarak verilen boyutlarda kareler cizer.
void Kare(int x,int y){
	if(x<=0||y<=0){
		return ;
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++)
			if(i==0 || (i==(x-1)||(j==0)))
			cout<<"*";
			else if(j==(y-1)){
				for(int k=0;k<y-2;k++)
				cout<<" ";
				cout<<"*";
			}
			cout<<endl;	
	}
	cout<<endl;
	x=x/2;
	y=y/2;
	Kare(x,y);
	
}

int main(){
	
	int x,y;
	cout<<"x:"; cin>>x;
	cout<<"y:"; cin>>y;
	Kare(x,y);
		
}
