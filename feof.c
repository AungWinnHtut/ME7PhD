#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char ch;
	int i=0;

	fp=fopen("emptyfile.txt","r");
	if (fp==NULL)
	{
		printf("file open error,\n");
		printf("%0x",fp);
		return -1;
	}
	else
	{
		printf("file OK\n");
		printf("file location is at 0x%0x\n",fp);
		printf("feof is %d",feof(fp));
		while(!feof(fp))
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		


	}

	fclose(fp);
	
	return 0;
}