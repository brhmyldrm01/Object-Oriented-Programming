#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
using namespace std;




int main(){
	
	vector<int> V;
	V.reserve(10);        //vektör kapasitesini belirler.
	cout<<V.size()<<endl; // vektör içinde bulunan eleman sayýsý
	cout<<V.capacity()<<endl;// vektörün kapasitesini döndürür.
	
	V.resize(15);    //kapasiteyi yeniden belirledik
	V[9]=35;         //atama islemi
	V.clear();       //vektördeki tüm öðeleri temzler
	bool e=V.empty();//vektörün boþ olup olmadýðýný döndürür.
	cout<<e<<endl;   // 1


	V.push_back(1);// eleman ekleme
	V.push_back(2);     
	V.insert(V.begin(),20); //verilen index'e ekleme
	V.insert(V.begin()+2,30); 
	V.insert(V.end(),40);
	

	//iterator ile vector yazdýrma  (20, 1, 30, 2, 40)
	vector<int>::iterator it;
	for( it=V.begin();it!=V.end();it++)
	cout<<*it<<" ";
		cout<<endl;


	
	vector <int> vct;
	for(int i=1;i<=6;i++)
	vct.push_back(i);
	
	vct.erase(vct.begin()+2);  //1 2 4 5 6 (verilen index deki elemaný siler)
	vct.erase(vct.begin(),vct.begin()+2);//4 5 6 (verilen aralýðý siler)
	vct.pop_back();  //4 5  sondan siler
	
	
		

		

	
	
	
}
