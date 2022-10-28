#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<macros.h>
#include<functions.h>
int admin()
{
	FILE *info;
	info = fopen("../data/admin.txt","r");

	if(info == NULL)
	{
		printf("\n\nFile does not exists!!");
		return 0;
	}
	else
	{
		clear();
		char admin[MAX],pass[MAX],username[MAX],password[MAX];
		fscanf(info,"%s %s",admin,pass);
		fclose(info);

		printf("\n\nEnter the admin username:-");
		scanf("%s",username);
		printf("\n\nEnter the password:-");
		scanf("%s",password);

		if(strcmp(admin,username)==0 && strcmp(pass,password)==0)
		{
			printf("\n****************************************************");
			printf("\n*             ADMIN LOGIN SUCCESSFULLY              *");
			printf("\n*****************************************************");
			return 1;
		}
		else
			return 0;
	}
}
