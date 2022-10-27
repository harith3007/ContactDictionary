#include<stdio.h>
#include<functions.h>
#include<macros.h>
#include<string.h>
#include<struct.h>
#include<stdlib.h>

int pass_reset()
{
	char new_pass[MAX];
	char username[MAX];
	
	FILE *fp;
	fp = fopen("../data/users.txt","r");

	if(fp == NULL)
	{
		printf("\nFile does not exists!!!");
	}
	else
	{
		char uname[MAX];
		char pword[MAX];
		struct users *start = NULL;
		fscanf(fp,"%s%s",uname,pword);
		while(!feof(fp))
		{
			struct users *temp = (struct users*)calloc(1,sizeof(struct users));
			strcpy(temp->uname,uname);
			strcpy(temp->pword,pword);
			temp->link=NULL;
			if(start == NULL)
			{
				start = temp;
			}
			else
			{
				struct users *q = start;
				while(q->link!=NULL)
					q=q->link;
				q->link = temp;
			}
			fscanf(fp,"%s%s",uname,pword);
		}
		fclose(fp);
		//remove("../data/users.txt");
		printf("\nEnter the user name:-");
		scanf("%s",username);
		
		struct users *q = start;
		
		while(q!=NULL)
		{
			if(strcmp(q->uname,username)==0 && strcmp(q->pword,"changeme")==0)
			{
				printf("\nEnter the new password");
				scanf("%s",new_pass);
				strcpy(q->pword,new_pass);
				break;
				//return;
			}
			q=q->link;
		}

		FILE *fr;
		fr = fopen("../data/users.txt","a");

		q = start;
		while(q!= NULL)
		{
			fprintf(fr,"%s %s\n",q->uname,q->pword);
			q=q->link;
		}
	
		fclose(fr);
	}
	return 1;
}



		






		/*printf("\nEnter new password:-");
		scanf("%s",new_pass);
		printf("\nconfirm new passwors:-");
		scanf("%s",confirm_pass);
		while(1)
		{
			if(strcmp(new_pass,confirm_pass)!=0)
			{
				printf("\npassword does not match!!");

			}
			break;
		}

		fprintf(fp,"%s",new_pass);
		fclose(fp);
		return 1;
	}
			

}*/
