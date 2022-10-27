/*void List_all_business_contacts()
{

}*/

#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
#include<macros.h>
#include<string.h>
#include<struct.h>
void List_all_business_contacts()
{
	FILE *fr = fopen("../data/business.txt","r");
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
		char company[MAX];
		char designation[MAX];
		printf("\n**************************************************************************\n");
		printf("*                        LIST OF ALL BUSINESS CONTACTS                       *");
		printf("\n**************************************************************************\n");
			
		struct business *start=NULL;
		
		fscanf(fr,"%d%s%s%s%s%s%s%s%s",&contactid,firstname,lastname,mobileno1,mobileno2,emailid1,emailid2,company,designation);
		while(!feof(fr))
		{
			struct business *temp = (struct business*)calloc(1,sizeof(struct business));
			temp->contactid=contactid;
			strcpy(temp->firstname,firstname);
			strcpy(temp->lastname,lastname);
			strcpy(temp->mobileno1,mobileno1);
			strcpy(temp->mobileno2,mobileno2);
			strcpy(temp->emailid1,emailid1);
			strcpy(temp->emailid2,emailid2);
			strcpy(temp->company,company);
			strcpy(temp->designation,designation);
			
			temp->link=NULL;
			if(start == NULL)
			{
				start=temp;
			}
			else
			{
				struct business *q = start;
				while(q->link!=NULL)
				{
					q=q->link;
				}
				q->link=temp;
			}
			fscanf(fr,"%d%s%s%s%s%s%s%s%s",&contactid,firstname,lastname,mobileno1,mobileno2,emailid1,emailid2,company,designation);
		}
		fclose(fr);
		
		struct business *q=start;
		while(q!= NULL)
		{
			printf("\n%d %s %s %s %s %s %s %s %s",q->contactid,q->firstname,q->lastname,q->mobileno1,q->mobileno2,q->emailid1,q->emailid2,q->company,q->designation);
			q=q->link;
		}
	}
}

