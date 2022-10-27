#include<stdio.h>
#include<stdlib.h>
#include<macros.h>
#include<string.h>
#include<functions.h>
int user_reg()
{
	FILE *fp;
	fp = fopen("../data/users.txt","a");

	if(fp == NULL)
	{
		printf("\nFile does not exists!!");
		return 0;
	}
	else
	{
		clear();
		char uname[MAX];
		char pword[MAX]="changeme";
		
		printf("\n***********************WELCOME TO REGISTRATION FORM************************");
		printf("\nEnter Username:-");
		scanf("%s",uname);

		
		printf("\nEnter the default Password is changeme :-");
		/*char ch1;
		int i;
		for(i=0;i<10;i++)
		{
			ch1=getch();
			pword[i]=ch1;
			if(ch1!=13)//13 is the ascii of enter key
				printf("*");
			if(ch1 == 13)
				break;
		}
		pword[i]='\0';*/
		scanf("%s",pword);
		if(strcmp(pword,"changeme")==0)
		{
			fprintf(fp,"%s %s\n",uname,pword);
		}
		if(strcmp(pword,"changeme")==0)
		{
			printf("\n****************************************************");
			printf("\n          USER REGISTRATION SUCCESSFUL              ");
			printf("\n****************************************************\n");
			return 1;
			
		}
		else
		{
			return 0;
		}

		fclose(fp);
	}
}
