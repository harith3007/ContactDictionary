/*void add_new_contact()
{

}*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<struct.h>
#include<functions.h>
#include<macros.h>
void add_new_contact()
{
	printf("\nPress 1:personal\n2:business");
	int option;
	scanf("%d",&option);
	if(option==1)
	{
		
	        FILE *fp;
	        fp=fopen("../data/personal.txt","a");
		struct personal *head = NULL;
		struct personal *temp=(struct personal *)calloc(1,sizeof(struct personal));
		
		printf("\nEnter the contact id:-");
		scanf("%d",&temp->contactid);
		while(1)
		{
			printf("\nEnter the first name:-");
			scanf("%s",temp->firstname);
			if(val_name(temp->firstname))
				break;
			else
				printf("\nName is not valide!!");
		}
		while(1)
		{
			printf("\nEnter the last name:-");
			scanf("%s",temp->lastname);
			if(val_name(temp->lastname))
				break;
			else
				printf("\nName is not valid!!");
		}
		while(1)
		{
			printf("\nEnter the mobile Number 1:-");
			scanf("%s",temp->mobileno1);
			if(val_mobileno(temp->mobileno1))
				break;
			else
				printf("\nEnter valid mobile number!!");
		}
		while(1)
		{
			printf("\nEnter the mobile Number 2:-");
			scanf("%s",temp->mobileno2);
			if(val_mobileno(temp->mobileno2))
				break;
			else
				printf("\nEnter valid mobile number!!");
		}
		while(1)
		{
			printf("\nEnter the email id 1:-");
			scanf("%s",temp->emailid1);
			if(val_emailid(temp->emailid1))
				break;
			else
				printf("\nEnter valid email like abcd@gmail.com");
		}
		while(1)
		{
			printf("\nEnter the email id 2:-");
			scanf("%s",temp->emailid2);
			if(val_emailid(temp->emailid2))
				break;
			else
				printf("\nEnter valid email like abcd@gmail.com");
		}
		printf("\nEnter the address:-");
		scanf("%s",temp->address);
		while(1)
		{
			printf("\nEnter the whatsapp number:-");
			scanf("%s",temp->whatsapp_mb);
			if(val_mobileno(temp->whatsapp_mb))
				break;
			else
				printf("\nEnter valid whatsapp number!!");
		}
		while(1)
		{
			printf("\nPress yes or no for emergency contact:-");
			scanf("%s",temp->emergencycontact);
			if(val_emergencycontact(temp->emergencycontact))
				break;
			else
				printf("\nplease enter yes or no only");
		}

		
		temp->link=NULL;
		if(head == NULL)
		{
			head = temp;
			fprintf(fp,"%d %s %s %s %s %s %s %s %s %s \n",temp->contactid,temp->firstname,temp->lastname,temp->mobileno1,temp->mobileno2,temp->emailid1,temp->emailid2,temp->address,temp->whatsapp_mb,temp->emergencycontact);
		
		}
		else
		{
			struct personal *q=head;
			while(q->link!=NULL)
			{
				q=q->link;
			}
			q->link = temp;
			fprintf(fp,"%d %s %s %s %s %s %s %s %s %s \n",temp->contactid,temp->firstname,temp->lastname,temp->mobileno1,temp->mobileno2,temp->emailid1,temp->emailid2,temp->address,temp->whatsapp_mb,temp->emergencycontact);
		}
		fclose(fp);
	}
		
	else
	{
		if(option == 2)
		{
			FILE *fr;
			fr=fopen("../data/business.txt","a");
			struct business *head = NULL;
			struct business *tmp=(struct business *)calloc(1,sizeof(struct business));

			printf("\nEnter the contact id:-");
			scanf("%d",&tmp->contactid);
			
			while(1)
			{
				printf("\nEnter the first name:-");
				scanf("%s",tmp->firstname);
				if(val_name(tmp->firstname))
					break;
				else
					printf("\nName is not valide!!");
			}
			while(1)
			{
				printf("\nEnter the last name:-");
				scanf("%s",tmp->lastname);
				if(val_name(tmp->lastname))
					break;
				else
					printf("\nName is not valid!!");
			}
			while(1)
			{
				printf("\nEnter the mobile Number 1:-");
				scanf("%s",tmp->mobileno1);
				if(val_mobileno(tmp->mobileno1))
					break;
				else
					printf("\nEnter valid mobile number!!");
			}
			while(1)
			{
				printf("\nEnter the mobile Number 2:-");
				scanf("%s",tmp->mobileno2);
				if(val_mobileno(tmp->mobileno2))
					break;
				else
					printf("\nEnter valid mobile number!!");
			}
			while(1)
			{
				printf("\nEnter the email id 1:-");
				scanf("%s",tmp->emailid1);
				if(val_emailid(tmp->emailid1))
					break;
				else
					printf("\nEnter valid email like abc@gmail.com");
			}
			while(1)
			{
				printf("\nEnter the email id 2:-");
				scanf("%s",tmp->emailid2);
				if(val_emailid(tmp->emailid2))
					break;
				else
					printf("\nEnter valid email like abc@gmail.com");
			}
			printf("\nEnter the company name:-");
			scanf("%s",tmp->company);

			printf("\nEnter the designation:-");
			scanf("%s",tmp->designation);
			
			tmp->link=NULL;
			if(head==NULL)
			{
				head=tmp;
				fprintf(fr,"%d %s %s %s %s %s %s %s %s \n",tmp->contactid,tmp->firstname,tmp->lastname,tmp->mobileno1,tmp->mobileno2,tmp->emailid1,tmp->emailid2,tmp->company,tmp->designation);
			}
			else
			{
				struct business *p=head;
				while(p->link!=NULL)
					p=p->link;
				p->link=tmp;
				fprintf(fr,"%d %s %s %s %s %s %s %s %s \n",tmp->contactid,tmp->firstname,tmp->lastname,tmp->mobileno1,tmp->mobileno2,tmp->emailid1,tmp->emailid2,tmp->company,tmp->designation);
			}
			fclose(fr);
		}
	}
}


			



