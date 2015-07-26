#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	float tf[100];
	float tc[100];
	FILE *fout;
	fout =  fopen("temp.txt","w");
	fprintf(fout," tf    - tc \n");
	for(i=0;i<100;i++)
	{
		tf[i] = (i*100) + 1000; /*y=mx+c*/
		tc[i] = (5 * (tf[i]-32)) /9;
		fprintf(fout," %4.2f    = 		%4.2f\n",tf[i],tc[i]);
	}


	fclose(fout);
	return 0;
}
