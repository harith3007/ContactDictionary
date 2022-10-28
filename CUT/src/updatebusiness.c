
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<struct.h>
#include<macros.h>
#include<functions.h>


void update_business()
{
	char name[MAX];
	int contactid;
	char firstname[MAX];
	char lastname[MAX];
	char mobileno1[MAX];
	char mobileno2[MAX];
	char emailid1[MAX];
	char emailid2[MAX];
	char company[MAX];
	char designation[MAX];
	
	int choice;
	printf("Enter the first name to update contact: ");
	scanf("%s",name);
	FILE *fr = fopen("../data/business.txt","r");
	FILE *fw = fopen("../data/temp.txt","w");
	int cid;
    char fname[MAX],lname[MAX],mob1[MAX],mob2[MAX],e1[MAX],e2[MAX],com[MAX],desi[MAX];
		//pers *head = NULL;
		fscanf(fr,"%d%s%s%s%s%s%s%s%s",&cid,fname,lname,mob1,mob2,e1,e2,com,desi);
		while(!feof(fr))
		{
			if(strcmp(fname,name)==0)
			{
				
				printf("\n\n1:update firstname \n\n2:update lastname \n\n3:update mobile number1 \n\n4:update mobile number 2 \n\n5:update emailid 1 \n\n6:update emailid 2 \n\n7:update company name \n\n8:update designation \n\n9:back to menu\n\n");
				printf("\nPlease enter your option: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:printf("\nEnter data to update your firstname: ");
				       		scanf("%s",firstname);
				       		strcpy(fname,firstname);
				       		break;
					case 2:printf("\nEnter data to update ur lastaname: ");
				       		scanf("%s",lastname);
				       		strcpy(lname,lastname);
				       		break;
					case 3:printf("\nEnter data to update mobile number 1: ");
				       		scanf("%s",mobileno1);
				      		strcpy(mob1,mobileno1);
				       		break;
					case 4:printf("\nEnter data to update mobile number 2: ");
				       		scanf("%s",mobileno2);
				       		strcpy(mob2,mobileno2);
				      		break;
					case 5:printf("\nEnter the mail id 1 to update: ");
				      		scanf("%s",emailid1);
				       		strcpy(e1,emailid1);
				       		break;
					case 6:printf("\nEnter the mail id 2 to update: ");
				      		scanf("%s",emailid2);
				       		strcpy(e2,emailid2);
				       		break;
					case 7:printf("\nEnter data to update company name: ");
				       		scanf("%s",company);
				       		strcpy(com,company);
				       		break;
					case 8:printf("\nEnter data to update designation: ");
				       		scanf("%s",designation);
				       		strcpy(desi,designation);
				       		break;
					case 9:admin_menu();
					
					default:printf("nEnter valid choice ");
				}
				fprintf(fw,"%d %s %s %s %s %s %s %s %s \n",cid,fname,lname,mob1,mob2,e1,e2,com,desi);
			}
			
		
			else if(strcmp(fname,name)!=0)
			{
				fprintf(fw,"%d %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,com,desi);
			}

			fscanf(fr,"%d%s%s%s%s%s%s%s%s",&cid,fname,lname,mob1,mob2,e1,e2,com,desi);
		}
		fclose(fw);
		remove("../data/business.txt");
		rename("../data/temp.txt","../data/business.txt");
		fclose(fr);
}





		

	

