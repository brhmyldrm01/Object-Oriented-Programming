#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
using namespace std;


/*
void thread(void * param){
	while(1)
	cout<<"thread"<<endl;
}

*/
CRITICAL_SECTION cs;
int i;
int a[5];
void thread1(void *param){
int num=0;	
	while(1){
		
		EnterCriticalSection(&cs);
		for(i=0;i<5;i++)
		a[i]=num;	num++;
		LeaveCriticalSection(&cs);
	
	}
}


int main(void){
//	_beginthread(thread,0,NULL);
	
//	while(1)
//	cout<<"main "<< endl;


_beginthread(thread1, 0, NULL);
InitializeCriticalSection(&cs); 

		while(1){
		EnterCriticalSection(&cs);
		for(i=0;i<5;i++)
		cout<<a[i]<<" "<<endl;
		LeaveCriticalSection(&cs);
			}


}
