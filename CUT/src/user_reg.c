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
		char pword[MAX];
		
		printf("\n***********************WELCOME TO REGISTRATION FORM************************");
		printf("\n\nEnter Username:-");
		scanf("%s",uname);

		
		printf("\n\nEnter the default Password is changeme :-");
		scanf("%s",pword);
		if(strcmp(pword,"changeme")==0)
		{
			fprintf(fp,"%s %s\n",uname,pword);
		}
		fclose(fp);
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

		
	}
}
