#include <iostream>
#include "stdafx.h"
#include "pointers.h"

using namespace std;



void Arrays(){

	/*****************************************************************************
			ARRAY declaration SYNTAX
			Element_type Array_Name [size (fixed no. of elements]
			
			size is fixed --> compiler must know the size before at compile time 
			
			int test_scores [5];
			
	NOTE : 	Best Practice is to ALWAYS INITIALIZE ARRAYS when you Declare Them 
	*****************************************************************************/
	
	        // Initialization SYNTAX
	        
	        // Element_type Array_Name [size (fixed no. of elements] {init list}
	        
	        int test_scores [5] = {1,2,3,4,5};
	        
	        int scores [10] =  {3,4}; //init to 3,4 and remaining to 10
	        
	        const int days_in_year = {365};
	        double temperature [days_in_year] = {0}; // init all to 10
	        
	        int magic_no [] = {1,2,3,4,5}; //size automatically calculated
	        
	/*****************************************************************************
			BEHIND THE SCENES 
	*****************************************************************************
       * The name of the Array represet the first element of the Array (index 0)
	   * The [index] represent the offset from the beginning of the array 
	   * NO BOUND CHECKING 
	     if you declare array size 5 and ask for to display the 10th index 
	     it will happily Do It :)
    *****************************************************************************/
    
        char vowels [] =  {'a','e','i','o','u'};
		cout<<"\n value the array name is:"<<vowels;

		//cin>>vowels[5];//PROGRAM WILL CRASH 

		/*int numbers [5];
        cout<<"numbers[0]"<<numbers[0]<<endl; // will display junk values 
        cout<<numbers[1]<<endl;
        cout<<numbers[2]<<endl;
        cout<<numbers[3]<<endl;
        cout<<numbers[4]<<endl;*/
        
        int numbers1 [5] = {}; //all initialize to 0
        cout<<numbers1[0]<<endl;  
        cout<<numbers1[1]<<endl;
        cout<<numbers1[2]<<endl;
        cout<<numbers1[3]<<endl;
        cout<<numbers1[4]<<endl;
        
        int numbers2 [5] = {100}; // index 0 is 100 and all others are 0
        cout<<numbers2[0]<<endl; // 100
        cout<<numbers2[1]<<endl; // 0 
        cout<<numbers2[2]<<endl; // 0
        cout<<numbers2[3]<<endl;
        cout<<numbers2[4]<<endl;



}