#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i1=1;
	int i2=2;
	int i3=3;
	int j[3];

	j[0]=1;
	j[1]=4;
	j[2]=110;

	

	printf("j[0]=%d size j[0]=%d bytes address j[0]=%0x\n",j[0],sizeof(j[0]),&j[0]);
	printf("j[1]=%d size j[1]=%d bytes address j[1]=%0x\n",j[1],sizeof(j[1]),&j[1]);
	printf("j[2]=%d size j[2]=%d bytes address j[2]=%0x\n",j[2],sizeof(j[2]),&j[2]);
	printf("address of &j[0]=j %0x\n",j);
	return 0;
}