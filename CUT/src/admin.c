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
		printf("\nFile does not exists!!");
		return 0;
	}
	else
	{
		clear();
		char admin[MAX],pass[MAX],username[MAX],password[MAX];
		fscanf(info,"%s %s",admin,pass);
		fclose(info);

		printf("\nEnter the admin username:-");
		scanf("%s",username);
		printf("\nEnter the password:-");
		scanf("%s",password);

		if(strcmp(admin,username)==0 && strcmp(pass,password)==0)
		{
			printf("*****************************************************");
			printf("\nADMIN LOGIN SUCCESSFULLY\n");
			printf("*****************************************************");
			return 1;
		}
		else
			return 0;
	}
}
