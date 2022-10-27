/*void List_all_personel_contacts()
{

}*/
#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
#include<macros.h>
#include<string.h>
#include<struct.h>
void List_all_personal_contacts()
{
	FILE *fr = fopen("../data/personal.txt","r");
	if(fr == NULL)
	{
		printf("file doesnot exist ");
	}
	else
	{
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
		printf("\n**************************************************************************\n");
		printf("*                        LIST OF ALL PERSONEL CONTACTS                       *");
		printf("\n**************************************************************************\n");
			
		struct personal *start=NULL;
		
		fscanf(fr,"%d%s%s%s%s%s%s%s%s%s",&contactid,firstname,lastname,mobileno1,mobileno2,emailid1,emailid2,address,whatsapp_mb,emergencycontact);
		while(!feof(fr))
		{
			struct personal *temp = (struct personal*)calloc(1,sizeof(struct personal));
			temp->contactid=contactid;
			strcpy(temp->firstname,firstname);
			strcpy(temp->lastname,lastname);
			strcpy(temp->mobileno1,mobileno1);
			strcpy(temp->mobileno2,mobileno2);
			strcpy(temp->emailid1,emailid1);
			strcpy(temp->emailid2,emailid2);
			strcpy(temp->address,address);
			strcpy(temp->whatsapp_mb,whatsapp_mb);
			strcpy(temp->emergencycontact,emergencycontact);
			
			temp->link=NULL;
			if(start == NULL)
			{
				start=temp;
			}
			else
			{
				struct personal *q = start;
				while(q->link!=NULL)
					q=q->link;
				        q->link=temp;
			}
			fscanf(fr,"%d%s%s%s%s%s%s%s%s%s",&contactid,firstname,lastname,mobileno1,mobileno2,emailid1,emailid2,address,whatsapp_mb,emergencycontact);
		}
		fclose(fr);
		
		struct personal *q=start;
		while(q!= NULL)
		{
			printf("\n%d %s %s %s %s %s %s %s %s %s",q->contactid,q->firstname,q->lastname,q->mobileno1,q->mobileno2,q->emailid1,q->emailid2,q->address,q->whatsapp_mb,q->emergencycontact);
			q=q->link;
		}
	}
}
