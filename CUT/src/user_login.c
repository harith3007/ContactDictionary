#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<macros.h>
#include<functions.h>
int user_login()
{
	clear();
	int found=0;
	FILE *fp;
	fp = fopen("../data/users.txt","r");

	if(fp == NULL)
	{
		printf("\nFile does not exists!!");
		return 0;
	}
	else
	{
		clear();
		char uname[MAX],pword[MAX],username[MAX],password[MAX];
		fscanf(fp,"%s%s",uname,pword);
		
		printf("\nEnter  username:-");
		scanf("%s",username);
		printf("\nEnter  password:-");
		scanf("%s",password);
		while(!feof(fp))
		{
			if(strcmp(uname,username)==0 && strcmp(pword,password)==0)
			{
				found++;
				printf("\n******************************************************");
				printf("\n               USER LOGIN SUCCESSFULLY                ");
				printf("\n******************************************************");
				break;
			}
			fscanf(fp,"%s%s",uname,pword);
		}
	}
	if(found == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	fclose(fp);
	
}

