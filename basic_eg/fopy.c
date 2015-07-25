#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char** argv)
{
	FILE* fp;
	FILE* fout;
	char ifname[100];
	char ofname[100];
	char ch;
	int i=0;


	printf("argc = %d\n",argc);
	for (i=0;i<argc;i++)
	{
		printf("argv = %s \n",argv[i]);
	}
	
	strcpy(ifname,argv[1]);
	strcpy(ofname,argv[2]);
	/*printf("enter input file name ");
	scanf("%s",ifname);
	printf("\nenter output file name ");
	scanf("%s",ofname);*/

	fp=fopen(ifname,"r");
	fout=fopen(ofname,"w");

	if (fp==NULL)
	{
		printf("file open error, Error Code: ");
		printf("%0x",fp);
		return -1;
	}
	else
	{
		printf("file OK\n");
		printf("file location is at 0x%0x\n",fp);
		
		while(!feof(fp))
		{
			ch=fgetc(fp);
			printf("%c",ch);
			fprintf(fout,"%c",ch);
		}
		printf("\n");
		


	}

	fclose(fp);
	fclose(fout);
	

	return 0;
}
