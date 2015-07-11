/*
//Program main.c , part of Game
//2015071101
///////////////////////
// 1- generate 2 random value between 
// 0 to 640  for x and 0 to 480 for  y (user location)
// int funRand(int MaxRand)

// 2- generate 2 random value between 
// 0 to 640  for x and 0 to 480 for  y (door location)

//3- loop
//		1) read use input
//			a) if up y-- if(y<0) y=480
//			b) if down y++ if(y>480) y=0
//			c) if left x-- if(x<0) x=640
//			d) if right x++ if(x>640) x=0
//			e) if esapse ask user to exit?
//				i) if yes then exit
//				ii) if no then continue
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int funRand(int MaxRand);
int funRand2(int max);
void ran(void);
int main()
{

	int ux=0,uy=0; /*user locatrion var*/
	int dx=0,dy=0;
	int i=0; 
	time_t t;
	srand((unsigned) time(&t));
	ux=funRand(641);
	uy=funRand(481);
	dx=funRand(641);
	dy=funRand(481);

	printf("user x = %d\n",ux);
	printf("user y = %d\n",uy);
	printf("door x = %d\n",dx);
	printf("door y = %d\n",dy);   	
   
	return 0;
}

int funRand(int MaxRand)
{
	int iRandOut=0;	
	iRandOut = rand() % MaxRand;	
	return iRandOut;
}

