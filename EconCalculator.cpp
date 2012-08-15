// EconCalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
	#include <iostream>


	using namespace std;


	int _tmain()
	{enum menuOpts {profit = 1, atc = 2, avc = 3, afc = 4, PercentChange = 5, Realgdp = 6, PerCapgdp = 7, UnemploymentRate = 8, PercentIncreCpi = 9, Multiplier};

        

		//display the menu
	

          
		  cout << "Economics Calculator Menu\n" << endl
			  << "Select the following functions\n" << endl
			   << "[1] PROFIT" << endl
			   << "[2] AVERAGE TOTAL COST" << endl
			   << "[3] AVERAGE VARIABLE COST" << endl
			   << "[4] AVERAGE FIXED COST" << endl
			   << "[5] PERCENTAGE CHANGE" << endl
			   << "[6] REAL GROSS DOMESTIC PRODUCT" << endl
			   << "[7] PER CAPTIA REAL GDP" << endl
			   << "[8] UNEMPLOYMENT RATE" << endl
			   << "[9] PERCENT INCREASE IN CPI" <<endl
			   << "[10] MULITIPLIER\n" << endl;
		  

		       
//get the user's choice
		int usersChoice;
		
		cin >> usersChoice;
        
	double firstNumber;
		double secondNumber;

		
		cout << "Type first number\n" << endl;
		cin >> firstNumber;
		cout << "Type second number\n" << endl;
		cin >> secondNumber;

		
		

	    double cost;
		double sale;
		double variable;
		int output; // total output
	    double result;

		
		char theOperator;
	
		
		

	switch (usersChoice){
			case profit:
				result = firstNumber - secondNumber; 
				 theOperator = '-'; break;
			case atc:
				result = firstNumber / secondNumber;
				 theOperator = '/'; break;
			case avc:
				result = firstNumber / secondNumber;
				 theOperator = '/'; break;
			case afc:
				result = firstNumber / secondNumber;
				 theOperator = '/'; break;
			case PercentChange:
				result = (firstNumber - secondNumber) / firstNumber;
				theOperator = '-'; break;
			case Realgdp: 
				result = (firstNumber / secondNumber) * 100;
				theOperator = '/'; break;
			case PerCapgdp:
				result = firstNumber / secondNumber;
				theOperator = '/'; break;
			case UnemploymentRate:
				result = firstNumber / secondNumber;
				theOperator = '/'; break;
			case PercentIncreCpi:
				result = (firstNumber - secondNumber) / secondNumber *100 ;
				theOperator = '/'; break; 
			case Multiplier:
				result = firstNumber / secondNumber;
				theOperator = '/'; break;

			default:
				cout << "Error: bad menu choice " << endl; break;

			
	}
	
	 
    
	cout << "Result: " << result <<endl;

	

		system("pause");
		return 0;
	}

 