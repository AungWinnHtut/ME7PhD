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
/*funRand.c*/
int funRand(int iRandMax); 



int main()
{

	int ux=0,uy=0; /*user locatrion var*/
	int dx=0,dy=0;
   int t1x=0,t1y=0;
	int level = 1;
	int i=0; 
   int j=0;
	time_t t;
	char user_input_key;
	char ans;
   int life=100;

	srand((unsigned) time(&t));
	ux=funRand(641);
	uy=funRand(481);
	dx=funRand(641);
	dy=funRand(481);

  t1x=funRand(641);
  t1y=funRand(481);

		
   
   	do{
   		 system("cls");
   		 printf("user x = %d\n",ux);
		    printf("user y = %d\n",uy);
		    printf("door x = %d\n",dx);
		    printf("door y = %d\n",dy); 
          printf("trap1 x = %d\n",t1x);
          printf("trap1 y = %d\n",t1y);  
		    printf("level = %d\n",level);
          printf("Life ");
          for(j=0;j<=life;j++)
          {
            printf("*");
          }
          printf("\n");

   		 user_input_key = _getch();
   		
   		 if(user_input_key == -32)
	    	   user_input_key = _getch();

         switch(user_input_key)
         {
            case 75: if(--ux<0) ux=640; break; /*Left*/                      
            case 77: if(++ux>640) ux=0; break; /*Right*/
            case 72: if(--uy<0) ux=480; break; /*Up*/
            case 80: if(++uy>480) ux=0; break; /*Down*/
            case 27: printf("are you sure to exit ? y/n"); 
                     ans=getchar(); if(ans=='y'||ans=='Y') exit(0);
         }



         if(ux==t1x && uy==t1y)
         {
            life=life-10;
         }

         if(life<=0)
         {
            printf("you are dead!");
            exit(0);
         }

   		if(ux==dx && uy==dy)
   		{
   			level++;
   		}



   	}while(user_input_key!=27);
	return 0;
}



