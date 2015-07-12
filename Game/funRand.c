/*
		Program: funRand.c   
		This program is used to generate RANDOM number 
		https://github.com/AungWinnHtut/ME7PhD.git
		Programmer: Dr. Aung Win Htut
		License: MIT opensource license

		To use funRand() 
		1) insert following code of line in calling function
			srand((unsigned) time(&t));
		2) supply Maximum value for Random number upper boundary
		3) Result will be 0 to Maximum-1
	*/

#include<stdlib.h>
int funRand(int MaxRand)
{
	int iRandOut=0;	
	iRandOut = rand() % MaxRand;	
	return iRandOut;
}