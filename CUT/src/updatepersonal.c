/*void update_personal()
{

}*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<struct.h>
#include<macros.h>
#include<functions.h>


void update_personal()
{
	char name[MAX];
	int contactid;
	char firstname[MAX];
	char lastname[MAX];
	char mobileno1[MAX];
	char mobileno2[MAX];
	char emailid1[MAX];
	char emailid2[MAX];
	char address[MAX];
	char whatsapp_mb[MAX];
	char emergencycontact[MAX];
	
	int choice;
	printf("\nenter the first name: ");
	scanf("%s",name);
	FILE *fr = fopen("../data/personal.txt","r");
	FILE *fw = fopen("../data/temp.txt","w");
	int cid;
    char fname[MAX],lname[MAX],mob1[MAX],mob2[MAX],e1[MAX],e2[MAX],addr[MAX],wno[MAX],ecno[MAX];
		//pers *head = NULL;
		fscanf(fr,"%d%s%s%s%s%s%s%s%s%s",&cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
		while(!feof(fr))
		{
			if(strcmp(fname,name)==0)
			{
				
				printf(" please enter \n\n1:update firstname \n2:update lastname \n3:update mobile number1 \n4:update mobile number 2 \n5:update emailid 1 \n6:update emailid 2 \n7:update address \n8:update whatsapp numbr \n9:update emergency contact \n10:back to menu\n");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:printf("\nenter data to update your firstname: ");
				       		scanf("%s",firstname);
				       		strcpy(fname,firstname);
						fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
				       		break;
					case 2:printf("\nenter data to update ur lastaname: ");
				       		scanf("%s",lastname);
				       		strcpy(lname,lastname);
						fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
				       		break;
					case 3:printf("\nenter data to update mobile number 1: ");
				       		scanf("%s",mobileno1);
				      		strcpy(mob1,mobileno1);
						fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
				       		break;
					case 4:printf("\nenter data to update mobile number 2: ");
				       		scanf("%s",mobileno2);
				       		strcpy(mob2,mobileno2);
						fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
				      		break;
					case 5:printf("\nenter the mail id 1 to update: ");
				      		scanf("%s",emailid1);
				       		strcpy(e1,emailid1);
						fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
				       		break;
					case 6:printf("\nenter the mail id 2 to update: ");
				      		scanf("%s",emailid2);
				       		strcpy(e2,emailid2);
						fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
				       		break;
					case 7:printf("\nenter adrees: ");
				       		scanf("%s",address);
				       		strcpy(addr,address);
						fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
				       		break;
					case 8:printf("\nenter data to update whatsapp number: ");
				       		scanf("%s",whatsapp_mb);
				       		strcpy(wno,whatsapp_mb);
						fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
				       		break;
					case 9:printf("\nenter data to update emergency contact: ");
				       		scanf("%s",emergencycontact);
				       		strcpy(ecno,emergencycontact);
						fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
				       		break;
					case 10:admin_menu();
					
					default:printf("  enter valid choice ");
				}
			}
			
		
			else if(strcmp(fname,name)!=0)
			{
				fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
			}

			fscanf(fr,"%d%s%s%s%s%s%s%s%s%s",&cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
		}
		fclose(fw);
		remove("../data/personal.txt");
		rename("../data/temp.txt","../data/personal.txt");
		fclose(fr);
}





		

	

