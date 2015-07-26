#include <stdio.h>
#include <stdlib.h>
void funHello(void);
void funArea(void);
void funTempArray(int k);

int main()
{
    int iAns;
    int g=0;/*count*/
    do{
            system("cls");//creen clear
            printf("0-exit\n");
            printf("1-hello\n");
            printf("2-area\n");
            printf("3-Temp Array\n");
            printf("enter your choice ");
            scanf("%d",&iAns);
            switch(iAns)
            {
            case 0: exit(0);
            case 1:  funHello(); break;
            case 2:  funArea(); break;
            case 3:  printf("please enter count ");
                     scanf("%d",&g);
                     funTempArray(g);
                     break;
            default: printf("wrong input, try again \n");  system("pause");break;

            }

    }while(iAns!=0); //until user enter 0


    return 0;
}
