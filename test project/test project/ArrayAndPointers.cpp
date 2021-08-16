#include <iostream>
#include "stdafx.h"
#include "pointers.h"

using namespace std;

int ArrayAndPointers(){
	int scores[] = {100,200,300}; //array 

	int *ptr_scores = nullptr; //pointer pointing nowhere 

	ptr_scores = scores; //pointer having the address of the array (array itself points to the first address of the allocated space) therefore &scores is not used 

	cout<<"Value of scores"<<scores<<endl;

	cout<<"Value of pointer scores"<<ptr_scores<<endl;
	
	cout<<"scores"<<scores[0]<<endl;
	cout<<"scores"<<scores[1]<<endl;
	cout<<"scores"<<scores[2]<<endl<<endl;
	
	cout<<"scores"<<ptr_scores[0]<<endl;
	cout<<"scores"<<ptr_scores[1]<<endl;
	cout<<"scores"<<ptr_scores[2]<<endl<<endl;
	
	
	cout<<"scores"<<*ptr_scores<<endl;
	cout<<"scores"<<*(ptr_scores+1)<<endl;
	cout<<"scores"<<*(ptr_scores+2)<<endl<<endl;
	
	cout<<"scores"<<*scores<<endl;
	cout<<"scores"<<*(scores+1)<<endl;
	cout<<"scores"<<*(scores+2)<<endl<<endl;


	return 0;






}
